/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/CreateTransitVirtualInterfaceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTransitVirtualInterfaceResult::CreateTransitVirtualInterfaceResult()
{
}

CreateTransitVirtualInterfaceResult::CreateTransitVirtualInterfaceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateTransitVirtualInterfaceResult& CreateTransitVirtualInterfaceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("virtualInterface"))
  {
    m_virtualInterface = jsonValue.GetObject("virtualInterface");

  }



  return *this;
}
