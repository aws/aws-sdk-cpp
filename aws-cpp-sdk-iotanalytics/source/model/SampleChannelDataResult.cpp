/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/iotanalytics/model/SampleChannelDataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SampleChannelDataResult::SampleChannelDataResult()
{
}

SampleChannelDataResult::SampleChannelDataResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SampleChannelDataResult& SampleChannelDataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("payloads"))
  {
    Array<JsonValue> payloadsJsonList = jsonValue.GetArray("payloads");
    for(unsigned payloadsIndex = 0; payloadsIndex < payloadsJsonList.GetLength(); ++payloadsIndex)
    {
      m_payloads.push_back(HashingUtils::Base64Decode(payloadsJsonList[payloadsIndex].AsString()));
    }
  }



  return *this;
}
