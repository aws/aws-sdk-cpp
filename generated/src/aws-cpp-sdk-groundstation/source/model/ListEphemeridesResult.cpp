/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/ListEphemeridesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListEphemeridesResult::ListEphemeridesResult()
{
}

ListEphemeridesResult::ListEphemeridesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListEphemeridesResult& ListEphemeridesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ephemerides"))
  {
    Aws::Utils::Array<JsonView> ephemeridesJsonList = jsonValue.GetArray("ephemerides");
    for(unsigned ephemeridesIndex = 0; ephemeridesIndex < ephemeridesJsonList.GetLength(); ++ephemeridesIndex)
    {
      m_ephemerides.push_back(ephemeridesJsonList[ephemeridesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
