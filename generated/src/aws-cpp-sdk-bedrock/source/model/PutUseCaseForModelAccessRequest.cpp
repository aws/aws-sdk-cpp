/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PutUseCaseForModelAccessRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutUseCaseForModelAccessRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_formDataHasBeenSet)
  {
   payload.WithString("formData", HashingUtils::Base64Encode(m_formData));
  }

  return payload.View().WriteReadable();
}




