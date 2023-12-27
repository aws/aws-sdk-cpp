/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace Backup
{
namespace Model
{
  class GetRestoreJobMetadataResult
  {
  public:
    AWS_BACKUP_API GetRestoreJobMetadataResult();
    AWS_BACKUP_API GetRestoreJobMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRestoreJobMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline const Aws::String& GetRestoreJobId() const{ return m_restoreJobId; }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline void SetRestoreJobId(const Aws::String& value) { m_restoreJobId = value; }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline void SetRestoreJobId(Aws::String&& value) { m_restoreJobId = std::move(value); }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline void SetRestoreJobId(const char* value) { m_restoreJobId.assign(value); }

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline GetRestoreJobMetadataResult& WithRestoreJobId(const Aws::String& value) { SetRestoreJobId(value); return *this;}

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline GetRestoreJobMetadataResult& WithRestoreJobId(Aws::String&& value) { SetRestoreJobId(std::move(value)); return *this;}

    /**
     * <p>This is a unique identifier of a restore job within Backup.</p>
     */
    inline GetRestoreJobMetadataResult& WithRestoreJobId(const char* value) { SetRestoreJobId(value); return *this;}


    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const{ return m_metadata; }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline void SetMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_metadata = value; }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline void SetMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_metadata = std::move(value); }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& WithMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetMetadata(value); return *this;}

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& WithMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetMetadata(std::move(value)); return *this;}

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& AddMetadata(const Aws::String& key, const Aws::String& value) { m_metadata.emplace(key, value); return *this; }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& AddMetadata(Aws::String&& key, const Aws::String& value) { m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& AddMetadata(const Aws::String& key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& AddMetadata(Aws::String&& key, Aws::String&& value) { m_metadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& AddMetadata(const char* key, Aws::String&& value) { m_metadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& AddMetadata(Aws::String&& key, const char* value) { m_metadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>This contains the metadata of the specified backup job.</p>
     */
    inline GetRestoreJobMetadataResult& AddMetadata(const char* key, const char* value) { m_metadata.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRestoreJobMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRestoreJobMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRestoreJobMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_restoreJobId;

    Aws::Map<Aws::String, Aws::String> m_metadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
