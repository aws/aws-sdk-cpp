/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DetectProfileObjectTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DetectProfileObjectTypeResult::DetectProfileObjectTypeResult()
{
}

DetectProfileObjectTypeResult::DetectProfileObjectTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DetectProfileObjectTypeResult& DetectProfileObjectTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DetectedProfileObjectTypes"))
  {
    Aws::Utils::Array<JsonView> detectedProfileObjectTypesJsonList = jsonValue.GetArray("DetectedProfileObjectTypes");
    for(unsigned detectedProfileObjectTypesIndex = 0; detectedProfileObjectTypesIndex < detectedProfileObjectTypesJsonList.GetLength(); ++detectedProfileObjectTypesIndex)
    {
      m_detectedProfileObjectTypes.push_back(detectedProfileObjectTypesJsonList[detectedProfileObjectTypesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
