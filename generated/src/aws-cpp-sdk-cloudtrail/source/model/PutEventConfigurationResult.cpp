/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudtrail/model/PutEventConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudTrail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutEventConfigurationResult::PutEventConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutEventConfigurationResult& PutEventConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("EventDataStoreArn"))
  {
    m_eventDataStoreArn = jsonValue.GetString("EventDataStoreArn");
    m_eventDataStoreArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxEventSize"))
  {
    m_maxEventSize = MaxEventSizeMapper::GetMaxEventSizeForName(jsonValue.GetString("MaxEventSize"));
    m_maxEventSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ContextKeySelectors"))
  {
    Aws::Utils::Array<JsonView> contextKeySelectorsJsonList = jsonValue.GetArray("ContextKeySelectors");
    for(unsigned contextKeySelectorsIndex = 0; contextKeySelectorsIndex < contextKeySelectorsJsonList.GetLength(); ++contextKeySelectorsIndex)
    {
      m_contextKeySelectors.push_back(contextKeySelectorsJsonList[contextKeySelectorsIndex].AsObject());
    }
    m_contextKeySelectorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
