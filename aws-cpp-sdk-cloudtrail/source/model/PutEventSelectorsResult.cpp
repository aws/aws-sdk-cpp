/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/PutEventSelectorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutEventSelectorsResult::PutEventSelectorsResult()
{
}

PutEventSelectorsResult::PutEventSelectorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutEventSelectorsResult& PutEventSelectorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrailARN"))
  {
    m_trailARN = jsonValue.GetString("TrailARN");

  }

  if(jsonValue.ValueExists("EventSelectors"))
  {
    Aws::Utils::Array<JsonView> eventSelectorsJsonList = jsonValue.GetArray("EventSelectors");
    for(unsigned eventSelectorsIndex = 0; eventSelectorsIndex < eventSelectorsJsonList.GetLength(); ++eventSelectorsIndex)
    {
      m_eventSelectors.push_back(eventSelectorsJsonList[eventSelectorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("AdvancedEventSelectors"))
  {
    Aws::Utils::Array<JsonView> advancedEventSelectorsJsonList = jsonValue.GetArray("AdvancedEventSelectors");
    for(unsigned advancedEventSelectorsIndex = 0; advancedEventSelectorsIndex < advancedEventSelectorsJsonList.GetLength(); ++advancedEventSelectorsIndex)
    {
      m_advancedEventSelectors.push_back(advancedEventSelectorsJsonList[advancedEventSelectorsIndex].AsObject());
    }
  }



  return *this;
}
