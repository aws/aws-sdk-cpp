/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/Container.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

Container::Container() : 
    m_regionHasBeenSet(false),
    m_imageUrisHasBeenSet(false)
{
}

Container::Container(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_imageUrisHasBeenSet(false)
{
  *this = jsonValue;
}

Container& Container::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageUris"))
  {
    Aws::Utils::Array<JsonView> imageUrisJsonList = jsonValue.GetArray("imageUris");
    for(unsigned imageUrisIndex = 0; imageUrisIndex < imageUrisJsonList.GetLength(); ++imageUrisIndex)
    {
      m_imageUris.push_back(imageUrisJsonList[imageUrisIndex].AsString());
    }
    m_imageUrisHasBeenSet = true;
  }

  return *this;
}

JsonValue Container::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_imageUrisHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageUrisJsonList(m_imageUris.size());
   for(unsigned imageUrisIndex = 0; imageUrisIndex < imageUrisJsonList.GetLength(); ++imageUrisIndex)
   {
     imageUrisJsonList[imageUrisIndex].AsString(m_imageUris[imageUrisIndex]);
   }
   payload.WithArray("imageUris", std::move(imageUrisJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
