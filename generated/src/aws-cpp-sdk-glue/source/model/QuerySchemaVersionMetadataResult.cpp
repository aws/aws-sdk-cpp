/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/QuerySchemaVersionMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

QuerySchemaVersionMetadataResult::QuerySchemaVersionMetadataResult()
{
}

QuerySchemaVersionMetadataResult::QuerySchemaVersionMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

QuerySchemaVersionMetadataResult& QuerySchemaVersionMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("MetadataInfoMap"))
  {
    Aws::Map<Aws::String, JsonView> metadataInfoMapJsonMap = jsonValue.GetObject("MetadataInfoMap").GetAllObjects();
    for(auto& metadataInfoMapItem : metadataInfoMapJsonMap)
    {
      m_metadataInfoMap[metadataInfoMapItem.first] = metadataInfoMapItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("SchemaVersionId"))
  {
    m_schemaVersionId = jsonValue.GetString("SchemaVersionId");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
