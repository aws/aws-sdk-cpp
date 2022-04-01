/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TransferCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

TransferCertificateRequest::TransferCertificateRequest() : 
    m_certificateIdHasBeenSet(false),
    m_targetAwsAccountHasBeenSet(false),
    m_transferMessageHasBeenSet(false)
{
}

Aws::String TransferCertificateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transferMessageHasBeenSet)
  {
   payload.WithString("transferMessage", m_transferMessage);

  }

  return payload.View().WriteReadable();
}

void TransferCertificateRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_targetAwsAccountHasBeenSet)
    {
      ss << m_targetAwsAccount;
      uri.AddQueryStringParameter("targetAwsAccount", ss.str());
      ss.str("");
    }

}



