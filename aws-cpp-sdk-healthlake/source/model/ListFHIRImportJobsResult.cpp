/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/ListFHIRImportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFHIRImportJobsResult::ListFHIRImportJobsResult()
{
}

ListFHIRImportJobsResult::ListFHIRImportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFHIRImportJobsResult& ListFHIRImportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ImportJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> importJobPropertiesListJsonList = jsonValue.GetArray("ImportJobPropertiesList");
    for(unsigned importJobPropertiesListIndex = 0; importJobPropertiesListIndex < importJobPropertiesListJsonList.GetLength(); ++importJobPropertiesListIndex)
    {
      m_importJobPropertiesList.push_back(importJobPropertiesListJsonList[importJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
