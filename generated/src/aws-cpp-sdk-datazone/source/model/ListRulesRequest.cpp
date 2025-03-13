/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListRulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListRulesRequest::SerializePayload() const
{
  return {};
}

void ListRulesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_actionHasBeenSet)
    {
      ss << RuleActionMapper::GetNameForRuleAction(m_action);
      uri.AddQueryStringParameter("ruleAction", ss.str());
      ss.str("");
    }

    if(m_assetTypesHasBeenSet)
    {
      for(const auto& item : m_assetTypes)
      {
        ss << item;
        uri.AddQueryStringParameter("assetTypes", ss.str());
        ss.str("");
      }
    }

    if(m_dataProductHasBeenSet)
    {
      ss << m_dataProduct;
      uri.AddQueryStringParameter("dataProduct", ss.str());
      ss.str("");
    }

    if(m_includeCascadedHasBeenSet)
    {
      ss << m_includeCascaded;
      uri.AddQueryStringParameter("includeCascaded", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_projectIdsHasBeenSet)
    {
      for(const auto& item : m_projectIds)
      {
        ss << item;
        uri.AddQueryStringParameter("projectIds", ss.str());
        ss.str("");
      }
    }

    if(m_ruleTypeHasBeenSet)
    {
      ss << RuleTypeMapper::GetNameForRuleType(m_ruleType);
      uri.AddQueryStringParameter("ruleType", ss.str());
      ss.str("");
    }

}



