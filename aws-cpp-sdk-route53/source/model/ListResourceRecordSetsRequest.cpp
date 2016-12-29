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
#include <aws/route53/model/ListResourceRecordSetsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

ListResourceRecordSetsRequest::ListResourceRecordSetsRequest() : 
    m_hostedZoneIdHasBeenSet(false),
    m_startRecordNameHasBeenSet(false),
    m_startRecordType(RRType::NOT_SET),
    m_startRecordTypeHasBeenSet(false),
    m_startRecordIdentifierHasBeenSet(false),
    m_maxItemsHasBeenSet(false)
{
}

Aws::String ListResourceRecordSetsRequest::SerializePayload() const
{
  return "";
}

void ListResourceRecordSetsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_startRecordNameHasBeenSet)
    {
      ss << m_startRecordName;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_startRecordTypeHasBeenSet)
    {
      ss << RRTypeMapper::GetNameForRRType(m_startRecordType);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

    if(m_startRecordIdentifierHasBeenSet)
    {
      ss << m_startRecordIdentifier;
      uri.AddQueryStringParameter("identifier", ss.str());
      ss.str("");
    }

    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxitems", ss.str());
      ss.str("");
    }

}

