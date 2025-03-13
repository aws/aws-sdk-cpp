/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GetParametersForImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetParametersForImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_keyIdHasBeenSet)
  {
   payload.WithString("KeyId", m_keyId);

  }

  if(m_wrappingAlgorithmHasBeenSet)
  {
   payload.WithString("WrappingAlgorithm", AlgorithmSpecMapper::GetNameForAlgorithmSpec(m_wrappingAlgorithm));
  }

  if(m_wrappingKeySpecHasBeenSet)
  {
   payload.WithString("WrappingKeySpec", WrappingKeySpecMapper::GetNameForWrappingKeySpec(m_wrappingKeySpec));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetParametersForImportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.GetParametersForImport"));
  return headers;

}




