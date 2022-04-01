﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/CriterionAdditionalProperties.h>
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

CriterionAdditionalProperties::CriterionAdditionalProperties() : 
    m_eqHasBeenSet(false),
    m_eqExactMatchHasBeenSet(false),
    m_gt(0),
    m_gtHasBeenSet(false),
    m_gte(0),
    m_gteHasBeenSet(false),
    m_lt(0),
    m_ltHasBeenSet(false),
    m_lte(0),
    m_lteHasBeenSet(false),
    m_neqHasBeenSet(false)
{
}

CriterionAdditionalProperties::CriterionAdditionalProperties(JsonView jsonValue) : 
    m_eqHasBeenSet(false),
    m_eqExactMatchHasBeenSet(false),
    m_gt(0),
    m_gtHasBeenSet(false),
    m_gte(0),
    m_gteHasBeenSet(false),
    m_lt(0),
    m_ltHasBeenSet(false),
    m_lte(0),
    m_lteHasBeenSet(false),
    m_neqHasBeenSet(false)
{
  *this = jsonValue;
}

CriterionAdditionalProperties& CriterionAdditionalProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("eq"))
  {
    Array<JsonView> eqJsonList = jsonValue.GetArray("eq");
    for(unsigned eqIndex = 0; eqIndex < eqJsonList.GetLength(); ++eqIndex)
    {
      m_eq.push_back(eqJsonList[eqIndex].AsString());
    }
    m_eqHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eqExactMatch"))
  {
    Array<JsonView> eqExactMatchJsonList = jsonValue.GetArray("eqExactMatch");
    for(unsigned eqExactMatchIndex = 0; eqExactMatchIndex < eqExactMatchJsonList.GetLength(); ++eqExactMatchIndex)
    {
      m_eqExactMatch.push_back(eqExactMatchJsonList[eqExactMatchIndex].AsString());
    }
    m_eqExactMatchHasBeenSet = true;
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
    Array<JsonView> neqJsonList = jsonValue.GetArray("neq");
    for(unsigned neqIndex = 0; neqIndex < neqJsonList.GetLength(); ++neqIndex)
    {
      m_neq.push_back(neqJsonList[neqIndex].AsString());
    }
    m_neqHasBeenSet = true;
  }

  return *this;
}

JsonValue CriterionAdditionalProperties::Jsonize() const
{
  JsonValue payload;

  if(m_eqHasBeenSet)
  {
   Array<JsonValue> eqJsonList(m_eq.size());
   for(unsigned eqIndex = 0; eqIndex < eqJsonList.GetLength(); ++eqIndex)
   {
     eqJsonList[eqIndex].AsString(m_eq[eqIndex]);
   }
   payload.WithArray("eq", std::move(eqJsonList));

  }

  if(m_eqExactMatchHasBeenSet)
  {
   Array<JsonValue> eqExactMatchJsonList(m_eqExactMatch.size());
   for(unsigned eqExactMatchIndex = 0; eqExactMatchIndex < eqExactMatchJsonList.GetLength(); ++eqExactMatchIndex)
   {
     eqExactMatchJsonList[eqExactMatchIndex].AsString(m_eqExactMatch[eqExactMatchIndex]);
   }
   payload.WithArray("eqExactMatch", std::move(eqExactMatchJsonList));

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
   Array<JsonValue> neqJsonList(m_neq.size());
   for(unsigned neqIndex = 0; neqIndex < neqJsonList.GetLength(); ++neqIndex)
   {
     neqJsonList[neqIndex].AsString(m_neq[neqIndex]);
   }
   payload.WithArray("neq", std::move(neqJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
