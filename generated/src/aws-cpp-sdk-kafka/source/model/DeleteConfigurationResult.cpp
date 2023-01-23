/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DeleteConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteConfigurationResult::DeleteConfigurationResult() : 
    m_state(ConfigurationState::NOT_SET)
{
}

DeleteConfigurationResult::DeleteConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(ConfigurationState::NOT_SET)
{
  *this = result;
}

DeleteConfigurationResult& DeleteConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ConfigurationStateMapper::GetConfigurationStateForName(jsonValue.GetString("state"));

  }



  return *this;
}
