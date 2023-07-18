/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/ListAttachmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListAttachmentsRequest::ListAttachmentsRequest() : 
    m_coreNetworkIdHasBeenSet(false),
    m_attachmentType(AttachmentType::NOT_SET),
    m_attachmentTypeHasBeenSet(false),
    m_edgeLocationHasBeenSet(false),
    m_state(AttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListAttachmentsRequest::SerializePayload() const
{
  return {};
}

void ListAttachmentsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_coreNetworkIdHasBeenSet)
    {
      ss << m_coreNetworkId;
      uri.AddQueryStringParameter("coreNetworkId", ss.str());
      ss.str("");
    }

    if(m_attachmentTypeHasBeenSet)
    {
      ss << AttachmentTypeMapper::GetNameForAttachmentType(m_attachmentType);
      uri.AddQueryStringParameter("attachmentType", ss.str());
      ss.str("");
    }

    if(m_edgeLocationHasBeenSet)
    {
      ss << m_edgeLocation;
      uri.AddQueryStringParameter("edgeLocation", ss.str());
      ss.str("");
    }

    if(m_stateHasBeenSet)
    {
      ss << AttachmentStateMapper::GetNameForAttachmentState(m_state);
      uri.AddQueryStringParameter("state", ss.str());
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

}



