/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/PutRecordBatchResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Firehose::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutRecordBatchResult::PutRecordBatchResult() : 
    m_failedPutCount(0),
    m_encrypted(false)
{
}

PutRecordBatchResult::PutRecordBatchResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_failedPutCount(0),
    m_encrypted(false)
{
  *this = result;
}

PutRecordBatchResult& PutRecordBatchResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FailedPutCount"))
  {
    m_failedPutCount = jsonValue.GetInteger("FailedPutCount");

  }

  if(jsonValue.ValueExists("Encrypted"))
  {
    m_encrypted = jsonValue.GetBool("Encrypted");

  }

  if(jsonValue.ValueExists("RequestResponses"))
  {
    Aws::Utils::Array<JsonView> requestResponsesJsonList = jsonValue.GetArray("RequestResponses");
    for(unsigned requestResponsesIndex = 0; requestResponsesIndex < requestResponsesJsonList.GetLength(); ++requestResponsesIndex)
    {
      m_requestResponses.push_back(requestResponsesJsonList[requestResponsesIndex].AsObject());
    }
  }



  return *this;
}
