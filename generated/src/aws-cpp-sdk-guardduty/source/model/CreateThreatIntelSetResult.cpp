/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CreateThreatIntelSetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateThreatIntelSetResult::CreateThreatIntelSetResult()
{
}

CreateThreatIntelSetResult::CreateThreatIntelSetResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateThreatIntelSetResult& CreateThreatIntelSetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("threatIntelSetId"))
  {
    m_threatIntelSetId = jsonValue.GetString("threatIntelSetId");

  }



  return *this;
}
