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
    AWS_GLUE_API QuerySchemaVersionMetadataResult() = default;
    AWS_GLUE_API QuerySchemaVersionMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API QuerySchemaVersionMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A map of a metadata key and associated values.</p>
     */
    inline const Aws::Map<Aws::String, MetadataInfo>& GetMetadataInfoMap() const { return m_metadataInfoMap; }
    template<typename MetadataInfoMapT = Aws::Map<Aws::String, MetadataInfo>>
    void SetMetadataInfoMap(MetadataInfoMapT&& value) { m_metadataInfoMapHasBeenSet = true; m_metadataInfoMap = std::forward<MetadataInfoMapT>(value); }
    template<typename MetadataInfoMapT = Aws::Map<Aws::String, MetadataInfo>>
    QuerySchemaVersionMetadataResult& WithMetadataInfoMap(MetadataInfoMapT&& value) { SetMetadataInfoMap(std::forward<MetadataInfoMapT>(value)); return *this;}
    template<typename MetadataInfoMapKeyT = Aws::String, typename MetadataInfoMapValueT = MetadataInfo>
    QuerySchemaVersionMetadataResult& AddMetadataInfoMap(MetadataInfoMapKeyT&& key, MetadataInfoMapValueT&& value) {
      m_metadataInfoMapHasBeenSet = true; m_metadataInfoMap.emplace(std::forward<MetadataInfoMapKeyT>(key), std::forward<MetadataInfoMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique version ID of the schema version.</p>
     */
    inline const Aws::String& GetSchemaVersionId() const { return m_schemaVersionId; }
    template<typename SchemaVersionIdT = Aws::String>
    void SetSchemaVersionId(SchemaVersionIdT&& value) { m_schemaVersionIdHasBeenSet = true; m_schemaVersionId = std::forward<SchemaVersionIdT>(value); }
    template<typename SchemaVersionIdT = Aws::String>
    QuerySchemaVersionMetadataResult& WithSchemaVersionId(SchemaVersionIdT&& value) { SetSchemaVersionId(std::forward<SchemaVersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token for paginating the returned list of tokens, returned if
     * the current segment of the list is not the last.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    QuerySchemaVersionMetadataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    QuerySchemaVersionMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, MetadataInfo> m_metadataInfoMap;
    bool m_metadataInfoMapHasBeenSet = false;

    Aws::String m_schemaVersionId;
    bool m_schemaVersionIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
