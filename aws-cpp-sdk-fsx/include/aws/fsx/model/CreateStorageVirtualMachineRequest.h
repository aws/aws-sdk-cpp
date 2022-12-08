/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/fsx/model/CreateSvmActiveDirectoryConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/StorageVirtualMachineRootVolumeSecurityStyle.h>
#include <aws/fsx/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class CreateStorageVirtualMachineRequest : public FSxRequest
  {
  public:
    AWS_FSX_API CreateStorageVirtualMachineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStorageVirtualMachine"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Describes the self-managed Microsoft Active Directory to which you want to
     * join the SVM. Joining an Active Directory provides user authentication and
     * access control for SMB clients, including Microsoft Windows and macOS client
     * accessing the file system.</p>
     */
    inline const CreateSvmActiveDirectoryConfiguration& GetActiveDirectoryConfiguration() const{ return m_activeDirectoryConfiguration; }

    /**
     * <p>Describes the self-managed Microsoft Active Directory to which you want to
     * join the SVM. Joining an Active Directory provides user authentication and
     * access control for SMB clients, including Microsoft Windows and macOS client
     * accessing the file system.</p>
     */
    inline bool ActiveDirectoryConfigurationHasBeenSet() const { return m_activeDirectoryConfigurationHasBeenSet; }

    /**
     * <p>Describes the self-managed Microsoft Active Directory to which you want to
     * join the SVM. Joining an Active Directory provides user authentication and
     * access control for SMB clients, including Microsoft Windows and macOS client
     * accessing the file system.</p>
     */
    inline void SetActiveDirectoryConfiguration(const CreateSvmActiveDirectoryConfiguration& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = value; }

    /**
     * <p>Describes the self-managed Microsoft Active Directory to which you want to
     * join the SVM. Joining an Active Directory provides user authentication and
     * access control for SMB clients, including Microsoft Windows and macOS client
     * accessing the file system.</p>
     */
    inline void SetActiveDirectoryConfiguration(CreateSvmActiveDirectoryConfiguration&& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = std::move(value); }

    /**
     * <p>Describes the self-managed Microsoft Active Directory to which you want to
     * join the SVM. Joining an Active Directory provides user authentication and
     * access control for SMB clients, including Microsoft Windows and macOS client
     * accessing the file system.</p>
     */
    inline CreateStorageVirtualMachineRequest& WithActiveDirectoryConfiguration(const CreateSvmActiveDirectoryConfiguration& value) { SetActiveDirectoryConfiguration(value); return *this;}

    /**
     * <p>Describes the self-managed Microsoft Active Directory to which you want to
     * join the SVM. Joining an Active Directory provides user authentication and
     * access control for SMB clients, including Microsoft Windows and macOS client
     * accessing the file system.</p>
     */
    inline CreateStorageVirtualMachineRequest& WithActiveDirectoryConfiguration(CreateSvmActiveDirectoryConfiguration&& value) { SetActiveDirectoryConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateStorageVirtualMachineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateStorageVirtualMachineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateStorageVirtualMachineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    
    inline CreateStorageVirtualMachineRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    
    inline CreateStorageVirtualMachineRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    
    inline CreateStorageVirtualMachineRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The name of the SVM.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SVM.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the SVM.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SVM.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the SVM.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SVM.</p>
     */
    inline CreateStorageVirtualMachineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SVM.</p>
     */
    inline CreateStorageVirtualMachineRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the SVM.</p>
     */
    inline CreateStorageVirtualMachineRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline const Aws::String& GetSvmAdminPassword() const{ return m_svmAdminPassword; }

    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline bool SvmAdminPasswordHasBeenSet() const { return m_svmAdminPasswordHasBeenSet; }

    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline void SetSvmAdminPassword(const Aws::String& value) { m_svmAdminPasswordHasBeenSet = true; m_svmAdminPassword = value; }

    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline void SetSvmAdminPassword(Aws::String&& value) { m_svmAdminPasswordHasBeenSet = true; m_svmAdminPassword = std::move(value); }

    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline void SetSvmAdminPassword(const char* value) { m_svmAdminPasswordHasBeenSet = true; m_svmAdminPassword.assign(value); }

    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline CreateStorageVirtualMachineRequest& WithSvmAdminPassword(const Aws::String& value) { SetSvmAdminPassword(value); return *this;}

    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline CreateStorageVirtualMachineRequest& WithSvmAdminPassword(Aws::String&& value) { SetSvmAdminPassword(std::move(value)); return *this;}

    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline CreateStorageVirtualMachineRequest& WithSvmAdminPassword(const char* value) { SetSvmAdminPassword(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CreateStorageVirtualMachineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CreateStorageVirtualMachineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CreateStorageVirtualMachineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CreateStorageVirtualMachineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The security style of the root volume of the SVM. Specify one of the
     * following values:</p> <ul> <li> <p> <code>UNIX</code> if the file system is
     * managed by a UNIX administrator, the majority of users are NFS clients, and an
     * application accessing the data uses a UNIX user as the service account.</p>
     * </li> <li> <p> <code>NTFS</code> if the file system is managed by a Windows
     * administrator, the majority of users are SMB clients, and an application
     * accessing the data uses a Windows user as the service account.</p> </li> <li>
     * <p> <code>MIXED</code> if the file system is managed by both UNIX and Windows
     * administrators and users consist of both NFS and SMB clients.</p> </li> </ul>
     */
    inline const StorageVirtualMachineRootVolumeSecurityStyle& GetRootVolumeSecurityStyle() const{ return m_rootVolumeSecurityStyle; }

    /**
     * <p>The security style of the root volume of the SVM. Specify one of the
     * following values:</p> <ul> <li> <p> <code>UNIX</code> if the file system is
     * managed by a UNIX administrator, the majority of users are NFS clients, and an
     * application accessing the data uses a UNIX user as the service account.</p>
     * </li> <li> <p> <code>NTFS</code> if the file system is managed by a Windows
     * administrator, the majority of users are SMB clients, and an application
     * accessing the data uses a Windows user as the service account.</p> </li> <li>
     * <p> <code>MIXED</code> if the file system is managed by both UNIX and Windows
     * administrators and users consist of both NFS and SMB clients.</p> </li> </ul>
     */
    inline bool RootVolumeSecurityStyleHasBeenSet() const { return m_rootVolumeSecurityStyleHasBeenSet; }

    /**
     * <p>The security style of the root volume of the SVM. Specify one of the
     * following values:</p> <ul> <li> <p> <code>UNIX</code> if the file system is
     * managed by a UNIX administrator, the majority of users are NFS clients, and an
     * application accessing the data uses a UNIX user as the service account.</p>
     * </li> <li> <p> <code>NTFS</code> if the file system is managed by a Windows
     * administrator, the majority of users are SMB clients, and an application
     * accessing the data uses a Windows user as the service account.</p> </li> <li>
     * <p> <code>MIXED</code> if the file system is managed by both UNIX and Windows
     * administrators and users consist of both NFS and SMB clients.</p> </li> </ul>
     */
    inline void SetRootVolumeSecurityStyle(const StorageVirtualMachineRootVolumeSecurityStyle& value) { m_rootVolumeSecurityStyleHasBeenSet = true; m_rootVolumeSecurityStyle = value; }

    /**
     * <p>The security style of the root volume of the SVM. Specify one of the
     * following values:</p> <ul> <li> <p> <code>UNIX</code> if the file system is
     * managed by a UNIX administrator, the majority of users are NFS clients, and an
     * application accessing the data uses a UNIX user as the service account.</p>
     * </li> <li> <p> <code>NTFS</code> if the file system is managed by a Windows
     * administrator, the majority of users are SMB clients, and an application
     * accessing the data uses a Windows user as the service account.</p> </li> <li>
     * <p> <code>MIXED</code> if the file system is managed by both UNIX and Windows
     * administrators and users consist of both NFS and SMB clients.</p> </li> </ul>
     */
    inline void SetRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle&& value) { m_rootVolumeSecurityStyleHasBeenSet = true; m_rootVolumeSecurityStyle = std::move(value); }

    /**
     * <p>The security style of the root volume of the SVM. Specify one of the
     * following values:</p> <ul> <li> <p> <code>UNIX</code> if the file system is
     * managed by a UNIX administrator, the majority of users are NFS clients, and an
     * application accessing the data uses a UNIX user as the service account.</p>
     * </li> <li> <p> <code>NTFS</code> if the file system is managed by a Windows
     * administrator, the majority of users are SMB clients, and an application
     * accessing the data uses a Windows user as the service account.</p> </li> <li>
     * <p> <code>MIXED</code> if the file system is managed by both UNIX and Windows
     * administrators and users consist of both NFS and SMB clients.</p> </li> </ul>
     */
    inline CreateStorageVirtualMachineRequest& WithRootVolumeSecurityStyle(const StorageVirtualMachineRootVolumeSecurityStyle& value) { SetRootVolumeSecurityStyle(value); return *this;}

    /**
     * <p>The security style of the root volume of the SVM. Specify one of the
     * following values:</p> <ul> <li> <p> <code>UNIX</code> if the file system is
     * managed by a UNIX administrator, the majority of users are NFS clients, and an
     * application accessing the data uses a UNIX user as the service account.</p>
     * </li> <li> <p> <code>NTFS</code> if the file system is managed by a Windows
     * administrator, the majority of users are SMB clients, and an application
     * accessing the data uses a Windows user as the service account.</p> </li> <li>
     * <p> <code>MIXED</code> if the file system is managed by both UNIX and Windows
     * administrators and users consist of both NFS and SMB clients.</p> </li> </ul>
     */
    inline CreateStorageVirtualMachineRequest& WithRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle&& value) { SetRootVolumeSecurityStyle(std::move(value)); return *this;}

  private:

    CreateSvmActiveDirectoryConfiguration m_activeDirectoryConfiguration;
    bool m_activeDirectoryConfigurationHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_svmAdminPassword;
    bool m_svmAdminPasswordHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    StorageVirtualMachineRootVolumeSecurityStyle m_rootVolumeSecurityStyle;
    bool m_rootVolumeSecurityStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
