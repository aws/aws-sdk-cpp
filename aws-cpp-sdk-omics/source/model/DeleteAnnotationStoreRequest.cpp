/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/DeleteAnnotationStoreRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAnnotationStoreRequest::DeleteAnnotationStoreRequest() : 
    m_force(false),
    m_forceHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteAnnotationStoreRequest::SerializePayload() const
{
  return {};
}

void DeleteAnnotationStoreRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_forceHasBeenSet)
    {
      ss << m_force;
      uri.AddQueryStringParameter("force", ss.str());
      ss.str("");
    }

}



