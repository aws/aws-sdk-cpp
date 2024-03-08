/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ListKxVolumesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListKxVolumesRequest::ListKxVolumesRequest() : 
    m_environmentIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_volumeType(KxVolumeType::NOT_SET),
    m_volumeTypeHasBeenSet(false)
{
}

Aws::String ListKxVolumesRequest::SerializePayload() const
{
  return {};
}

void ListKxVolumesRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_volumeTypeHasBeenSet)
    {
      ss << KxVolumeTypeMapper::GetNameForKxVolumeType(m_volumeType);
      uri.AddQueryStringParameter("volumeType", ss.str());
      ss.str("");
    }

}



