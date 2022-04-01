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
  class AWS_DATASYNC_API UpdateLocationSmbRequest : public DataSyncRequest
  {
  public:
    UpdateLocationSmbRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationSmb"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location to update.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location to update.</p>
     */
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location to update.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location to update.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location to update.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location to update.</p>
     */
    inline UpdateLocationSmbRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location to update.</p>
     */
    inline UpdateLocationSmbRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the SMB location to update.</p>
     */
    inline UpdateLocationSmbRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder that you specified, DataSync must have permissions to
     * mount the SMB share and to access all the data in that share. To ensure this, do
     * either of the following:</p> <ul> <li> <p>Ensure that the user/password
     * specified belongs to the user who can mount the share and who has the
     * appropriate permissions for all of the files and directories that you want
     * DataSync to access.</p> </li> <li> <p>Use credentials of a member of the Backup
     * Operators group to mount the share. </p> </li> </ul> <p>Doing either of these
     * options enables the agent to access the data. For the agent to access
     * directories, you must also enable all execute access.</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder that you specified, DataSync must have permissions to
     * mount the SMB share and to access all the data in that share. To ensure this, do
     * either of the following:</p> <ul> <li> <p>Ensure that the user/password
     * specified belongs to the user who can mount the share and who has the
     * appropriate permissions for all of the files and directories that you want
     * DataSync to access.</p> </li> <li> <p>Use credentials of a member of the Backup
     * Operators group to mount the share. </p> </li> </ul> <p>Doing either of these
     * options enables the agent to access the data. For the agent to access
     * directories, you must also enable all execute access.</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder that you specified, DataSync must have permissions to
     * mount the SMB share and to access all the data in that share. To ensure this, do
     * either of the following:</p> <ul> <li> <p>Ensure that the user/password
     * specified belongs to the user who can mount the share and who has the
     * appropriate permissions for all of the files and directories that you want
     * DataSync to access.</p> </li> <li> <p>Use credentials of a member of the Backup
     * Operators group to mount the share. </p> </li> </ul> <p>Doing either of these
     * options enables the agent to access the data. For the agent to access
     * directories, you must also enable all execute access.</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder that you specified, DataSync must have permissions to
     * mount the SMB share and to access all the data in that share. To ensure this, do
     * either of the following:</p> <ul> <li> <p>Ensure that the user/password
     * specified belongs to the user who can mount the share and who has the
     * appropriate permissions for all of the files and directories that you want
     * DataSync to access.</p> </li> <li> <p>Use credentials of a member of the Backup
     * Operators group to mount the share. </p> </li> </ul> <p>Doing either of these
     * options enables the agent to access the data. For the agent to access
     * directories, you must also enable all execute access.</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder that you specified, DataSync must have permissions to
     * mount the SMB share and to access all the data in that share. To ensure this, do
     * either of the following:</p> <ul> <li> <p>Ensure that the user/password
     * specified belongs to the user who can mount the share and who has the
     * appropriate permissions for all of the files and directories that you want
     * DataSync to access.</p> </li> <li> <p>Use credentials of a member of the Backup
     * Operators group to mount the share. </p> </li> </ul> <p>Doing either of these
     * options enables the agent to access the data. For the agent to access
     * directories, you must also enable all execute access.</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder that you specified, DataSync must have permissions to
     * mount the SMB share and to access all the data in that share. To ensure this, do
     * either of the following:</p> <ul> <li> <p>Ensure that the user/password
     * specified belongs to the user who can mount the share and who has the
     * appropriate permissions for all of the files and directories that you want
     * DataSync to access.</p> </li> <li> <p>Use credentials of a member of the Backup
     * Operators group to mount the share. </p> </li> </ul> <p>Doing either of these
     * options enables the agent to access the data. For the agent to access
     * directories, you must also enable all execute access.</p>
     */
    inline UpdateLocationSmbRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder that you specified, DataSync must have permissions to
     * mount the SMB share and to access all the data in that share. To ensure this, do
     * either of the following:</p> <ul> <li> <p>Ensure that the user/password
     * specified belongs to the user who can mount the share and who has the
     * appropriate permissions for all of the files and directories that you want
     * DataSync to access.</p> </li> <li> <p>Use credentials of a member of the Backup
     * Operators group to mount the share. </p> </li> </ul> <p>Doing either of these
     * options enables the agent to access the data. For the agent to access
     * directories, you must also enable all execute access.</p>
     */
    inline UpdateLocationSmbRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>The subdirectory in the SMB file system that is used to read data from the
     * SMB source location or write data to the SMB destination. The SMB path should be
     * a path that's exported by the SMB server, or a subdirectory of that path. The
     * path should be such that it can be mounted by other SMB clients in your
     * network.</p>  <p> <code>Subdirectory</code> must be specified with forward
     * slashes. For example, <code>/path/to/folder</code>.</p>  <p>To transfer
     * all the data in the folder that you specified, DataSync must have permissions to
     * mount the SMB share and to access all the data in that share. To ensure this, do
     * either of the following:</p> <ul> <li> <p>Ensure that the user/password
     * specified belongs to the user who can mount the share and who has the
     * appropriate permissions for all of the files and directories that you want
     * DataSync to access.</p> </li> <li> <p>Use credentials of a member of the Backup
     * Operators group to mount the share. </p> </li> </ul> <p>Doing either of these
     * options enables the agent to access the data. For the agent to access
     * directories, you must also enable all execute access.</p>
     */
    inline UpdateLocationSmbRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>The user who can mount the share has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline const Aws::String& GetUser() const{ return m_user; }

    /**
     * <p>The user who can mount the share has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }

    /**
     * <p>The user who can mount the share has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline void SetUser(const Aws::String& value) { m_userHasBeenSet = true; m_user = value; }

    /**
     * <p>The user who can mount the share has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline void SetUser(Aws::String&& value) { m_userHasBeenSet = true; m_user = std::move(value); }

    /**
     * <p>The user who can mount the share has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline void SetUser(const char* value) { m_userHasBeenSet = true; m_user.assign(value); }

    /**
     * <p>The user who can mount the share has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline UpdateLocationSmbRequest& WithUser(const Aws::String& value) { SetUser(value); return *this;}

    /**
     * <p>The user who can mount the share has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline UpdateLocationSmbRequest& WithUser(Aws::String&& value) { SetUser(std::move(value)); return *this;}

    /**
     * <p>The user who can mount the share has the permissions to access files and
     * folders in the SMB share.</p>
     */
    inline UpdateLocationSmbRequest& WithUser(const char* value) { SetUser(value); return *this;}


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
    inline UpdateLocationSmbRequest& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline UpdateLocationSmbRequest& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The name of the Windows domain that the SMB server belongs to.</p>
     */
    inline UpdateLocationSmbRequest& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The password of the user who can mount the share has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The password of the user who can mount the share has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The password of the user who can mount the share has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The password of the user who can mount the share has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The password of the user who can mount the share has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The password of the user who can mount the share has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline UpdateLocationSmbRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The password of the user who can mount the share has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline UpdateLocationSmbRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The password of the user who can mount the share has the permissions to
     * access files and folders in the SMB share.</p>
     */
    inline UpdateLocationSmbRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
     */
    inline UpdateLocationSmbRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
     */
    inline UpdateLocationSmbRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
     */
    inline UpdateLocationSmbRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
     */
    inline UpdateLocationSmbRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Names (ARNs) of agents to use for a Simple Message Block
     * (SMB) location.</p>
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
    bool m_locationArnHasBeenSet;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet;

    Aws::String m_user;
    bool m_userHasBeenSet;

    Aws::String m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet;

    SmbMountOptions m_mountOptions;
    bool m_mountOptionsHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
