/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/GetDistributionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::imagebuilder::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetDistributionConfigurationRequest::GetDistributionConfigurationRequest() : 
    m_distributionConfigurationArnHasBeenSet(false)
{
}

Aws::String GetDistributionConfigurationRequest::SerializePayload() const
{
  return {};
}

void GetDistributionConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_distributionConfigurationArnHasBeenSet)
    {
      ss << m_distributionConfigurationArn;
      uri.AddQueryStringParameter("distributionConfigurationArn", ss.str());
      ss.str("");
    }

}



