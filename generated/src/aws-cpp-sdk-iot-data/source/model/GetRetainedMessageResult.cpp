/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/GetRetainedMessageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRetainedMessageResult::GetRetainedMessageResult() : 
    m_qos(0),
    m_lastModifiedTime(0)
{
}

GetRetainedMessageResult::GetRetainedMessageResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_qos(0),
    m_lastModifiedTime(0)
{
  *this = result;
}

GetRetainedMessageResult& GetRetainedMessageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("topic"))
  {
    m_topic = jsonValue.GetString("topic");

  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = HashingUtils::Base64Decode(jsonValue.GetString("payload"));
  }

  if(jsonValue.ValueExists("qos"))
  {
    m_qos = jsonValue.GetInteger("qos");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("lastModifiedTime");

  }

  if(jsonValue.ValueExists("userProperties"))
  {
    m_userProperties = HashingUtils::Base64Decode(jsonValue.GetString("userProperties"));
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
