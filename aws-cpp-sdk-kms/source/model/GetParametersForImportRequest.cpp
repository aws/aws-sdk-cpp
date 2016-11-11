/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/kms/model/GetParametersForImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetParametersForImportRequest::GetParametersForImportRequest() : 
    m_keyIdHasBeenSet(false),
    m_wrappingAlgorithm(AlgorithmSpec::NOT_SET),
    m_wrappingAlgorithmHasBeenSet(false),
    m_wrappingKeySpec(WrappingKeySpec::NOT_SET),
    m_wrappingKeySpecHasBeenSet(false)
{
}

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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection GetParametersForImportRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "TrentService.GetParametersForImport"));
  return headers;

}



