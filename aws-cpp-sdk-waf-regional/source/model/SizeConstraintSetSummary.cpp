/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf-regional/model/SizeConstraintSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

SizeConstraintSetSummary::SizeConstraintSetSummary() : 
    m_sizeConstraintSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

SizeConstraintSetSummary::SizeConstraintSetSummary(JsonView jsonValue) : 
    m_sizeConstraintSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

SizeConstraintSetSummary& SizeConstraintSetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SizeConstraintSetId"))
  {
    m_sizeConstraintSetId = jsonValue.GetString("SizeConstraintSetId");

    m_sizeConstraintSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue SizeConstraintSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sizeConstraintSetIdHasBeenSet)
  {
   payload.WithString("SizeConstraintSetId", m_sizeConstraintSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
