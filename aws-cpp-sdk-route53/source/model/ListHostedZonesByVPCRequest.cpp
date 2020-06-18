/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/route53/model/ListHostedZonesByVPCRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListHostedZonesByVPCRequest::ListHostedZonesByVPCRequest() : 
    m_vPCIdHasBeenSet(false),
    m_vPCRegion(VPCRegion::NOT_SET),
    m_vPCRegionHasBeenSet(false),
    m_maxItemsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListHostedZonesByVPCRequest::SerializePayload() const
{
  return {};
}

void ListHostedZonesByVPCRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_vPCIdHasBeenSet)
    {
      ss << m_vPCId;
      uri.AddQueryStringParameter("vpcid", ss.str());
      ss.str("");
    }

    if(m_vPCRegionHasBeenSet)
    {
      ss << VPCRegionMapper::GetNameForVPCRegion(m_vPCRegion);
      uri.AddQueryStringParameter("vpcregion", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nexttoken", ss.str());
      ss.str("");
    }

}

