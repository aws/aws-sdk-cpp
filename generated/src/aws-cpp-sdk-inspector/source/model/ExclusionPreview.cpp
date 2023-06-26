/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/ExclusionPreview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

ExclusionPreview::ExclusionPreview() : 
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_scopesHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

ExclusionPreview::ExclusionPreview(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_scopesHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

ExclusionPreview& ExclusionPreview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("title"))
  {
    m_title = jsonValue.GetString("title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetString("recommendation");

    m_recommendationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scopes"))
  {
    Aws::Utils::Array<JsonView> scopesJsonList = jsonValue.GetArray("scopes");
    for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
    {
      m_scopes.push_back(scopesJsonList[scopesIndex].AsObject());
    }
    m_scopesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Utils::Array<JsonView> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue ExclusionPreview::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_recommendationHasBeenSet)
  {
   payload.WithString("recommendation", m_recommendation);

  }

  if(m_scopesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scopesJsonList(m_scopes.size());
   for(unsigned scopesIndex = 0; scopesIndex < scopesJsonList.GetLength(); ++scopesIndex)
   {
     scopesJsonList[scopesIndex].AsObject(m_scopes[scopesIndex].Jsonize());
   }
   payload.WithArray("scopes", std::move(scopesJsonList));

  }

  if(m_attributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
