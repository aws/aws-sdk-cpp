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
  class CreateStorageProfileRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API CreateStorageProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStorageProfile"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateStorageProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateStorageProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateStorageProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the farm to connect to the storage profile.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline CreateStorageProfileRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline CreateStorageProfileRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline CreateStorageProfileRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the storage profile.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline CreateStorageProfileRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline CreateStorageProfileRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline CreateStorageProfileRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operating system (OS) for the storage profile.</p>
     */
    inline const StorageProfileOperatingSystemFamily& GetOsFamily() const{ return m_osFamily; }
    inline bool OsFamilyHasBeenSet() const { return m_osFamilyHasBeenSet; }
    inline void SetOsFamily(const StorageProfileOperatingSystemFamily& value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }
    inline void SetOsFamily(StorageProfileOperatingSystemFamily&& value) { m_osFamilyHasBeenSet = true; m_osFamily = std::move(value); }
    inline CreateStorageProfileRequest& WithOsFamily(const StorageProfileOperatingSystemFamily& value) { SetOsFamily(value); return *this;}
    inline CreateStorageProfileRequest& WithOsFamily(StorageProfileOperatingSystemFamily&& value) { SetOsFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>File system paths to include in the storage profile.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocations() const{ return m_fileSystemLocations; }
    inline bool FileSystemLocationsHasBeenSet() const { return m_fileSystemLocationsHasBeenSet; }
    inline void SetFileSystemLocations(const Aws::Vector<FileSystemLocation>& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = value; }
    inline void SetFileSystemLocations(Aws::Vector<FileSystemLocation>&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = std::move(value); }
    inline CreateStorageProfileRequest& WithFileSystemLocations(const Aws::Vector<FileSystemLocation>& value) { SetFileSystemLocations(value); return *this;}
    inline CreateStorageProfileRequest& WithFileSystemLocations(Aws::Vector<FileSystemLocation>&& value) { SetFileSystemLocations(std::move(value)); return *this;}
    inline CreateStorageProfileRequest& AddFileSystemLocations(const FileSystemLocation& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(value); return *this; }
    inline CreateStorageProfileRequest& AddFileSystemLocations(FileSystemLocation&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    StorageProfileOperatingSystemFamily m_osFamily;
    bool m_osFamilyHasBeenSet = false;

    Aws::Vector<FileSystemLocation> m_fileSystemLocations;
    bool m_fileSystemLocationsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
