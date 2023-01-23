/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/ConfirmPublicVirtualInterfaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ConfirmPublicVirtualInterfaceResult::ConfirmPublicVirtualInterfaceResult() : 
    m_virtualInterfaceState(VirtualInterfaceState::NOT_SET)
{
}

ConfirmPublicVirtualInterfaceResult::ConfirmPublicVirtualInterfaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_virtualInterfaceState(VirtualInterfaceState::NOT_SET)
{
  *this = result;
}

ConfirmPublicVirtualInterfaceResult& ConfirmPublicVirtualInterfaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("virtualInterfaceState"))
  {
    m_virtualInterfaceState = VirtualInterfaceStateMapper::GetVirtualInterfaceStateForName(jsonValue.GetString("virtualInterfaceState"));

  }



  return *this;
}
