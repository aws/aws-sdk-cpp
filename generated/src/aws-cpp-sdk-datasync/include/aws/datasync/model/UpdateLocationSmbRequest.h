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
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationSmbRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationSmbRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationSmb"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }

    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }

    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }

    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }

    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline UpdateLocationSmbRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline UpdateLocationSmbRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the ARN of the SMB location that you want to update.</p>
     */
    inline UpdateLocationSmbRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the share exported by your SMB file server where
     * DataSync will read or write data. You can include a subdirectory in the share
     * path (for example, <code>/path/to/subdirectory</code>). Make sure that other SMB
     * clients in your network can also mount this path.</p> <p>To copy all data in the
     * specified subdirectory, DataSync must be able to mount the SMB share and access
     * all of its data. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>Specifies the user name that can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * information about choosing a user with the right level of access for your
     * transfer, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithUser(const char* value) { SetUser(value); return *this;}


    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. </p>
     * <p>If you have multiple domains in your environment, configuring this parameter
     * makes sure that DataSync connects to the right file server.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. </p>
     * <p>If you have multiple domains in your environment, configuring this parameter
     * makes sure that DataSync connects to the right file server.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. </p>
     * <p>If you have multiple domains in your environment, configuring this parameter
     * makes sure that DataSync connects to the right file server.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. </p>
     * <p>If you have multiple domains in your environment, configuring this parameter
     * makes sure that DataSync connects to the right file server.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. </p>
     * <p>If you have multiple domains in your environment, configuring this parameter
     * makes sure that DataSync connects to the right file server.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. </p>
     * <p>If you have multiple domains in your environment, configuring this parameter
     * makes sure that DataSync connects to the right file server.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. </p>
     * <p>If you have multiple domains in your environment, configuring this parameter
     * makes sure that DataSync connects to the right file server.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>Specifies the Windows domain name that your SMB file server belongs to. </p>
     * <p>If you have multiple domains in your environment, configuring this parameter
     * makes sure that DataSync connects to the right file server.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


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
    inline UpdateLocationSmbRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Specifies the password of the user who can mount your SMB file server and has
     * permission to access the files and folders involved in your transfer.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-smb-location.html#configuring-smb-permissions">required
     * permissions</a> for SMB locations.</p>
     */
    inline UpdateLocationSmbRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


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
    inline UpdateLocationSmbRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline UpdateLocationSmbRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline UpdateLocationSmbRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline UpdateLocationSmbRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the DataSync agent (or agents) which you want to connect to your
     * SMB file server. You specify an agent by using its Amazon Resource Name
     * (ARN).</p>
     */
    inline UpdateLocationSmbRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }


    
    inline const SmbMountOptions& GetMountOptions() const{ return m_mountOptions; }

    
    inline bool MountOptionsHasBeenSet() const { return m_mountOptionsHasBeenSet; }

    
    inline void SetMountOptions(const SmbMountOptions& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = value; }

    
    inline void SetMountOptions(SmbMountOptions&& value) { m_mountOptionsHasBeenSet = true; m_mountOptions = std::move(value); }

    
    inline UpdateLocationSmbRequest& WithMountOptions(const SmbMountOptions& value) { SetMountOptions(value); return *this;}

    
    inline UpdateLocationSmbRequest& WithMountOptions(SmbMountOptions&& value) { SetMountOptions(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

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
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
