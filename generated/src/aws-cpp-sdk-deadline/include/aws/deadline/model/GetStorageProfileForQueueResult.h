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
    AWS_DEADLINE_API GetStorageProfileForQueueResult();
    AWS_DEADLINE_API GetStorageProfileForQueueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetStorageProfileForQueueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The storage profile ID.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileId = value; }
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileId = std::move(value); }
    inline void SetStorageProfileId(const char* value) { m_storageProfileId.assign(value); }
    inline GetStorageProfileForQueueResult& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}
    inline GetStorageProfileForQueueResult& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}
    inline GetStorageProfileForQueueResult& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the storage profile connected to a queue.</p> 
     * <p>This field can store any content. Escape or encode this content before
     * displaying it on a webpage or any other system that might interpret the content
     * of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetStorageProfileForQueueResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetStorageProfileForQueueResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetStorageProfileForQueueResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operating system of the storage profile in the queue.</p>
     */
    inline const StorageProfileOperatingSystemFamily& GetOsFamily() const{ return m_osFamily; }
    inline void SetOsFamily(const StorageProfileOperatingSystemFamily& value) { m_osFamily = value; }
    inline void SetOsFamily(StorageProfileOperatingSystemFamily&& value) { m_osFamily = std::move(value); }
    inline GetStorageProfileForQueueResult& WithOsFamily(const StorageProfileOperatingSystemFamily& value) { SetOsFamily(value); return *this;}
    inline GetStorageProfileForQueueResult& WithOsFamily(StorageProfileOperatingSystemFamily&& value) { SetOsFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the files for the storage profile within the queue.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocations() const{ return m_fileSystemLocations; }
    inline void SetFileSystemLocations(const Aws::Vector<FileSystemLocation>& value) { m_fileSystemLocations = value; }
    inline void SetFileSystemLocations(Aws::Vector<FileSystemLocation>&& value) { m_fileSystemLocations = std::move(value); }
    inline GetStorageProfileForQueueResult& WithFileSystemLocations(const Aws::Vector<FileSystemLocation>& value) { SetFileSystemLocations(value); return *this;}
    inline GetStorageProfileForQueueResult& WithFileSystemLocations(Aws::Vector<FileSystemLocation>&& value) { SetFileSystemLocations(std::move(value)); return *this;}
    inline GetStorageProfileForQueueResult& AddFileSystemLocations(const FileSystemLocation& value) { m_fileSystemLocations.push_back(value); return *this; }
    inline GetStorageProfileForQueueResult& AddFileSystemLocations(FileSystemLocation&& value) { m_fileSystemLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStorageProfileForQueueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStorageProfileForQueueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStorageProfileForQueueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_storageProfileId;

    Aws::String m_displayName;

    StorageProfileOperatingSystemFamily m_osFamily;

    Aws::Vector<FileSystemLocation> m_fileSystemLocations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
