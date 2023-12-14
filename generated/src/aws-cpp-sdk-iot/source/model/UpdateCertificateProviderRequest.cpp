/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateCertificateProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateCertificateProviderRequest::UpdateCertificateProviderRequest() : 
    m_certificateProviderNameHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false),
    m_accountDefaultForOperationsHasBeenSet(false)
{
}

Aws::String UpdateCertificateProviderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lambdaFunctionArnHasBeenSet)
  {
   payload.WithString("lambdaFunctionArn", m_lambdaFunctionArn);

  }

  if(m_accountDefaultForOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountDefaultForOperationsJsonList(m_accountDefaultForOperations.size());
   for(unsigned accountDefaultForOperationsIndex = 0; accountDefaultForOperationsIndex < accountDefaultForOperationsJsonList.GetLength(); ++accountDefaultForOperationsIndex)
   {
     accountDefaultForOperationsJsonList[accountDefaultForOperationsIndex].AsString(CertificateProviderOperationMapper::GetNameForCertificateProviderOperation(m_accountDefaultForOperations[accountDefaultForOperationsIndex]));
   }
   payload.WithArray("accountDefaultForOperations", std::move(accountDefaultForOperationsJsonList));

  }

  return payload.View().WriteReadable();
}




