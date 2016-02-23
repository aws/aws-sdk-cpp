/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/route53/model/ListChangeBatchesByRRSetRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListChangeBatchesByRRSetRequest::ListChangeBatchesByRRSetRequest() : 
    m_hostedZoneIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_setIdentifierHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_maxItemsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String ListChangeBatchesByRRSetRequest::SerializePayload() const
{
  return "";
}

void ListChangeBatchesByRRSetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("rrSet_name", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << RRTypeMapper::GetNameForRRType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

    if(m_setIdentifierHasBeenSet)
    {
      ss << m_setIdentifier;
      uri.AddQueryStringParameter("identifier", ss.str());
      ss.str("");
    }

    if(m_startDateHasBeenSet)
    {
      ss << m_startDate;
      uri.AddQueryStringParameter("startDate", ss.str());
      ss.str("");
    }

    if(m_endDateHasBeenSet)
    {
      ss << m_endDate;
      uri.AddQueryStringParameter("endDate", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxItems", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

}

