/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeVirtualInterfacesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeVirtualInterfacesResult::DescribeVirtualInterfacesResult()
{
}

DescribeVirtualInterfacesResult::DescribeVirtualInterfacesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeVirtualInterfacesResult& DescribeVirtualInterfacesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("virtualInterfaces"))
  {
    Aws::Utils::Array<JsonView> virtualInterfacesJsonList = jsonValue.GetArray("virtualInterfaces");
    for(unsigned virtualInterfacesIndex = 0; virtualInterfacesIndex < virtualInterfacesJsonList.GetLength(); ++virtualInterfacesIndex)
    {
      m_virtualInterfaces.push_back(virtualInterfacesJsonList[virtualInterfacesIndex].AsObject());
    }
  }



  return *this;
}
