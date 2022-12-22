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
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder you specified, DataSync needs to have permissions to
     * mount the SMB share, as well as to access all the data in that share. To ensure
     * this, either ensure that the user/password specified belongs to the user who can
     * mount the share, and who has the appropriate permissions for all of the files
     * and directories that you want DataSync to access, or use credentials of a member
     * of the Backup Operators group to mount the share. Doing either enables the agent
     * to access the data. For the agent to access directories, you must additionally
     * enable all execute access.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder you specified, DataSync needs to have permissions to
     * mount the SMB share, as well as to access all the data in that share. To ensure
     * this, either ensure that the user/password specified belongs to the user who can
     * mount the share, and who has the appropriate permissions for all of the files
     * and directories that you want DataSync to access, or use credentials of a member
     * of the Backup Operators group to mount the share. Doing either enables the agent
     * to access the data. For the agent to access directories, you must additionally
     * enable all execute access.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder you specified, DataSync needs to have permissions to
     * mount the SMB share, as well as to access all the data in that share. To ensure
     * this, either ensure that the user/password specified belongs to the user who can
     * mount the share, and who has the appropriate permissions for all of the files
     * and directories that you want DataSync to access, or use credentials of a member
     * of the Backup Operators group to mount the share. Doing either enables the agent
     * to access the data. For the agent to access directories, you must additionally
     * enable all execute access.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder you specified, DataSync needs to have permissions to
     * mount the SMB share, as well as to access all the data in that share. To ensure
     * this, either ensure that the user/password specified belongs to the user who can
     * mount the share, and who has the appropriate permissions for all of the files
     * and directories that you want DataSync to access, or use credentials of a member
     * of the Backup Operators group to mount the share. Doing either enables the agent
     * to access the data. For the agent to access directories, you must additionally
     * enable all execute access.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder you specified, DataSync needs to have permissions to
     * mount the SMB share, as well as to access all the data in that share. To ensure
     * this, either ensure that the user/password specified belongs to the user who can
     * mount the share, and who has the appropriate permissions for all of the files
     * and directories that you want DataSync to access, or use credentials of a member
     * of the Backup Operators group to mount the share. Doing either enables the agent
     * to access the data. For the agent to access directories, you must additionally
     * enable all execute access.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder you specified, DataSync needs to have permissions to
     * mount the SMB share, as well as to access all the data in that share. To ensure
     * this, either ensure that the user/password specified belongs to the user who can
     * mount the share, and who has the appropriate permissions for all of the files
     * and directories that you want DataSync to access, or use credentials of a member
     * of the Backup Operators group to mount the share. Doing either enables the agent
     * to access the data. For the agent to access directories, you must additionally
     * enable all execute access.</p>
     */
    inline CreateLocationSmbRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder you specified, DataSync needs to have permissions to
     * mount the SMB share, as well as to access all the data in that share. To ensure
     * this, either ensure that the user/password specified belongs to the user who can
     * mount the share, and who has the appropriate permissions for all of the files
     * and directories that you want DataSync to access, or use credentials of a member
     * of the Backup Operators group to mount the share. Doing either enables the agent
     * to access the data. For the agent to access directories, you must additionally
     * enable all execute access.</p>
     */
    inline CreateLocationSmbRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder you specified, DataSync needs to have permissions to
     * mount the SMB share, as well as to access all the data in that share. To ensure
     * this, either ensure that the user/password specified belongs to the user who can
     * mount the share, and who has the appropriate permissions for all of the files
     * and directories that you want DataSync to access, or use credentials of a member
     * of the Backup Operators group to mount the share. Doing either enables the agent
     * to access the data. For the agent to access directories, you must additionally
     * enable all execute access.</p>
     */
    inline CreateLocationSmbRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The name of the SMB server. This value is the IP address or Domain Name
     * Service (DNS) name of the SMB server. An agent that is installed on-premises
     * uses this hostname to mount the SMB server in a network.</p>  <p>This name
     * must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * 
     */
    inline const Aws::String& GetServerHostname() const{ return m_serverHostname; }

    /**
     * <p>The name of the SMB server. This value is the IP address or Domain Name
     * Service (DNS) name of the SMB server. An agent that is installed on-premises
     * uses this hostname to mount the SMB server in a network.</p>  <p>This name
     * must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * 
     */
    inline bool ServerHostnameHasBeenSet() const { return m_serverHostnameHasBeenSet; }

    /**
     * <p>The name of the SMB server. This value is the IP address or Domain Name
     * Service (DNS) name of the SMB server. An agent that is installed on-premises
     * uses this hostname to mount the SMB server in a network.</p>  <p>This name
     * must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * 
     */
    inline void SetServerHostname(const Aws::String& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = value; }

    /**
     * <p>The name of the SMB server. This value is the IP address or Domain Name
     * Service (DNS) name of the SMB server. An agent that is installed on-premises
     * uses this hostname to mount the SMB server in a network.</p>  <p>This name
     * must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * 
     */
    inline void SetServerHostname(Aws::String&& value) { m_serverHostnameHasBeenSet = true; m_serverHostname = std::move(value); }

    /**
     * <p>The name of the SMB server. This value is the IP address or Domain Name
     * Service (DNS) name of the SMB server. An agent that is installed on-premises
     * uses this hostname to mount the SMB server in a network.</p>  <p>This name
     * must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * 
     */
    inline void SetServerHostname(const char* value) { m_serverHostnameHasBeenSet = true; m_serverHostname.assign(value); }

    /**
     * <p>The name of the SMB server. This value is the IP address or Domain Name
     * Service (DNS) name of the SMB server. An agent that is installed on-premises
     * uses this hostname to mount the SMB server in a network.</p>  <p>This name
     * must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * 
     */
    inline CreateLocationSmbRequest& WithServerHostname(const Aws::String& value) { SetServerHostname(value); return *this;}

    /**
     * <p>The name of the SMB server. This value is the IP address or Domain Name
     * Service (DNS) name of the SMB server. An agent that is installed on-premises
     * uses this hostname to mount the SMB server in a network.</p>  <p>This name
     * must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * 
     */
    inline CreateLocationSmbRequest& WithServerHostname(Aws::String&& value) { SetServerHostname(std::move(value)); return *this;}

    /**
     * <p>The name of the SMB server. This value is the IP address or Domain Name
     * Service (DNS) name of the SMB server. An agent that is installed on-premises
     * uses this hostname to mount the SMB server in a network.</p>  <p>This name
     * must either be DNS-compliant or must be an IP version 4 (IPv4) address.</p>
     * 
     */
    inline CreateLocationSmbRequest& WithServerHostname(const char* value) { SetServerHostname(value); return *this;}


    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p> <p>For information about choosing a user name that
     * ensures sufficient permissions to files, folders, and metadata, see the <a
     * href="create-smb-location.html#SMBuser">User setting</a> for SMB locations.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p> <p>For information about choosing a user name that
     * ensures sufficient permissions to files, folders, and metadata, see the <a
     * href="create-smb-location.html#SMBuser">User setting</a> for SMB locations.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p> <p>For information about choosing a user name that
     * ensures sufficient permissions to files, folders, and metadata, see the <a
     * href="create-smb-location.html#SMBuser">User setting</a> for SMB locations.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p> <p>For information about choosing a user name that
     * ensures sufficient permissions to files, folders, and metadata, see the <a
     * href="create-smb-location.html#SMBuser">User setting</a> for SMB locations.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p> <p>For information about choosing a user name that
     * ensures sufficient permissions to files, folders, and metadata, see the <a
     * href="create-smb-location.html#SMBuser">User setting</a> for SMB locations.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p> <p>For information about choosing a user name that
     * ensures sufficient permissions to files, folders, and metadata, see the <a
     * href="create-smb-location.html#SMBuser">User setting</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p> <p>For information about choosing a user name that
     * ensures sufficient permissions to files, folders, and metadata, see the <a
     * href="create-smb-location.html#SMBuser">User setting</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user who can mount the share, has the permissions to access files and
     * folders in the SMB share.</p> <p>For information about choosing a user name that
     * ensures sufficient permissions to files, folders, and metadata, see the <a
     * href="create-smb-location.html#SMBuser">User setting</a> for SMB locations.</p>
     */
    inline CreateLocationSmbRequest& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline CreateLocationSmbRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline CreateLocationSmbRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline CreateLocationSmbRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The password of the user who can mount the share, has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of the user who can mount the share, has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password of the user who can mount the share, has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of the user who can mount the share, has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password of the user who can mount the share, has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of the user who can mount the share, has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline CreateLocationSmbRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of the user who can mount the share, has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline CreateLocationSmbRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password of the user who can mount the share, has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline CreateLocationSmbRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline CreateLocationSmbRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline CreateLocationSmbRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline CreateLocationSmbRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline CreateLocationSmbRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location. </p>
     */
    inline CreateLocationSmbRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }


    /**
     * <p>The mount options used by DataSync to access the SMB server.</p>
     */
    inline const SmbMountOptions& GetMountOptions() const{ return m_mountOptions; }

    /**
     * <p>The mount options used by DataSync to access the SMB server.</p>
     */
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    /**
     * <p>The mount options used by DataSync to access the SMB server.</p>
     */
    inline void SetMountOptions(const SmbMountOptions& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    /**
     * <p>The mount options used by DataSync to access the SMB server.</p>
     */
    inline void SetMountOptions(SmbMountOptions&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    /**
     * <p>The mount options used by DataSync to access the SMB server.</p>
     */
    inline CreateLocationSmbRequest& WithMountOptions(const SmbMountOptions& value) { SetMountOptions(value); return *this;}

    /**
     * <p>The mount options used by DataSync to access the SMB server.</p>
     */
    inline CreateLocationSmbRequest& WithMountOptions(SmbMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}


    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationSmbRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationSmbRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
     */
    inline CreateLocationSmbRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag that you want to add to the
     * location. The value can be an empty string. We recommend using tags to name your
     * resources.</p>
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
