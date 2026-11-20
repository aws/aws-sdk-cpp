/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PutTrustedAccessProgramAccountEnrollmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutTrustedAccessProgramAccountEnrollmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_optInHasBeenSet) {
    payload.WithString("optIn", TrustedAccessProgramOptInMapper::GetNameForTrustedAccessProgramOptIn(m_optIn));
  }

  return payload.View().WriteReadable();
}
