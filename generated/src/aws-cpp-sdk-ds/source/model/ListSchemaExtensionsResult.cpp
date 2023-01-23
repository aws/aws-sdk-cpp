/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ListSchemaExtensionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSchemaExtensionsResult::ListSchemaExtensionsResult()
{
}

ListSchemaExtensionsResult::ListSchemaExtensionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSchemaExtensionsResult& ListSchemaExtensionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SchemaExtensionsInfo"))
  {
    Aws::Utils::Array<JsonView> schemaExtensionsInfoJsonList = jsonValue.GetArray("SchemaExtensionsInfo");
    for(unsigned schemaExtensionsInfoIndex = 0; schemaExtensionsInfoIndex < schemaExtensionsInfoJsonList.GetLength(); ++schemaExtensionsInfoIndex)
    {
      m_schemaExtensionsInfo.push_back(schemaExtensionsInfoJsonList[schemaExtensionsInfoIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
