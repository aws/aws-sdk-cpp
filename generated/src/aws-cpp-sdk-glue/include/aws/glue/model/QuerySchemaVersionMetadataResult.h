/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/MetadataInfo.h>
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
namespace Glue
{
namespace Model
{
  class QuerySchemaVersionMetadataResult
  {
  public:
    AWS_GLUE_API QuerySchemaVersionMetadataResult();
    AWS_GLUE_API QuerySchemaVersionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API QuerySchemaVersionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline const Aws::Map<Aws::String, MetadataInfo>& GetMetadataInfoMap() const{ return m_metadataInfoMap; }

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline void SetMetadataInfoMap(const Aws::Map<Aws::String, MetadataInfo>& value) { m_metadataInfoMap = value; }

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline void SetMetadataInfoMap(Aws::Map<Aws::String, MetadataInfo>&& value) { m_metadataInfoMap = std::move(value); }

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline QuerySchemaVersionMetadataResult& WithMetadataInfoMap(const Aws::Map<Aws::String, MetadataInfo>& value) { SetMetadataInfoMap(value); return *this;}

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline QuerySchemaVersionMetadataResult& WithMetadataInfoMap(Aws::Map<Aws::String, MetadataInfo>&& value) { SetMetadataInfoMap(std::move(value)); return *this;}

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline QuerySchemaVersionMetadataResult& AddMetadataInfoMap(const Aws::String& key, const MetadataInfo& value) { m_metadataInfoMap.emplace(key, value); return *this; }

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline QuerySchemaVersionMetadataResult& AddMetadataInfoMap(Aws::String&& key, const MetadataInfo& value) { m_metadataInfoMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline QuerySchemaVersionMetadataResult& AddMetadataInfoMap(const Aws::String& key, MetadataInfo&& value) { m_metadataInfoMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline QuerySchemaVersionMetadataResult& AddMetadataInfoMap(Aws::String&& key, MetadataInfo&& value) { m_metadataInfoMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline QuerySchemaVersionMetadataResult& AddMetadataInfoMap(const char* key, MetadataInfo&& value) { m_metadataInfoMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline QuerySchemaVersionMetadataResult& AddMetadataInfoMap(const char* key, const MetadataInfo& value) { m_metadataInfoMap.emplace(key, value); return *this; }


    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const{ return m_schemaVersionId; }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(const Aws::String& value) { m_schemaVersionId = value; }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(Aws::String&& value) { m_schemaVersionId = std::move(value); }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline void SetSchemaVersionId(const char* value) { m_schemaVersionId.assign(value); }

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline QuerySchemaVersionMetadataResult& WithSchemaVersionId(const Aws::String& value) { SetSchemaVersionId(value); return *this;}

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline QuerySchemaVersionMetadataResult& WithSchemaVersionId(Aws::String&& value) { SetSchemaVersionId(std::move(value)); return *this;}

    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline QuerySchemaVersionMetadataResult& WithSchemaVersionId(const char* value) { SetSchemaVersionId(value); return *this;}


    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline QuerySchemaVersionMetadataResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline QuerySchemaVersionMetadataResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline QuerySchemaVersionMetadataResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<Aws::String, MetadataInfo> m_metadataInfoMap;

    Aws::String m_schemaVersionId;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
