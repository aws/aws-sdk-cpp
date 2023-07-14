/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/VerifyOTPMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Pinpoint::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

VerifyOTPMessageRequest::VerifyOTPMessageRequest() : 
    m_applicationIdHasBeenSet(false),
    m_verifyOTPMessageRequestParametersHasBeenSet(false)
{
}

Aws::String VerifyOTPMessageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_verifyOTPMessageRequestParametersHasBeenSet)
  {
   payload = m_verifyOTPMessageRequestParameters.Jsonize();
  }

  return payload.View().WriteReadable();
}




