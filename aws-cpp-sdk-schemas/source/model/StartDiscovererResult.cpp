/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/StartDiscovererResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartDiscovererResult::StartDiscovererResult() : 
    m_state(DiscovererState::NOT_SET)
{
}

StartDiscovererResult::StartDiscovererResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(DiscovererState::NOT_SET)
{
  *this = result;
}

StartDiscovererResult& StartDiscovererResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DiscovererId"))
  {
    m_discovererId = jsonValue.GetString("DiscovererId");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = DiscovererStateMapper::GetDiscovererStateForName(jsonValue.GetString("State"));

  }



  return *this;
}
