/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/StorageProfileOperatingSystemFamily.h>
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
    AWS_DEADLINE_API UpdateStorageProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStorageProfile"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateStorageProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateStorageProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline UpdateStorageProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The display name of the storage profile to update.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the storage profile to update.</p>
     */
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }

    /**
     * <p>The display name of the storage profile to update.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }

    /**
     * <p>The display name of the storage profile to update.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }

    /**
     * <p>The display name of the storage profile to update.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }

    /**
     * <p>The display name of the storage profile to update.</p>
     */
    inline UpdateStorageProfileRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the storage profile to update.</p>
     */
    inline UpdateStorageProfileRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the storage profile to update.</p>
     */
    inline UpdateStorageProfileRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The farm ID to update.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }

    /**
     * <p>The farm ID to update.</p>
     */
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateStorageProfileRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateStorageProfileRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}

    /**
     * <p>The farm ID to update.</p>
     */
    inline UpdateStorageProfileRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}


    /**
     * <p>The file system location names to add.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocationsToAdd() const{ return m_fileSystemLocationsToAdd; }

    /**
     * <p>The file system location names to add.</p>
     */
    inline bool FileSystemLocationsToAddHasBeenSet() const { return m_fileSystemLocationsToAddHasBeenSet; }

    /**
     * <p>The file system location names to add.</p>
     */
    inline void SetFileSystemLocationsToAdd(const Aws::Vector<FileSystemLocation>& value) { m_fileSystemLocationsToAddHasBeenSet = true; m_fileSystemLocationsToAdd = value; }

    /**
     * <p>The file system location names to add.</p>
     */
    inline void SetFileSystemLocationsToAdd(Aws::Vector<FileSystemLocation>&& value) { m_fileSystemLocationsToAddHasBeenSet = true; m_fileSystemLocationsToAdd = std::move(value); }

    /**
     * <p>The file system location names to add.</p>
     */
    inline UpdateStorageProfileRequest& WithFileSystemLocationsToAdd(const Aws::Vector<FileSystemLocation>& value) { SetFileSystemLocationsToAdd(value); return *this;}

    /**
     * <p>The file system location names to add.</p>
     */
    inline UpdateStorageProfileRequest& WithFileSystemLocationsToAdd(Aws::Vector<FileSystemLocation>&& value) { SetFileSystemLocationsToAdd(std::move(value)); return *this;}

    /**
     * <p>The file system location names to add.</p>
     */
    inline UpdateStorageProfileRequest& AddFileSystemLocationsToAdd(const FileSystemLocation& value) { m_fileSystemLocationsToAddHasBeenSet = true; m_fileSystemLocationsToAdd.push_back(value); return *this; }

    /**
     * <p>The file system location names to add.</p>
     */
    inline UpdateStorageProfileRequest& AddFileSystemLocationsToAdd(FileSystemLocation&& value) { m_fileSystemLocationsToAddHasBeenSet = true; m_fileSystemLocationsToAdd.push_back(std::move(value)); return *this; }


    /**
     * <p>The file system location names to remove.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocationsToRemove() const{ return m_fileSystemLocationsToRemove; }

    /**
     * <p>The file system location names to remove.</p>
     */
    inline bool FileSystemLocationsToRemoveHasBeenSet() const { return m_fileSystemLocationsToRemoveHasBeenSet; }

    /**
     * <p>The file system location names to remove.</p>
     */
    inline void SetFileSystemLocationsToRemove(const Aws::Vector<FileSystemLocation>& value) { m_fileSystemLocationsToRemoveHasBeenSet = true; m_fileSystemLocationsToRemove = value; }

    /**
     * <p>The file system location names to remove.</p>
     */
    inline void SetFileSystemLocationsToRemove(Aws::Vector<FileSystemLocation>&& value) { m_fileSystemLocationsToRemoveHasBeenSet = true; m_fileSystemLocationsToRemove = std::move(value); }

    /**
     * <p>The file system location names to remove.</p>
     */
    inline UpdateStorageProfileRequest& WithFileSystemLocationsToRemove(const Aws::Vector<FileSystemLocation>& value) { SetFileSystemLocationsToRemove(value); return *this;}

    /**
     * <p>The file system location names to remove.</p>
     */
    inline UpdateStorageProfileRequest& WithFileSystemLocationsToRemove(Aws::Vector<FileSystemLocation>&& value) { SetFileSystemLocationsToRemove(std::move(value)); return *this;}

    /**
     * <p>The file system location names to remove.</p>
     */
    inline UpdateStorageProfileRequest& AddFileSystemLocationsToRemove(const FileSystemLocation& value) { m_fileSystemLocationsToRemoveHasBeenSet = true; m_fileSystemLocationsToRemove.push_back(value); return *this; }

    /**
     * <p>The file system location names to remove.</p>
     */
    inline UpdateStorageProfileRequest& AddFileSystemLocationsToRemove(FileSystemLocation&& value) { m_fileSystemLocationsToRemoveHasBeenSet = true; m_fileSystemLocationsToRemove.push_back(std::move(value)); return *this; }


    /**
     * <p>The OS system to update.</p>
     */
    inline const StorageProfileOperatingSystemFamily& GetOsFamily() const{ return m_osFamily; }

    /**
     * <p>The OS system to update.</p>
     */
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }

    /**
     * <p>The OS system to update.</p>
     */
    inline void SetOsFamily(const StorageProfileOperatingSystemFamily& value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }

    /**
     * <p>The OS system to update.</p>
     */
    inline void SetOsFamily(StorageProfileOperatingSystemFamily&& value) { m_osFamilyHasBeenSet = true; m_osFamily = std::move(value); }

    /**
     * <p>The OS system to update.</p>
     */
    inline UpdateStorageProfileRequest& WithOsFamily(const StorageProfileOperatingSystemFamily& value) { SetOsFamily(value); return *this;}

    /**
     * <p>The OS system to update.</p>
     */
    inline UpdateStorageProfileRequest& WithOsFamily(StorageProfileOperatingSystemFamily&& value) { SetOsFamily(std::move(value)); return *this;}


    /**
     * <p>The storage profile ID to update.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }

    /**
     * <p>The storage profile ID to update.</p>
     */
    inline bool StorageProfileIdHasBeenSet() const { return m_storageProfileIdHasBeenSet; }

    /**
     * <p>The storage profile ID to update.</p>
     */
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = value; }

    /**
     * <p>The storage profile ID to update.</p>
     */
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::move(value); }

    /**
     * <p>The storage profile ID to update.</p>
     */
    inline void SetStorageProfileId(const char* value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId.assign(value); }

    /**
     * <p>The storage profile ID to update.</p>
     */
    inline UpdateStorageProfileRequest& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}

    /**
     * <p>The storage profile ID to update.</p>
     */
    inline UpdateStorageProfileRequest& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}

    /**
     * <p>The storage profile ID to update.</p>
     */
    inline UpdateStorageProfileRequest& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::Vector<FileSystemLocation> m_fileSystemLocationsToAdd;
    bool m_fileSystemLocationsToAddHasBeenSet = false;

    Aws::Vector<FileSystemLocation> m_fileSystemLocationsToRemove;
    bool m_fileSystemLocationsToRemoveHasBeenSet = false;

    StorageProfileOperatingSystemFamily m_osFamily;
    bool m_osFamilyHasBeenSet = false;

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
