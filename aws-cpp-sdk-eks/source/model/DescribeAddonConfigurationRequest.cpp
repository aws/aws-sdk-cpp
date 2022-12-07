/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeAddonConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeAddonConfigurationRequest::DescribeAddonConfigurationRequest() : 
    m_addonNameHasBeenSet(false),
    m_addonVersionHasBeenSet(false)
{
}

Aws::String DescribeAddonConfigurationRequest::SerializePayload() const
{
  return {};
}

void DescribeAddonConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_addonNameHasBeenSet)
    {
      ss << m_addonName;
      uri.AddQueryStringParameter("addonName", ss.str());
      ss.str("");
    }

    if(m_addonVersionHasBeenSet)
    {
      ss << m_addonVersion;
      uri.AddQueryStringParameter("addonVersion", ss.str());
      ss.str("");
    }

}



