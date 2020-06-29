/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/OutputResources.h>
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

OutputResources::OutputResources() : 
    m_amisHasBeenSet(false)
{
}

OutputResources::OutputResources(JsonView jsonValue) : 
    m_amisHasBeenSet(false)
{
  *this = jsonValue;
}

OutputResources& OutputResources::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amis"))
  {
    Array<JsonView> amisJsonList = jsonValue.GetArray("amis");
    for(unsigned amisIndex = 0; amisIndex < amisJsonList.GetLength(); ++amisIndex)
    {
      m_amis.push_back(amisJsonList[amisIndex].AsObject());
    }
    m_amisHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputResources::Jsonize() const
{
  JsonValue payload;

  if(m_amisHasBeenSet)
  {
   Array<JsonValue> amisJsonList(m_amis.size());
   for(unsigned amisIndex = 0; amisIndex < amisJsonList.GetLength(); ++amisIndex)
   {
     amisJsonList[amisIndex].AsObject(m_amis[amisIndex].Jsonize());
   }
   payload.WithArray("amis", std::move(amisJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
