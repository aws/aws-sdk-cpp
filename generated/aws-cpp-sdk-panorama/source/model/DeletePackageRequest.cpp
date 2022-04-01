/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DeletePackageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeletePackageRequest::DeletePackageRequest() : 
    m_forceDelete(false),
    m_forceDeleteHasBeenSet(false),
    m_packageIdHasBeenSet(false)
{
}

Aws::String DeletePackageRequest::SerializePayload() const
{
  return {};
}

void DeletePackageRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_forceDeleteHasBeenSet)
    {
      ss << m_forceDelete;
      uri.AddQueryStringParameter("ForceDelete", ss.str());
      ss.str("");
    }

}



