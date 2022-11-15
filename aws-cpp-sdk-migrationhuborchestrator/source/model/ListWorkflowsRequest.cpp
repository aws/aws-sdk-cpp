/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListWorkflowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListWorkflowsRequest::ListWorkflowsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_adsApplicationConfigurationNameHasBeenSet(false),
    m_status(MigrationWorkflowStatusEnum::NOT_SET),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String ListWorkflowsRequest::SerializePayload() const
{
  return {};
}

void ListWorkflowsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_templateIdHasBeenSet)
    {
      ss << m_templateId;
      uri.AddQueryStringParameter("templateId", ss.str());
      ss.str("");
    }

    if(m_adsApplicationConfigurationNameHasBeenSet)
    {
      ss << m_adsApplicationConfigurationName;
      uri.AddQueryStringParameter("adsApplicationConfigurationName", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << MigrationWorkflowStatusEnumMapper::GetNameForMigrationWorkflowStatusEnum(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

}



