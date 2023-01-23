/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Criterion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

Criterion::Criterion() : 
    m_eqHasBeenSet(false),
    m_neqHasBeenSet(false),
    m_containsHasBeenSet(false),
    m_exists(false),
    m_existsHasBeenSet(false)
{
}

Criterion::Criterion(JsonView jsonValue) : 
    m_eqHasBeenSet(false),
    m_neqHasBeenSet(false),
    m_containsHasBeenSet(false),
    m_exists(false),
    m_existsHasBeenSet(false)
{
  *this = jsonValue;
}

Criterion& Criterion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eq"))
  {
    Aws::Utils::Array<JsonView> eqJsonList = jsonValue.GetArray("eq");
    for(unsigned eqIndex = 0; eqIndex < eqJsonList.GetLength(); ++eqIndex)
    {
      m_eq.push_back(eqJsonList[eqIndex].AsString());
    }
    m_eqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("neq"))
  {
    Aws::Utils::Array<JsonView> neqJsonList = jsonValue.GetArray("neq");
    for(unsigned neqIndex = 0; neqIndex < neqJsonList.GetLength(); ++neqIndex)
    {
      m_neq.push_back(neqJsonList[neqIndex].AsString());
    }
    m_neqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("contains"))
  {
    Aws::Utils::Array<JsonView> containsJsonList = jsonValue.GetArray("contains");
    for(unsigned containsIndex = 0; containsIndex < containsJsonList.GetLength(); ++containsIndex)
    {
      m_contains.push_back(containsJsonList[containsIndex].AsString());
    }
    m_containsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exists"))
  {
    m_exists = jsonValue.GetBool("exists");

    m_existsHasBeenSet = true;
  }

  return *this;
}

JsonValue Criterion::Jsonize() const
{
  JsonValue payload;

  if(m_eqHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eqJsonList(m_eq.size());
   for(unsigned eqIndex = 0; eqIndex < eqJsonList.GetLength(); ++eqIndex)
   {
     eqJsonList[eqIndex].AsString(m_eq[eqIndex]);
   }
   payload.WithArray("eq", std::move(eqJsonList));

  }

  if(m_neqHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> neqJsonList(m_neq.size());
   for(unsigned neqIndex = 0; neqIndex < neqJsonList.GetLength(); ++neqIndex)
   {
     neqJsonList[neqIndex].AsString(m_neq[neqIndex]);
   }
   payload.WithArray("neq", std::move(neqJsonList));

  }

  if(m_containsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> containsJsonList(m_contains.size());
   for(unsigned containsIndex = 0; containsIndex < containsJsonList.GetLength(); ++containsIndex)
   {
     containsJsonList[containsIndex].AsString(m_contains[containsIndex]);
   }
   payload.WithArray("contains", std::move(containsJsonList));

  }

  if(m_existsHasBeenSet)
  {
   payload.WithBool("exists", m_exists);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
