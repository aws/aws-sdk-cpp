/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/GetUpgradeStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ElasticsearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetUpgradeStatusResult::GetUpgradeStatusResult() : 
    m_upgradeStep(UpgradeStep::NOT_SET),
    m_stepStatus(UpgradeStatus::NOT_SET)
{
}

GetUpgradeStatusResult::GetUpgradeStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_upgradeStep(UpgradeStep::NOT_SET),
    m_stepStatus(UpgradeStatus::NOT_SET)
{
  *this = result;
}

GetUpgradeStatusResult& GetUpgradeStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UpgradeStep"))
  {
    m_upgradeStep = UpgradeStepMapper::GetUpgradeStepForName(jsonValue.GetString("UpgradeStep"));

  }

  if(jsonValue.ValueExists("StepStatus"))
  {
    m_stepStatus = UpgradeStatusMapper::GetUpgradeStatusForName(jsonValue.GetString("StepStatus"));

  }

  if(jsonValue.ValueExists("UpgradeName"))
  {
    m_upgradeName = jsonValue.GetString("UpgradeName");

  }



  return *this;
}
