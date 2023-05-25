/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DeleteAddonRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAddonRequest::DeleteAddonRequest() : 
    m_clusterNameHasBeenSet(false),
    m_addonNameHasBeenSet(false),
    m_preserve(false),
    m_preserveHasBeenSet(false)
{
}

Aws::String DeleteAddonRequest::SerializePayload() const
{
  return {};
}

void DeleteAddonRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_preserveHasBeenSet)
    {
      ss << m_preserve;
      uri.AddQueryStringParameter("preserve", ss.str());
      ss.str("");
    }

}



