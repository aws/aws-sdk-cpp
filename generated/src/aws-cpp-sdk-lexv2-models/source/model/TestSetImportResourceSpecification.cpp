/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetImportResourceSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TestSetImportResourceSpecification::TestSetImportResourceSpecification() : 
    m_testSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_storageLocationHasBeenSet(false),
    m_importInputLocationHasBeenSet(false),
    m_modality(TestSetModality::NOT_SET),
    m_modalityHasBeenSet(false),
    m_testSetTagsHasBeenSet(false)
{
}

TestSetImportResourceSpecification::TestSetImportResourceSpecification(JsonView jsonValue) : 
    m_testSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_storageLocationHasBeenSet(false),
    m_importInputLocationHasBeenSet(false),
    m_modality(TestSetModality::NOT_SET),
    m_modalityHasBeenSet(false),
    m_testSetTagsHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetImportResourceSpecification& TestSetImportResourceSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testSetName"))
  {
    m_testSetName = jsonValue.GetString("testSetName");

    m_testSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageLocation"))
  {
    m_storageLocation = jsonValue.GetObject("storageLocation");

    m_storageLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importInputLocation"))
  {
    m_importInputLocation = jsonValue.GetObject("importInputLocation");

    m_importInputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modality"))
  {
    m_modality = TestSetModalityMapper::GetTestSetModalityForName(jsonValue.GetString("modality"));

    m_modalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testSetTags"))
  {
    Aws::Map<Aws::String, JsonView> testSetTagsJsonMap = jsonValue.GetObject("testSetTags").GetAllObjects();
    for(auto& testSetTagsItem : testSetTagsJsonMap)
    {
      m_testSetTags[testSetTagsItem.first] = testSetTagsItem.second.AsString();
    }
    m_testSetTagsHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetImportResourceSpecification::Jsonize() const
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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_storageLocationHasBeenSet)
  {
   payload.WithObject("storageLocation", m_storageLocation.Jsonize());

  }

  if(m_importInputLocationHasBeenSet)
  {
   payload.WithObject("importInputLocation", m_importInputLocation.Jsonize());

  }

  if(m_modalityHasBeenSet)
  {
   payload.WithString("modality", TestSetModalityMapper::GetNameForTestSetModality(m_modality));
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

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
