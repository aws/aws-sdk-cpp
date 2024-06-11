﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/StorageProfileOperatingSystemFamily.h>
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
    AWS_DEADLINE_API GetStorageProfileResult();
    AWS_DEADLINE_API GetStorageProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetStorageProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetStorageProfileResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetStorageProfileResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetStorageProfileResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetStorageProfileResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetStorageProfileResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the storage profile.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetStorageProfileResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetStorageProfileResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetStorageProfileResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the files for the storage profile.</p>
     */
    inline const Aws::Vector<FileSystemLocation>& GetFileSystemLocations() const{ return m_fileSystemLocations; }
    inline void SetFileSystemLocations(const Aws::Vector<FileSystemLocation>& value) { m_fileSystemLocations = value; }
    inline void SetFileSystemLocations(Aws::Vector<FileSystemLocation>&& value) { m_fileSystemLocations = std::move(value); }
    inline GetStorageProfileResult& WithFileSystemLocations(const Aws::Vector<FileSystemLocation>& value) { SetFileSystemLocations(value); return *this;}
    inline GetStorageProfileResult& WithFileSystemLocations(Aws::Vector<FileSystemLocation>&& value) { SetFileSystemLocations(std::move(value)); return *this;}
    inline GetStorageProfileResult& AddFileSystemLocations(const FileSystemLocation& value) { m_fileSystemLocations.push_back(value); return *this; }
    inline GetStorageProfileResult& AddFileSystemLocations(FileSystemLocation&& value) { m_fileSystemLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The operating system (OS) for the storage profile.</p>
     */
    inline const StorageProfileOperatingSystemFamily& GetOsFamily() const{ return m_osFamily; }
    inline void SetOsFamily(const StorageProfileOperatingSystemFamily& value) { m_osFamily = value; }
    inline void SetOsFamily(StorageProfileOperatingSystemFamily&& value) { m_osFamily = std::move(value); }
    inline GetStorageProfileResult& WithOsFamily(const StorageProfileOperatingSystemFamily& value) { SetOsFamily(value); return *this;}
    inline GetStorageProfileResult& WithOsFamily(StorageProfileOperatingSystemFamily&& value) { SetOsFamily(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage profile ID.</p>
     */
    inline const Aws::String& GetStorageProfileId() const{ return m_storageProfileId; }
    inline void SetStorageProfileId(const Aws::String& value) { m_storageProfileId = value; }
    inline void SetStorageProfileId(Aws::String&& value) { m_storageProfileId = std::move(value); }
    inline void SetStorageProfileId(const char* value) { m_storageProfileId.assign(value); }
    inline GetStorageProfileResult& WithStorageProfileId(const Aws::String& value) { SetStorageProfileId(value); return *this;}
    inline GetStorageProfileResult& WithStorageProfileId(Aws::String&& value) { SetStorageProfileId(std::move(value)); return *this;}
    inline GetStorageProfileResult& WithStorageProfileId(const char* value) { SetStorageProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetStorageProfileResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetStorageProfileResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetStorageProfileResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetStorageProfileResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetStorageProfileResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStorageProfileResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStorageProfileResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStorageProfileResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_displayName;

    Aws::Vector<FileSystemLocation> m_fileSystemLocations;

    StorageProfileOperatingSystemFamily m_osFamily;

    Aws::String m_storageProfileId;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
