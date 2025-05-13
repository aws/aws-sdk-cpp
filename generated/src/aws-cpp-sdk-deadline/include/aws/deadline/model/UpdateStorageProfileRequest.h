/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StorageProfileOperatingSystemFamily.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/FileSystemLocation.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateStorageProfileRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateStorageProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStorageProfile"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateStorageProfileRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID to update.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    UpdateStorageProfileRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage profile ID to update.</p>
     */
    inline const Aws::String& GetStorageProfileId() const { return m_storageProfileId; }
    inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }
    template<typename StorageProfileIdT = Aws::String>
    void SetStorageProfileId(StorageProfileIdT&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::forward<StorageProfileIdT>(value); }
    template<typename StorageProfileIdT = Aws::String>
    UpdateStorageProfileRequest& WithStorageProfileId(StorageProfileIdT&& value) { SetStorageProfileId(std::forward<StorageProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the storage profile to update.</p>  <p>This
     * field can store any content. Escape or encode this content before displaying it
     * on a webpage or any other system that might interpret the content of this
     * field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateStorageProfileRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OS system to update.</p>
     */
    inline StorageProfileOperatingSystemFamily GetOsFamily() const { return m_osFamily; }
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }
    inline void SetOsFamily(StorageProfileOperatingSystemFamily value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }
    inline UpdateStorageProfileRequest& WithOsFamily(StorageProfileOperatingSystemFamily value) { SetOsFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file system location names to add.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocationsToAdd() const { return m_fileSystemLocationsToAdd; }
    inline bool FileSystemLocationsToAddHasBeenSet() const { return m_fileSystemLocationsToAddHasBeenSet; }
    template<typename FileSystemLocationsToAddT = Aws::Vector<FileSystemLocation>>
    void SetFileSystemLocationsToAdd(FileSystemLocationsToAddT&& value) { m_fileSystemLocationsToAddHasBeenSet = true; m_fileSystemLocationsToAdd = std::forward<FileSystemLocationsToAddT>(value); }
    template<typename FileSystemLocationsToAddT = Aws::Vector<FileSystemLocation>>
    UpdateStorageProfileRequest& WithFileSystemLocationsToAdd(FileSystemLocationsToAddT&& value) { SetFileSystemLocationsToAdd(std::forward<FileSystemLocationsToAddT>(value)); return *this;}
    template<typename FileSystemLocationsToAddT = FileSystemLocation>
    UpdateStorageProfileRequest& AddFileSystemLocationsToAdd(FileSystemLocationsToAddT&& value) { m_fileSystemLocationsToAddHasBeenSet = true; m_fileSystemLocationsToAdd.emplace_back(std::forward<FileSystemLocationsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The file system location names to remove.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocationsToRemove() const { return m_fileSystemLocationsToRemove; }
    inline bool FileSystemLocationsToRemoveHasBeenSet() const { return m_fileSystemLocationsToRemoveHasBeenSet; }
    template<typename FileSystemLocationsToRemoveT = Aws::Vector<FileSystemLocation>>
    void SetFileSystemLocationsToRemove(FileSystemLocationsToRemoveT&& value) { m_fileSystemLocationsToRemoveHasBeenSet = true; m_fileSystemLocationsToRemove = std::forward<FileSystemLocationsToRemoveT>(value); }
    template<typename FileSystemLocationsToRemoveT = Aws::Vector<FileSystemLocation>>
    UpdateStorageProfileRequest& WithFileSystemLocationsToRemove(FileSystemLocationsToRemoveT&& value) { SetFileSystemLocationsToRemove(std::forward<FileSystemLocationsToRemoveT>(value)); return *this;}
    template<typename FileSystemLocationsToRemoveT = FileSystemLocation>
    UpdateStorageProfileRequest& AddFileSystemLocationsToRemove(FileSystemLocationsToRemoveT&& value) { m_fileSystemLocationsToRemoveHasBeenSet = true; m_fileSystemLocationsToRemove.emplace_back(std::forward<FileSystemLocationsToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    StorageProfileOperatingSystemFamily m_osFamily{StorageProfileOperatingSystemFamily::NOT_SET};
    bool m_osFamilyHasBeenSet = false;

    Aws::Vector<FileSystemLocation> m_fileSystemLocationsToAdd;
    bool m_fileSystemLocationsToAddHasBeenSet = false;

    Aws::Vector<FileSystemLocation> m_fileSystemLocationsToRemove;
    bool m_fileSystemLocationsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
