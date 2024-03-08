/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datasync/model/SmbMountOptions.h>
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CreateLocationSmbRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CreateLocationSmbRequest">AWS
   * API Reference</a></p>
   */
  class CreateLocationSmbRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationSmbRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationSmb"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * subdirectory, DataSync must be able to mount the SMB share and access all of its
     * data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Specifies the Domain Name Service (DNS) name or IP address of the SMB file
     * server that your DataSync agent will mount.</p>  <p>You can't specify an
     * IP version 6 (IPv6) address.</p> 
     */
    inline const Aws::String& GetServerHostname() const{ return m_serverHostname; }

    /**
     * <p>Specifies the Domain Name Service (DNS) name or IP address of the SMB file
     * server that your DataSync agent will mount.</p>  <p>You can't specify an
     * IP version 6 (IPv6) address.</p> 
     */
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }

    /**
     * <p>Specifies the Domain Name Service (DNS) name or IP address of the SMB file
     * server that your DataSync agent will mount.</p>  <p>You can't specify an
     * IP version 6 (IPv6) address.</p> 
     */
    inline void SetServerHostname(const Aws::String& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = value; }

    /**
     * <p>Specifies the Domain Name Service (DNS) name or IP address of the SMB file
     * server that your DataSync agent will mount.</p>  <p>You can't specify an
     * IP version 6 (IPv6) address.</p> 
     */
    inline void SetServerHostname(Aws::String&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::move(value); }

    /**
     * <p>Specifies the Domain Name Service (DNS) name or IP address of the SMB file
     * server that your DataSync agent will mount.</p>  <p>You can't specify an
     * IP version 6 (IPv6) address.</p> 
     */
    inline void SetServerHostname(const char* value) { m_serverHostnameHasBeenSet = true; m_serverHostname.assign(value); }

    /**
     * <p>Specifies the Domain Name Service (DNS) name or IP address of the SMB file
     * server that your DataSync agent will mount.</p>  <p>You can't specify an
     * IP version 6 (IPv6) address.</p> 
     */
    inline CreateLocationSmbRequest& WithServerHostname(const Aws::String& value) { SetServerHostname(value); return *this;}

    /**
     * <p>Specifies the Domain Name Service (DNS) name or IP address of the SMB file
     * server that your DataSync agent will mount.</p>  <p>You can't specify an
     * IP version 6 (IPv6) address.</p> 
     */
    inline CreateLocationSmbRequest& WithServerHostname(Aws::String&& value) { SetServerHostname(std::move(value)); return *this;}

    /**
     * <p>Specifies the Domain Name Service (DNS) name or IP address of the SMB file
     * server that your DataSync agent will mount.</p>  <p>You can't specify an
     * IP version 6 (IPv6) address.</p> 
     */
    inline CreateLocationSmbRequest& WithServerHostname(const char* value) { SetServerHostname(value); return *this;}


    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server.</p> <p>For information about choosing a user
     * with the right level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server.</p> <p>For information about choosing a user
     * with the right level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server.</p> <p>For information about choosing a user
     * with the right level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server.</p> <p>For information about choosing a user
     * with the right level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server.</p> <p>For information about choosing a user
     * with the right level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server.</p> <p>For information about choosing a user
     * with the right level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server.</p> <p>For information about choosing a user
     * with the right level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>Specifies the user that can mount and access the files, folders, and file
     * metadata in your SMB file server.</p> <p>For information about choosing a user
     * with the right level of access for your transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>Specifies the name of the Active Directory domain that your SMB file server
     * belongs to. </p> <p>If you have multiple Active Directory domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right file server.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specifies the name of the Active Directory domain that your SMB file server
     * belongs to. </p> <p>If you have multiple Active Directory domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right file server.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specifies the name of the Active Directory domain that your SMB file server
     * belongs to. </p> <p>If you have multiple Active Directory domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right file server.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specifies the name of the Active Directory domain that your SMB file server
     * belongs to. </p> <p>If you have multiple Active Directory domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right file server.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specifies the name of the Active Directory domain that your SMB file server
     * belongs to. </p> <p>If you have multiple Active Directory domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right file server.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specifies the name of the Active Directory domain that your SMB file server
     * belongs to. </p> <p>If you have multiple Active Directory domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right file server.</p>
     */
    inline CreateLocationSmbRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specifies the name of the Active Directory domain that your SMB file server
     * belongs to. </p> <p>If you have multiple Active Directory domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right file server.</p>
     */
    inline CreateLocationSmbRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the Active Directory domain that your SMB file server
     * belongs to. </p> <p>If you have multiple Active Directory domains in your
     * environment, configuring this parameter makes sure that DataSync connects to the
     * right file server.</p>
     */
    inline CreateLocationSmbRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline CreateLocationSmbRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline CreateLocationSmbRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline CreateLocationSmbRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline CreateLocationSmbRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline CreateLocationSmbRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }


    /**
     * <p>Specifies the version of the SMB protocol that DataSync uses to access your
     * SMB file server.</p>
     */
    inline const SmbMountOptions& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p>Specifies the version of the SMB protocol that DataSync uses to access your
     * SMB file server.</p>
     */
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    /**
     * <p>Specifies the version of the SMB protocol that DataSync uses to access your
     * SMB file server.</p>
     */
    inline void SetMountOptions(const SmbMountOptions& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    /**
     * <p>Specifies the version of the SMB protocol that DataSync uses to access your
     * SMB file server.</p>
     */
    inline void SetMountOptions(SmbMountOptions&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    /**
     * <p>Specifies the version of the SMB protocol that DataSync uses to access your
     * SMB file server.</p>
     */
    inline CreateLocationSmbRequest& WithMountOptions(const SmbMountOptions& value) { SetMountOptions(value); return *this;}

    /**
     * <p>Specifies the version of the SMB protocol that DataSync uses to access your
     * SMB file server.</p>
     */
    inline CreateLocationSmbRequest& WithMountOptions(SmbMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline CreateLocationSmbRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline CreateLocationSmbRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline CreateLocationSmbRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * location.</p>
     */
    inline CreateLocationSmbRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::String m_serverHostname;
    bool m_serverHostnameHasBeenSet = false;

    Aws::String m_user;
    bool m_userHasBeenSet = false;

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    SmbMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
