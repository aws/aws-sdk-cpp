/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/RxNormTrait.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComprehendMedical
{
namespace Model
{

RxNormTrait::RxNormTrait() : 
    m_name(RxNormTraitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

RxNormTrait::RxNormTrait(JsonView jsonValue) : 
    m_name(RxNormTraitName::NOT_SET),
    m_nameHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

RxNormTrait& RxNormTrait::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = RxNormTraitNameMapper::GetRxNormTraitNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue RxNormTrait::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", RxNormTraitNameMapper::GetNameForRxNormTraitName(m_name));
  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
