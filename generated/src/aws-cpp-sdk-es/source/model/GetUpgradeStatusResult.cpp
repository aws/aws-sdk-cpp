/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/GetUpgradeStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUpgradeStatusResult::GetUpgradeStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetUpgradeStatusResult& GetUpgradeStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpgradeStep"))
  {
    m_upgradeStep = UpgradeStepMapper::GetUpgradeStepForName(jsonValue.GetString("UpgradeStep"));
    m_upgradeStepHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StepStatus"))
  {
    m_stepStatus = UpgradeStatusMapper::GetUpgradeStatusForName(jsonValue.GetString("StepStatus"));
    m_stepStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpgradeName"))
  {
    m_upgradeName = jsonValue.GetString("UpgradeName");
    m_upgradeNameHasBeenSet = true;
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
