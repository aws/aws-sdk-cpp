/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/UpdateDistributionWithStagingConfig2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateDistributionWithStagingConfig2020_05_31Request::UpdateDistributionWithStagingConfig2020_05_31Request() : 
    m_idHasBeenSet(false),
    m_stagingDistributionIdHasBeenSet(false),
    m_ifMatchHasBeenSet(false)
{
}

Aws::String UpdateDistributionWithStagingConfig2020_05_31Request::SerializePayload() const
{
  return {};
}

void UpdateDistributionWithStagingConfig2020_05_31Request::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_stagingDistributionIdHasBeenSet)
    {
      ss << m_stagingDistributionId;
      uri.AddQueryStringParameter("StagingDistributionId", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection UpdateDistributionWithStagingConfig2020_05_31Request::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_ifMatchHasBeenSet)
  {
    ss << m_ifMatch;
    headers.emplace("if-match",  ss.str());
    ss.str("");
  }

  return headers;
}
