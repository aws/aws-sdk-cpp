/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetRestoreTestingInferredMetadataResult
  {
  public:
    AWS_BACKUP_API GetRestoreTestingInferredMetadataResult();
    AWS_BACKUP_API GetRestoreTestingInferredMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API GetRestoreTestingInferredMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetInferredMetadata() const{ return m_inferredMetadata; }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline void SetInferredMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_inferredMetadata = value; }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline void SetInferredMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_inferredMetadata = std::move(value); }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& WithInferredMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetInferredMetadata(value); return *this;}

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& WithInferredMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetInferredMetadata(std::move(value)); return *this;}

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& AddInferredMetadata(const Aws::String& key, const Aws::String& value) { m_inferredMetadata.emplace(key, value); return *this; }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& AddInferredMetadata(Aws::String&& key, const Aws::String& value) { m_inferredMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& AddInferredMetadata(const Aws::String& key, Aws::String&& value) { m_inferredMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& AddInferredMetadata(Aws::String&& key, Aws::String&& value) { m_inferredMetadata.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& AddInferredMetadata(const char* key, Aws::String&& value) { m_inferredMetadata.emplace(key, std::move(value)); return *this; }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& AddInferredMetadata(Aws::String&& key, const char* value) { m_inferredMetadata.emplace(std::move(key), value); return *this; }

    /**
     * <p>This is a string map of the metadata inferred from the request.</p>
     */
    inline GetRestoreTestingInferredMetadataResult& AddInferredMetadata(const char* key, const char* value) { m_inferredMetadata.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRestoreTestingInferredMetadataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRestoreTestingInferredMetadataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRestoreTestingInferredMetadataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_inferredMetadata;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
