/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/AssociateAlias2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateAlias2020_05_31Request::AssociateAlias2020_05_31Request() : 
    m_targetDistributionIdHasBeenSet(false),
    m_aliasHasBeenSet(false)
{
}

Aws::String AssociateAlias2020_05_31Request::SerializePayload() const
{
  return {};
}

void AssociateAlias2020_05_31Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_aliasHasBeenSet)
    {
      ss << m_alias;
      uri.AddQueryStringParameter("Alias", ss.str());
      ss.str("");
    }

}

