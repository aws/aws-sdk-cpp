/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DescribeAccountCustomizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::QuickSight::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeAccountCustomizationRequest::DescribeAccountCustomizationRequest() : 
    m_awsAccountIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_resolved(false),
    m_resolvedHasBeenSet(false)
{
}

Aws::String DescribeAccountCustomizationRequest::SerializePayload() const
{
  return {};
}

void DescribeAccountCustomizationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_namespaceHasBeenSet)
    {
      ss << m_namespace;
      uri.AddQueryStringParameter("namespace", ss.str());
      ss.str("");
    }

    if(m_resolvedHasBeenSet)
    {
      ss << m_resolved;
      uri.AddQueryStringParameter("resolved", ss.str());
      ss.str("");
    }

}



