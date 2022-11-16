/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/CreateEntityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateEntityResult::CreateEntityResult() : 
    m_state(State::NOT_SET)
{
}

CreateEntityResult::CreateEntityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(State::NOT_SET)
{
  *this = result;
}

CreateEntityResult& CreateEntityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("entityId"))
  {
    m_entityId = jsonValue.GetString("entityId");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("state"));

  }



  return *this;
}
