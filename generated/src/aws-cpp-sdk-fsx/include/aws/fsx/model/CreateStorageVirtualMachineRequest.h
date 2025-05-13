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
    AWS_FSX_API CreateStorageVirtualMachineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStorageVirtualMachine"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Describes the self-managed Microsoft Active Directory to which you want to
     * join the SVM. Joining an Active Directory provides user authentication and
     * access control for SMB clients, including Microsoft Windows and macOS clients
     * accessing the file system.</p>
     */
    inline const CreateSvmActiveDirectoryConfiguration& GetActiveDirectoryConfiguration() const { return m_activeDirectoryConfiguration; }
    inline bool ActiveDirectoryConfigurationHasBeenSet() const { return m_activeDirectoryConfigurationHasBeenSet; }
    template<typename ActiveDirectoryConfigurationT = CreateSvmActiveDirectoryConfiguration>
    void SetActiveDirectoryConfiguration(ActiveDirectoryConfigurationT&& value) { m_activeDirectoryConfigurationHasBeenSet = true; m_activeDirectoryConfiguration = std::forward<ActiveDirectoryConfigurationT>(value); }
    template<typename ActiveDirectoryConfigurationT = CreateSvmActiveDirectoryConfiguration>
    CreateStorageVirtualMachineRequest& WithActiveDirectoryConfiguration(ActiveDirectoryConfigurationT&& value) { SetActiveDirectoryConfiguration(std::forward<ActiveDirectoryConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateStorageVirtualMachineRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
    template<typename FileSystemIdT = Aws::String>
    void SetFileSystemId(FileSystemIdT&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::forward<FileSystemIdT>(value); }
    template<typename FileSystemIdT = Aws::String>
    CreateStorageVirtualMachineRequest& WithFileSystemId(FileSystemIdT&& value) { SetFileSystemId(std::forward<FileSystemIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SVM.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateStorageVirtualMachineRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password to use when managing the SVM using the NetApp ONTAP CLI or REST
     * API. If you do not specify a password, you can still use the file system's
     * <code>fsxadmin</code> user to manage the SVM.</p>
     */
    inline const Aws::String& GetSvmAdminPassword() const { return m_svmAdminPassword; }
    inline bool SvmAdminPasswordHasBeenSet() const { return m_svmAdminPasswordHasBeenSet; }
    template<typename SvmAdminPasswordT = Aws::String>
    void SetSvmAdminPassword(SvmAdminPasswordT&& value) { m_svmAdminPasswordHasBeenSet = true; m_svmAdminPassword = std::forward<SvmAdminPasswordT>(value); }
    template<typename SvmAdminPasswordT = Aws::String>
    CreateStorageVirtualMachineRequest& WithSvmAdminPassword(SvmAdminPasswordT&& value) { SetSvmAdminPassword(std::forward<SvmAdminPasswordT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateStorageVirtualMachineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateStorageVirtualMachineRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security style of the root volume of the SVM. Specify one of the
     * following values:</p> <ul> <li> <p> <code>UNIX</code> if the file system is
     * managed by a UNIX administrator, the majority of users are NFS clients, and an
     * application accessing the data uses a UNIX user as the service account.</p>
     * </li> <li> <p> <code>NTFS</code> if the file system is managed by a Microsoft
     * Windows administrator, the majority of users are SMB clients, and an application
     * accessing the data uses a Microsoft Windows user as the service account.</p>
     * </li> <li> <p> <code>MIXED</code> This is an advanced setting. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/volume-security-style.html">Volume
     * security style</a> in the Amazon FSx for NetApp ONTAP User Guide.</p> </li>
     * </ul> <p/>
     */
    inline StorageVirtualMachineRootVolumeSecurityStyle GetRootVolumeSecurityStyle() const { return m_rootVolumeSecurityStyle; }
    inline bool RootVolumeSecurityStyleHasBeenSet() const { return m_rootVolumeSecurityStyleHasBeenSet; }
    inline void SetRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle value) { m_rootVolumeSecurityStyleHasBeenSet = true; m_rootVolumeSecurityStyle = value; }
    inline CreateStorageVirtualMachineRequest& WithRootVolumeSecurityStyle(StorageVirtualMachineRootVolumeSecurityStyle value) { SetRootVolumeSecurityStyle(value); return *this;}
    ///@}
  private:

    CreateSvmActiveDirectoryConfiguration m_activeDirectoryConfiguration;
    bool m_activeDirectoryConfigurationHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_svmAdminPassword;
    bool m_svmAdminPasswordHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    StorageVirtualMachineRootVolumeSecurityStyle m_rootVolumeSecurityStyle{StorageVirtualMachineRootVolumeSecurityStyle::NOT_SET};
    bool m_rootVolumeSecurityStyleHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
