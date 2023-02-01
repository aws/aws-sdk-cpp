/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/ListPartnerEventSourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPartnerEventSourcesResult::ListPartnerEventSourcesResult()
{
}

ListPartnerEventSourcesResult::ListPartnerEventSourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPartnerEventSourcesResult& ListPartnerEventSourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PartnerEventSources"))
  {
    Aws::Utils::Array<JsonView> partnerEventSourcesJsonList = jsonValue.GetArray("PartnerEventSources");
    for(unsigned partnerEventSourcesIndex = 0; partnerEventSourcesIndex < partnerEventSourcesJsonList.GetLength(); ++partnerEventSourcesIndex)
    {
      m_partnerEventSources.push_back(partnerEventSourcesJsonList[partnerEventSourcesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
