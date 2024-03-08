/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ListEncoderConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ivsrealtime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEncoderConfigurationsResult::ListEncoderConfigurationsResult()
{
}

ListEncoderConfigurationsResult::ListEncoderConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEncoderConfigurationsResult& ListEncoderConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("encoderConfigurations"))
  {
    Aws::Utils::Array<JsonView> encoderConfigurationsJsonList = jsonValue.GetArray("encoderConfigurations");
    for(unsigned encoderConfigurationsIndex = 0; encoderConfigurationsIndex < encoderConfigurationsJsonList.GetLength(); ++encoderConfigurationsIndex)
    {
      m_encoderConfigurations.push_back(encoderConfigurationsJsonList[encoderConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
