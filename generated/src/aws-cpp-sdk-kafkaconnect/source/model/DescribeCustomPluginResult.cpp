/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DescribeCustomPluginResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCustomPluginResult::DescribeCustomPluginResult() : 
    m_customPluginState(CustomPluginState::NOT_SET)
{
}

DescribeCustomPluginResult::DescribeCustomPluginResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_customPluginState(CustomPluginState::NOT_SET)
{
  *this = result;
}

DescribeCustomPluginResult& DescribeCustomPluginResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("customPluginArn"))
  {
    m_customPluginArn = jsonValue.GetString("customPluginArn");

  }

  if(jsonValue.ValueExists("customPluginState"))
  {
    m_customPluginState = CustomPluginStateMapper::GetCustomPluginStateForName(jsonValue.GetString("customPluginState"));

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("latestRevision"))
  {
    m_latestRevision = jsonValue.GetObject("latestRevision");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("stateDescription"))
  {
    m_stateDescription = jsonValue.GetObject("stateDescription");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
