/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/StartTestSetGenerationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartTestSetGenerationRequest::StartTestSetGenerationRequest() : 
    m_testSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_storageLocationHasBeenSet(false),
    m_generationDataSourceHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_testSetTagsHasBeenSet(false)
{
}

Aws::String StartTestSetGenerationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_testSetNameHasBeenSet)
  {
   payload.WithString("testSetName", m_testSetName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_storageLocationHasBeenSet)
  {
   payload.WithObject("storageLocation", m_storageLocation.Jsonize());

  }

  if(m_generationDataSourceHasBeenSet)
  {
   payload.WithObject("generationDataSource", m_generationDataSource.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_testSetTagsHasBeenSet)
  {
   JsonValue testSetTagsJsonMap;
   for(auto& testSetTagsItem : m_testSetTags)
   {
     testSetTagsJsonMap.WithString(testSetTagsItem.first, testSetTagsItem.second);
   }
   payload.WithObject("testSetTags", std::move(testSetTagsJsonMap));

  }

  return payload.View().WriteReadable();
}




