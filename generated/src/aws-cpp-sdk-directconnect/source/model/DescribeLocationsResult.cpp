/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/DescribeLocationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DirectConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeLocationsResult::DescribeLocationsResult()
{
}

DescribeLocationsResult::DescribeLocationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeLocationsResult& DescribeLocationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("locations"))
  {
    Aws::Utils::Array<JsonView> locationsJsonList = jsonValue.GetArray("locations");
    for(unsigned locationsIndex = 0; locationsIndex < locationsJsonList.GetLength(); ++locationsIndex)
    {
      m_locations.push_back(locationsJsonList[locationsIndex].AsObject());
    }
  }



  return *this;
}
