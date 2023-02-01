/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketCriteriaAdditionalProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

BucketCriteriaAdditionalProperties::BucketCriteriaAdditionalProperties() : 
    m_eqHasBeenSet(false),
    m_gt(0),
    m_gtHasBeenSet(false),
    m_gte(0),
    m_gteHasBeenSet(false),
    m_lt(0),
    m_ltHasBeenSet(false),
    m_lte(0),
    m_lteHasBeenSet(false),
    m_neqHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
}

BucketCriteriaAdditionalProperties::BucketCriteriaAdditionalProperties(JsonView jsonValue) : 
    m_eqHasBeenSet(false),
    m_gt(0),
    m_gtHasBeenSet(false),
    m_gte(0),
    m_gteHasBeenSet(false),
    m_lt(0),
    m_ltHasBeenSet(false),
    m_lte(0),
    m_lteHasBeenSet(false),
    m_neqHasBeenSet(false),
    m_prefixHasBeenSet(false)
{
  *this = jsonValue;
}

BucketCriteriaAdditionalProperties& BucketCriteriaAdditionalProperties::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("gt"))
  {
    m_gt = jsonValue.GetInt64("gt");

    m_gtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gte"))
  {
    m_gte = jsonValue.GetInt64("gte");

    m_gteHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lt"))
  {
    m_lt = jsonValue.GetInt64("lt");

    m_ltHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lte"))
  {
    m_lte = jsonValue.GetInt64("lte");

    m_lteHasBeenSet = true;
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

  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketCriteriaAdditionalProperties::Jsonize() const
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

  if(m_gtHasBeenSet)
  {
   payload.WithInt64("gt", m_gt);

  }

  if(m_gteHasBeenSet)
  {
   payload.WithInt64("gte", m_gte);

  }

  if(m_ltHasBeenSet)
  {
   payload.WithInt64("lt", m_lt);

  }

  if(m_lteHasBeenSet)
  {
   payload.WithInt64("lte", m_lte);

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

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
