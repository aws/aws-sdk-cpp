/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/ConfirmConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ConfirmConnectionResult::ConfirmConnectionResult() : 
    m_connectionState(ConnectionState::NOT_SET)
{
}

ConfirmConnectionResult::ConfirmConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectionState(ConnectionState::NOT_SET)
{
  *this = result;
}

ConfirmConnectionResult& ConfirmConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("connectionState"))
  {
    m_connectionState = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("connectionState"));

  }



  return *this;
}
