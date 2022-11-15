/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/ListFHIRDatastoresResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFHIRDatastoresResult::ListFHIRDatastoresResult()
{
}

ListFHIRDatastoresResult::ListFHIRDatastoresResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFHIRDatastoresResult& ListFHIRDatastoresResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatastorePropertiesList"))
  {
    Aws::Utils::Array<JsonView> datastorePropertiesListJsonList = jsonValue.GetArray("DatastorePropertiesList");
    for(unsigned datastorePropertiesListIndex = 0; datastorePropertiesListIndex < datastorePropertiesListJsonList.GetLength(); ++datastorePropertiesListIndex)
    {
      m_datastorePropertiesList.push_back(datastorePropertiesListJsonList[datastorePropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
