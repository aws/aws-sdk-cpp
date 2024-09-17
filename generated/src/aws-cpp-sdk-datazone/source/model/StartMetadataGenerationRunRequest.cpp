/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/StartMetadataGenerationRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartMetadataGenerationRunRequest::StartMetadataGenerationRunRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_domainIdentifierHasBeenSet(false),
    m_owningProjectIdentifierHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_type(MetadataGenerationRunType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String StartMetadataGenerationRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_owningProjectIdentifierHasBeenSet)
  {
   payload.WithString("owningProjectIdentifier", m_owningProjectIdentifier);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", MetadataGenerationRunTypeMapper::GetNameForMetadataGenerationRunType(m_type));
  }

  return payload.View().WriteReadable();
}




