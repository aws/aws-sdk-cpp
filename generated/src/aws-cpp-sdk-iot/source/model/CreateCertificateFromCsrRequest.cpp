/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateCertificateFromCsrRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreateCertificateFromCsrRequest::CreateCertificateFromCsrRequest() : 
    m_certificateSigningRequestHasBeenSet(false),
    m_setAsActive(false),
    m_setAsActiveHasBeenSet(false)
{
}

Aws::String CreateCertificateFromCsrRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_certificateSigningRequestHasBeenSet)
  {
   payload.WithString("certificateSigningRequest", m_certificateSigningRequest);

  }

  return payload.View().WriteReadable();
}

void CreateCertificateFromCsrRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_setAsActiveHasBeenSet)
    {
      ss << m_setAsActive;
      uri.AddQueryStringParameter("setAsActive", ss.str());
      ss.str("");
    }

}



