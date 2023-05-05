/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/CreateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::FinSpaceData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDatasetRequest::CreateDatasetRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_datasetTitleHasBeenSet(false),
    m_kind(DatasetKind::NOT_SET),
    m_kindHasBeenSet(false),
    m_datasetDescriptionHasBeenSet(false),
    m_ownerInfoHasBeenSet(false),
    m_permissionGroupParamsHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_schemaDefinitionHasBeenSet(false)
{
}

Aws::String CreateDatasetRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_datasetTitleHasBeenSet)
  {
   payload.WithString("datasetTitle", m_datasetTitle);

  }

  if(m_kindHasBeenSet)
  {
   payload.WithString("kind", DatasetKindMapper::GetNameForDatasetKind(m_kind));
  }

  if(m_datasetDescriptionHasBeenSet)
  {
   payload.WithString("datasetDescription", m_datasetDescription);

  }

  if(m_ownerInfoHasBeenSet)
  {
   payload.WithObject("ownerInfo", m_ownerInfo.Jsonize());

  }

  if(m_permissionGroupParamsHasBeenSet)
  {
   payload.WithObject("permissionGroupParams", m_permissionGroupParams.Jsonize());

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("alias", m_alias);

  }

  if(m_schemaDefinitionHasBeenSet)
  {
   payload.WithObject("schemaDefinition", m_schemaDefinition.Jsonize());

  }

  return payload.View().WriteReadable();
}




