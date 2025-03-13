/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StorageProfileOperatingSystemFamily.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/FileSystemLocation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{
  class GetStorageProfileResult
  {
  public:
    AWS_DEADLINE_API GetStorageProfileResult() = default;
    AWS_DEADLINE_API GetStorageProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetStorageProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The storage profile ID.</p>
     */
    inline const Aws::String& GetStorageProfileId() const { return m_storageProfileId; }
    template<typename StorageProfileIdT = Aws::String>
    void SetStorageProfileId(StorageProfileIdT&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::forward<StorageProfileIdT>(value); }
    template<typename StorageProfileIdT = Aws::String>
    GetStorageProfileResult& WithStorageProfileId(StorageProfileIdT&& value) { SetStorageProfileId(std::forward<StorageProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the storage profile.</p>  <p>This field can
     * store any content. Escape or encode this content before displaying it on a
     * webpage or any other system that might interpret the content of this field.</p>
     * 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetStorageProfileResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) for the storage profile.</p>
     */
    inline StorageProfileOperatingSystemFamily GetOsFamily() const { return m_osFamily; }
    inline void SetOsFamily(StorageProfileOperatingSystemFamily value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }
    inline GetStorageProfileResult& WithOsFamily(StorageProfileOperatingSystemFamily value) { SetOsFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetStorageProfileResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetStorageProfileResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetStorageProfileResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetStorageProfileResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the files for the storage profile.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocations() const { return m_fileSystemLocations; }
    template<typename FileSystemLocationsT = Aws::Vector<FileSystemLocation>>
    void SetFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = std::forward<FileSystemLocationsT>(value); }
    template<typename FileSystemLocationsT = Aws::Vector<FileSystemLocation>>
    GetStorageProfileResult& WithFileSystemLocations(FileSystemLocationsT&& value) { SetFileSystemLocations(std::forward<FileSystemLocationsT>(value)); return *this;}
    template<typename FileSystemLocationsT = FileSystemLocation>
    GetStorageProfileResult& AddFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.emplace_back(std::forward<FileSystemLocationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStorageProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    StorageProfileOperatingSystemFamily m_osFamily{StorageProfileOperatingSystemFamily::NOT_SET};
    bool m_osFamilyHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Vector<FileSystemLocation> m_fileSystemLocations;
    bool m_fileSystemLocationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
