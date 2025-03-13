/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudcontrol/model/GetResourceRequestStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudControlApi::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceRequestStatusResult::GetResourceRequestStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceRequestStatusResult& GetResourceRequestStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProgressEvent"))
  {
    m_progressEvent = jsonValue.GetObject("ProgressEvent");
    m_progressEventHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HooksProgressEvent"))
  {
    Aws::Utils::Array<JsonView> hooksProgressEventJsonList = jsonValue.GetArray("HooksProgressEvent");
    for(unsigned hooksProgressEventIndex = 0; hooksProgressEventIndex < hooksProgressEventJsonList.GetLength(); ++hooksProgressEventIndex)
    {
      m_hooksProgressEvent.push_back(hooksProgressEventJsonList[hooksProgressEventIndex].AsObject());
    }
    m_hooksProgressEventHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
