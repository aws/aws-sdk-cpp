/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartImportRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartImportRequest::StartImportRequest() : 
    m_importIdHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false),
    m_mergeStrategy(MergeStrategy::NOT_SET),
    m_mergeStrategyHasBeenSet(false),
    m_filePasswordHasBeenSet(false)
{
}

Aws::String StartImportRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_importIdHasBeenSet)
  {
   payload.WithString("importId", m_importId);

  }

  if(m_resourceSpecificationHasBeenSet)
  {
   payload.WithObject("resourceSpecification", m_resourceSpecification.Jsonize());

  }

  if(m_mergeStrategyHasBeenSet)
  {
   payload.WithString("mergeStrategy", MergeStrategyMapper::GetNameForMergeStrategy(m_mergeStrategy));
  }

  if(m_filePasswordHasBeenSet)
  {
   payload.WithString("filePassword", m_filePassword);

  }

  return payload.View().WriteReadable();
}




