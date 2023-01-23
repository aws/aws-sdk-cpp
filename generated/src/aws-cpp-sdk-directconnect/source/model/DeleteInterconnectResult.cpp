/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DeleteInterconnectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteInterconnectResult::DeleteInterconnectResult() : 
    m_interconnectState(InterconnectState::NOT_SET)
{
}

DeleteInterconnectResult::DeleteInterconnectResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_interconnectState(InterconnectState::NOT_SET)
{
  *this = result;
}

DeleteInterconnectResult& DeleteInterconnectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("interconnectState"))
  {
    m_interconnectState = InterconnectStateMapper::GetInterconnectStateForName(jsonValue.GetString("interconnectState"));

  }



  return *this;
}
