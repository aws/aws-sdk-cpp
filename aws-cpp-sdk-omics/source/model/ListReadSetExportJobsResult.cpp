/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/ListReadSetExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListReadSetExportJobsResult::ListReadSetExportJobsResult()
{
}

ListReadSetExportJobsResult::ListReadSetExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListReadSetExportJobsResult& ListReadSetExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exportJobs"))
  {
    Aws::Utils::Array<JsonView> exportJobsJsonList = jsonValue.GetArray("exportJobs");
    for(unsigned exportJobsIndex = 0; exportJobsIndex < exportJobsJsonList.GetLength(); ++exportJobsIndex)
    {
      m_exportJobs.push_back(exportJobsJsonList[exportJobsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
