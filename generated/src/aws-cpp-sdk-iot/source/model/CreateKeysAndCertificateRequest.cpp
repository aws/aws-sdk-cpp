/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateKeysAndCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

CreateKeysAndCertificateRequest::CreateKeysAndCertificateRequest() : 
    m_setAsActive(false),
    m_setAsActiveHasBeenSet(false)
{
}

Aws::String CreateKeysAndCertificateRequest::SerializePayload() const
{
  return {};
}

void CreateKeysAndCertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_setAsActiveHasBeenSet)
    {
      ss << m_setAsActive;
      uri.AddQueryStringParameter("setAsActive", ss.str());
      ss.str("");
    }

}



