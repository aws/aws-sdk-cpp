/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/GetTemplateStepRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetTemplateStepRequest::GetTemplateStepRequest() : 
    m_idHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_stepGroupIdHasBeenSet(false)
{
}

Aws::String GetTemplateStepRequest::SerializePayload() const
{
  return {};
}

void GetTemplateStepRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_templateIdHasBeenSet)
    {
      ss << m_templateId;
      uri.AddQueryStringParameter("templateId", ss.str());
      ss.str("");
    }

    if(m_stepGroupIdHasBeenSet)
    {
      ss << m_stepGroupId;
      uri.AddQueryStringParameter("stepGroupId", ss.str());
      ss.str("");
    }

}



