/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/CreateCustomPluginResult.h>
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

CreateCustomPluginResult::CreateCustomPluginResult() : 
    m_customPluginState(CustomPluginState::NOT_SET),
    m_revision(0)
{
}

CreateCustomPluginResult::CreateCustomPluginResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_customPluginState(CustomPluginState::NOT_SET),
    m_revision(0)
{
  *this = result;
}

CreateCustomPluginResult& CreateCustomPluginResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("customPluginArn"))
  {
    m_customPluginArn = jsonValue.GetString("customPluginArn");

  }

  if(jsonValue.ValueExists("customPluginState"))
  {
    m_customPluginState = CustomPluginStateMapper::GetCustomPluginStateForName(jsonValue.GetString("customPluginState"));

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInt64("revision");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
