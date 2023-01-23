/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/GetGeneratedPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccessAnalyzer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetGeneratedPolicyRequest::GetGeneratedPolicyRequest() : 
    m_jobIdHasBeenSet(false),
    m_includeResourcePlaceholders(false),
    m_includeResourcePlaceholdersHasBeenSet(false),
    m_includeServiceLevelTemplate(false),
    m_includeServiceLevelTemplateHasBeenSet(false)
{
}

Aws::String GetGeneratedPolicyRequest::SerializePayload() const
{
  return {};
}

void GetGeneratedPolicyRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_includeResourcePlaceholdersHasBeenSet)
    {
      ss << m_includeResourcePlaceholders;
      uri.AddQueryStringParameter("includeResourcePlaceholders", ss.str());
      ss.str("");
    }

    if(m_includeServiceLevelTemplateHasBeenSet)
    {
      ss << m_includeServiceLevelTemplate;
      uri.AddQueryStringParameter("includeServiceLevelTemplate", ss.str());
      ss.str("");
    }

}



