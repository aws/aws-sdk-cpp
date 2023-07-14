/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/GetLifecyclePoliciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DLM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetLifecyclePoliciesRequest::GetLifecyclePoliciesRequest() : 
    m_policyIdsHasBeenSet(false),
    m_state(GettablePolicyStateValues::NOT_SET),
    m_stateHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_targetTagsHasBeenSet(false),
    m_tagsToAddHasBeenSet(false)
{
}

Aws::String GetLifecyclePoliciesRequest::SerializePayload() const
{
  return {};
}

void GetLifecyclePoliciesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_policyIdsHasBeenSet)
    {
      for(const auto& item : m_policyIds)
      {
        ss << item;
        uri.AddQueryStringParameter("policyIds", ss.str());
        ss.str("");
      }
    }

    if(m_stateHasBeenSet)
    {
      ss << GettablePolicyStateValuesMapper::GetNameForGettablePolicyStateValues(m_state);
      uri.AddQueryStringParameter("state", ss.str());
      ss.str("");
    }

    if(m_resourceTypesHasBeenSet)
    {
      for(const auto& item : m_resourceTypes)
      {
        ss << ResourceTypeValuesMapper::GetNameForResourceTypeValues(item);
        uri.AddQueryStringParameter("resourceTypes", ss.str());
        ss.str("");
      }
    }

    if(m_targetTagsHasBeenSet)
    {
      for(const auto& item : m_targetTags)
      {
        ss << item;
        uri.AddQueryStringParameter("targetTags", ss.str());
        ss.str("");
      }
    }

    if(m_tagsToAddHasBeenSet)
    {
      for(const auto& item : m_tagsToAdd)
      {
        ss << item;
        uri.AddQueryStringParameter("tagsToAdd", ss.str());
        ss.str("");
      }
    }

}



