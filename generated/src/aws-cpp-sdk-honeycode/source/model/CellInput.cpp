/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/CellInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

CellInput::CellInput() : 
    m_factHasBeenSet(false),
    m_factsHasBeenSet(false)
{
}

CellInput::CellInput(JsonView jsonValue) : 
    m_factHasBeenSet(false),
    m_factsHasBeenSet(false)
{
  *this = jsonValue;
}

CellInput& CellInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fact"))
  {
    m_fact = jsonValue.GetString("fact");

    m_factHasBeenSet = true;
  }

  if(jsonValue.ValueExists("facts"))
  {
    Aws::Utils::Array<JsonView> factsJsonList = jsonValue.GetArray("facts");
    for(unsigned factsIndex = 0; factsIndex < factsJsonList.GetLength(); ++factsIndex)
    {
      m_facts.push_back(factsJsonList[factsIndex].AsString());
    }
    m_factsHasBeenSet = true;
  }

  return *this;
}

JsonValue CellInput::Jsonize() const
{
  JsonValue payload;

  if(m_factHasBeenSet)
  {
   payload.WithString("fact", m_fact);

  }

  if(m_factsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> factsJsonList(m_facts.size());
   for(unsigned factsIndex = 0; factsIndex < factsJsonList.GetLength(); ++factsIndex)
   {
     factsJsonList[factsIndex].AsString(m_facts[factsIndex]);
   }
   payload.WithArray("facts", std::move(factsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
