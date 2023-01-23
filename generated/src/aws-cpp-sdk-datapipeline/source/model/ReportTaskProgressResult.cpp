/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/ReportTaskProgressResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DataPipeline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ReportTaskProgressResult::ReportTaskProgressResult() : 
    m_canceled(false)
{
}

ReportTaskProgressResult::ReportTaskProgressResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_canceled(false)
{
  *this = result;
}

ReportTaskProgressResult& ReportTaskProgressResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("canceled"))
  {
    m_canceled = jsonValue.GetBool("canceled");

  }



  return *this;
}
