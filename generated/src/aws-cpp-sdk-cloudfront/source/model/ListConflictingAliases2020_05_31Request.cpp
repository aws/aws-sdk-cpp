/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ListConflictingAliases2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListConflictingAliases2020_05_31Request::ListConflictingAliases2020_05_31Request() : 
    m_distributionIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListConflictingAliases2020_05_31Request::SerializePayload() const
{
  return {};
}

void ListConflictingAliases2020_05_31Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_distributionIdHasBeenSet)
    {
      ss << m_distributionId;
      uri.AddQueryStringParameter("DistributionId", ss.str());
      ss.str("");
    }

    if(m_aliasHasBeenSet)
    {
      ss << m_alias;
      uri.AddQueryStringParameter("Alias", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("Marker", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("MaxItems", ss.str());
      ss.str("");
    }

}

