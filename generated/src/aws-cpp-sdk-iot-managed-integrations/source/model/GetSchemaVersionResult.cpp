/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetSchemaVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSchemaVersionResult::GetSchemaVersionResult() : 
    m_type(SchemaVersionType::NOT_SET),
    m_visibility(SchemaVersionVisibility::NOT_SET)
{
}

GetSchemaVersionResult::GetSchemaVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetSchemaVersionResult()
{
  *this = result;
}

GetSchemaVersionResult& GetSchemaVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SchemaId"))
  {
    m_schemaId = jsonValue.GetString("SchemaId");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = SchemaVersionTypeMapper::GetSchemaVersionTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Namespace"))
  {
    m_namespace = jsonValue.GetString("Namespace");

  }

  if(jsonValue.ValueExists("SemanticVersion"))
  {
    m_semanticVersion = jsonValue.GetString("SemanticVersion");

  }

  if(jsonValue.ValueExists("Visibility"))
  {
    m_visibility = SchemaVersionVisibilityMapper::GetSchemaVersionVisibilityForName(jsonValue.GetString("Visibility"));

  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetObject("Schema");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
