/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/CreateAccessorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ManagedBlockchain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAccessorRequest::CreateAccessorRequest() : 
    m_clientRequestToken(Aws::Utils::UUID::RandomUUID()),
    m_clientRequestTokenHasBeenSet(true),
    m_accessorType(AccessorType::NOT_SET),
    m_accessorTypeHasBeenSet(false)
{
}

Aws::String CreateAccessorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  if(m_accessorTypeHasBeenSet)
  {
   payload.WithString("AccessorType", AccessorTypeMapper::GetNameForAccessorType(m_accessorType));
  }

  return payload.View().WriteReadable();
}




