/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/DescribeManagedRuleGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeManagedRuleGroupResult::DescribeManagedRuleGroupResult() : 
    m_capacity(0)
{
}

DescribeManagedRuleGroupResult::DescribeManagedRuleGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_capacity(0)
{
  *this = result;
}

DescribeManagedRuleGroupResult& DescribeManagedRuleGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("VersionName"))
  {
    m_versionName = jsonValue.GetString("VersionName");

  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInt64("Capacity");

  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("LabelNamespace"))
  {
    m_labelNamespace = jsonValue.GetString("LabelNamespace");

  }

  if(jsonValue.ValueExists("AvailableLabels"))
  {
    Aws::Utils::Array<JsonView> availableLabelsJsonList = jsonValue.GetArray("AvailableLabels");
    for(unsigned availableLabelsIndex = 0; availableLabelsIndex < availableLabelsJsonList.GetLength(); ++availableLabelsIndex)
    {
      m_availableLabels.push_back(availableLabelsJsonList[availableLabelsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ConsumedLabels"))
  {
    Aws::Utils::Array<JsonView> consumedLabelsJsonList = jsonValue.GetArray("ConsumedLabels");
    for(unsigned consumedLabelsIndex = 0; consumedLabelsIndex < consumedLabelsJsonList.GetLength(); ++consumedLabelsIndex)
    {
      m_consumedLabels.push_back(consumedLabelsJsonList[consumedLabelsIndex].AsObject());
    }
  }



  return *this;
}
