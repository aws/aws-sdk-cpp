/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateCertificateProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCertificateProviderRequest::CreateCertificateProviderRequest() : 
    m_certificateProviderNameHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false),
    m_accountDefaultForOperationsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateCertificateProviderRequest::SerializePayload() const
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

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




