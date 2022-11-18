/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/UpdateDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDestinationResult::UpdateDestinationResult() : 
    m_state(DestinationState::NOT_SET)
{
}

UpdateDestinationResult::UpdateDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(DestinationState::NOT_SET)
{
  *this = result;
}

UpdateDestinationResult& UpdateDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = DestinationStateMapper::GetDestinationStateForName(jsonValue.GetString("state"));

  }

  if(jsonValue.ValueExists("additionalFixedProperties"))
  {
    m_additionalFixedProperties = jsonValue.GetString("additionalFixedProperties");

  }



  return *this;
}
