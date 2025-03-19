/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/StorageProfileOperatingSystemFamily.h>
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
  class GetStorageProfileForQueueResult
  {
  public:
    AWS_DEADLINE_API GetStorageProfileForQueueResult() = default;
    AWS_DEADLINE_API GetStorageProfileForQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetStorageProfileForQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The storage profile ID.</p>
     */
    inline const Aws::String& GetStorageProfileId() const { return m_storageProfileId; }
    template<typename StorageProfileIdT = Aws::String>
    void SetStorageProfileId(StorageProfileIdT&& value) { m_storageProfileIdHasBeenSet = true; m_storageProfileId = std::forward<StorageProfileIdT>(value); }
    template<typename StorageProfileIdT = Aws::String>
    GetStorageProfileForQueueResult& WithStorageProfileId(StorageProfileIdT&& value) { SetStorageProfileId(std::forward<StorageProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the storage profile connected to a queue.</p> 
     * <p>This field can store any content. Escape or encode this content before
     * displaying it on a webpage or any other system that might interpret the content
     * of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetStorageProfileForQueueResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system of the storage profile in the queue.</p>
     */
    inline StorageProfileOperatingSystemFamily GetOsFamily() const { return m_osFamily; }
    inline void SetOsFamily(StorageProfileOperatingSystemFamily value) { m_osFamilyHasBeenSet = true; m_osFamily = value; }
    inline GetStorageProfileForQueueResult& WithOsFamily(StorageProfileOperatingSystemFamily value) { SetOsFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the files for the storage profile within the queue.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocations() const { return m_fileSystemLocations; }
    template<typename FileSystemLocationsT = Aws::Vector<FileSystemLocation>>
    void SetFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations = std::forward<FileSystemLocationsT>(value); }
    template<typename FileSystemLocationsT = Aws::Vector<FileSystemLocation>>
    GetStorageProfileForQueueResult& WithFileSystemLocations(FileSystemLocationsT&& value) { SetFileSystemLocations(std::forward<FileSystemLocationsT>(value)); return *this;}
    template<typename FileSystemLocationsT = FileSystemLocation>
    GetStorageProfileForQueueResult& AddFileSystemLocations(FileSystemLocationsT&& value) { m_fileSystemLocationsHasBeenSet = true; m_fileSystemLocations.emplace_back(std::forward<FileSystemLocationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStorageProfileForQueueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_storageProfileId;
    bool m_storageProfileIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    StorageProfileOperatingSystemFamily m_osFamily{StorageProfileOperatingSystemFamily::NOT_SET};
    bool m_osFamilyHasBeenSet = false;

    Aws::Vector<FileSystemLocation> m_fileSystemLocations;
    bool m_fileSystemLocationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
