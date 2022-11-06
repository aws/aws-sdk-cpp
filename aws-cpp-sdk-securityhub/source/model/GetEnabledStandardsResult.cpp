/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/GetEnabledStandardsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEnabledStandardsResult::GetEnabledStandardsResult()
{
}

GetEnabledStandardsResult::GetEnabledStandardsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEnabledStandardsResult& GetEnabledStandardsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StandardsSubscriptions"))
  {
    Aws::Utils::Array<JsonView> standardsSubscriptionsJsonList = jsonValue.GetArray("StandardsSubscriptions");
    for(unsigned standardsSubscriptionsIndex = 0; standardsSubscriptionsIndex < standardsSubscriptionsJsonList.GetLength(); ++standardsSubscriptionsIndex)
    {
      m_standardsSubscriptions.push_back(standardsSubscriptionsJsonList[standardsSubscriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
