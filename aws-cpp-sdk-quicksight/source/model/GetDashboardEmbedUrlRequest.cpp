/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GetDashboardEmbedUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDashboardEmbedUrlRequest::GetDashboardEmbedUrlRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_dashboardIdHasBeenSet(false),
    m_identityType(EmbeddingIdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_sessionLifetimeInMinutes(0),
    m_sessionLifetimeInMinutesHasBeenSet(false),
    m_undoRedoDisabled(false),
    m_undoRedoDisabledHasBeenSet(false),
    m_resetDisabled(false),
    m_resetDisabledHasBeenSet(false),
    m_statePersistenceEnabled(false),
    m_statePersistenceEnabledHasBeenSet(false),
    m_userArnHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_additionalDashboardIdsHasBeenSet(false)
{
}

Aws::String GetDashboardEmbedUrlRequest::SerializePayload() const
{
  return {};
}

void GetDashboardEmbedUrlRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_identityTypeHasBeenSet)
    {
      ss << EmbeddingIdentityTypeMapper::GetNameForEmbeddingIdentityType(m_identityType);
      uri.AddQueryStringParameter("creds-type", ss.str());
      ss.str("");
    }

    if(m_sessionLifetimeInMinutesHasBeenSet)
    {
      ss << m_sessionLifetimeInMinutes;
      uri.AddQueryStringParameter("session-lifetime", ss.str());
      ss.str("");
    }

    if(m_undoRedoDisabledHasBeenSet)
    {
      ss << m_undoRedoDisabled;
      uri.AddQueryStringParameter("undo-redo-disabled", ss.str());
      ss.str("");
    }

    if(m_resetDisabledHasBeenSet)
    {
      ss << m_resetDisabled;
      uri.AddQueryStringParameter("reset-disabled", ss.str());
      ss.str("");
    }

    if(m_statePersistenceEnabledHasBeenSet)
    {
      ss << m_statePersistenceEnabled;
      uri.AddQueryStringParameter("state-persistence-enabled", ss.str());
      ss.str("");
    }

    if(m_userArnHasBeenSet)
    {
      ss << m_userArn;
      uri.AddQueryStringParameter("user-arn", ss.str());
      ss.str("");
    }

    if(m_namespaceHasBeenSet)
    {
      ss << m_namespace;
      uri.AddQueryStringParameter("namespace", ss.str());
      ss.str("");
    }

    if(m_additionalDashboardIdsHasBeenSet)
    {
      for(const auto& item : m_additionalDashboardIds)
      {
        ss << item;
        uri.AddQueryStringParameter("additional-dashboard-ids", ss.str());
        ss.str("");
      }
    }

}



