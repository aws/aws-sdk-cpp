/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AcceptCertificateTransferRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AcceptCertificateTransferRequest::AcceptCertificateTransferRequest() : 
    m_certificateIdHasBeenSet(false),
    m_setAsActive(false),
    m_setAsActiveHasBeenSet(false)
{
}

Aws::String AcceptCertificateTransferRequest::SerializePayload() const
{
  return {};
}

void AcceptCertificateTransferRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_setAsActiveHasBeenSet)
    {
      ss << m_setAsActive;
      uri.AddQueryStringParameter("setAsActive", ss.str());
      ss.str("");
    }

}



