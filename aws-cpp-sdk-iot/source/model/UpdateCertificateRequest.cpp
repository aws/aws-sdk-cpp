/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateCertificateRequest::UpdateCertificateRequest() : 
    m_certificateIdHasBeenSet(false),
    m_newStatus(CertificateStatus::NOT_SET),
    m_newStatusHasBeenSet(false)
{
}

Aws::String UpdateCertificateRequest::SerializePayload() const
{
  return {};
}

void UpdateCertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_newStatusHasBeenSet)
    {
      ss << CertificateStatusMapper::GetNameForCertificateStatus(m_newStatus);
      uri.AddQueryStringParameter("newStatus", ss.str());
      ss.str("");
    }

}



