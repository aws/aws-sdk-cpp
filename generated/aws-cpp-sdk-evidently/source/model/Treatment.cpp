/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/Treatment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

Treatment::Treatment() : 
    m_descriptionHasBeenSet(false),
    m_featureVariationsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Treatment::Treatment(JsonView jsonValue) : 
    m_descriptionHasBeenSet(false),
    m_featureVariationsHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

Treatment& Treatment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("featureVariations"))
  {
    Aws::Map<Aws::String, JsonView> featureVariationsJsonMap = jsonValue.GetObject("featureVariations").GetAllObjects();
    for(auto& featureVariationsItem : featureVariationsJsonMap)
    {
      m_featureVariations[featureVariationsItem.first] = featureVariationsItem.second.AsString();
    }
    m_featureVariationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue Treatment::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_featureVariationsHasBeenSet)
  {
   JsonValue featureVariationsJsonMap;
   for(auto& featureVariationsItem : m_featureVariations)
   {
     featureVariationsJsonMap.WithString(featureVariationsItem.first, featureVariationsItem.second);
   }
   payload.WithObject("featureVariations", std::move(featureVariationsJsonMap));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
