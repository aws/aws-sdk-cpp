/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteCertificateRequest::DeleteCertificateRequest() : 
    m_certificateIdHasBeenSet(false),
    m_forceDelete(false),
    m_forceDeleteHasBeenSet(false)
{
}

Aws::String DeleteCertificateRequest::SerializePayload() const
{
  return {};
}

void DeleteCertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_forceDeleteHasBeenSet)
    {
      ss << m_forceDelete;
      uri.AddQueryStringParameter("forceDelete", ss.str());
      ss.str("");
    }

}



