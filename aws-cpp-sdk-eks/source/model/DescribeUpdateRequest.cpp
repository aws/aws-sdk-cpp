/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeUpdateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeUpdateRequest::DescribeUpdateRequest() : 
    m_nameHasBeenSet(false),
    m_updateIdHasBeenSet(false),
    m_nodegroupNameHasBeenSet(false)
{
}

Aws::String DescribeUpdateRequest::SerializePayload() const
{
  return {};
}

void DescribeUpdateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nodegroupNameHasBeenSet)
    {
      ss << m_nodegroupName;
      uri.AddQueryStringParameter("nodegroupName", ss.str());
      ss.str("");
    }

}



