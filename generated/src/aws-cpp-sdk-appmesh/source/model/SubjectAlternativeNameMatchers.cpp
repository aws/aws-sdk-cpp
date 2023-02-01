/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/SubjectAlternativeNameMatchers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

SubjectAlternativeNameMatchers::SubjectAlternativeNameMatchers() : 
    m_exactHasBeenSet(false)
{
}

SubjectAlternativeNameMatchers::SubjectAlternativeNameMatchers(JsonView jsonValue) : 
    m_exactHasBeenSet(false)
{
  *this = jsonValue;
}

SubjectAlternativeNameMatchers& SubjectAlternativeNameMatchers::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exact"))
  {
    Aws::Utils::Array<JsonView> exactJsonList = jsonValue.GetArray("exact");
    for(unsigned exactIndex = 0; exactIndex < exactJsonList.GetLength(); ++exactIndex)
    {
      m_exact.push_back(exactJsonList[exactIndex].AsString());
    }
    m_exactHasBeenSet = true;
  }

  return *this;
}

JsonValue SubjectAlternativeNameMatchers::Jsonize() const
{
  JsonValue payload;

  if(m_exactHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> exactJsonList(m_exact.size());
   for(unsigned exactIndex = 0; exactIndex < exactJsonList.GetLength(); ++exactIndex)
   {
     exactJsonList[exactIndex].AsString(m_exact[exactIndex]);
   }
   payload.WithArray("exact", std::move(exactJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws
