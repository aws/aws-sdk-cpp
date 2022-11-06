/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/ListFHIRExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListFHIRExportJobsResult::ListFHIRExportJobsResult()
{
}

ListFHIRExportJobsResult::ListFHIRExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFHIRExportJobsResult& ListFHIRExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExportJobPropertiesList"))
  {
    Aws::Utils::Array<JsonView> exportJobPropertiesListJsonList = jsonValue.GetArray("ExportJobPropertiesList");
    for(unsigned exportJobPropertiesListIndex = 0; exportJobPropertiesListIndex < exportJobPropertiesListJsonList.GetLength(); ++exportJobPropertiesListIndex)
    {
      m_exportJobPropertiesList.push_back(exportJobPropertiesListJsonList[exportJobPropertiesListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
