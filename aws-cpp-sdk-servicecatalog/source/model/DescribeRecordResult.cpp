/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/DescribeRecordResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeRecordResult::DescribeRecordResult()
{
}

DescribeRecordResult::DescribeRecordResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeRecordResult& DescribeRecordResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RecordDetail"))
  {
    m_recordDetail = jsonValue.GetObject("RecordDetail");

  }

  if(jsonValue.ValueExists("RecordOutputs"))
  {
    Aws::Utils::Array<JsonView> recordOutputsJsonList = jsonValue.GetArray("RecordOutputs");
    for(unsigned recordOutputsIndex = 0; recordOutputsIndex < recordOutputsJsonList.GetLength(); ++recordOutputsIndex)
    {
      m_recordOutputs.push_back(recordOutputsJsonList[recordOutputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("NextPageToken");

  }



  return *this;
}
