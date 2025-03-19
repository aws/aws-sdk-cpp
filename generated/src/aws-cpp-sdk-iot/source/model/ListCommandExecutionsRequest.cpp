/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListCommandExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListCommandExecutionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", CommandNamespaceMapper::GetNameForCommandNamespace(m_namespace));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CommandExecutionStatusMapper::GetNameForCommandExecutionStatus(m_status));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_startedTimeFilterHasBeenSet)
  {
   payload.WithObject("startedTimeFilter", m_startedTimeFilter.Jsonize());

  }

  if(m_completedTimeFilterHasBeenSet)
  {
   payload.WithObject("completedTimeFilter", m_completedTimeFilter.Jsonize());

  }

  if(m_targetArnHasBeenSet)
  {
   payload.WithString("targetArn", m_targetArn);

  }

  if(m_commandArnHasBeenSet)
  {
   payload.WithString("commandArn", m_commandArn);

  }

  return payload.View().WriteReadable();
}

void ListCommandExecutionsRequest::AddQueryStringParameters(URI& uri) const
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

}



