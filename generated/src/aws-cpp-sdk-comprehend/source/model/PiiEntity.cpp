/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PiiEntity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

PiiEntity::PiiEntity(JsonView jsonValue)
{
  *this = jsonValue;
}

PiiEntity& PiiEntity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");
    m_scoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = PiiEntityTypeMapper::GetPiiEntityTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BeginOffset"))
  {
    m_beginOffset = jsonValue.GetInteger("BeginOffset");
    m_beginOffsetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndOffset"))
  {
    m_endOffset = jsonValue.GetInteger("EndOffset");
    m_endOffsetHasBeenSet = true;
  }
  return *this;
}

JsonValue PiiEntity::Jsonize() const
{
  JsonValue payload;

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PiiEntityTypeMapper::GetNameForPiiEntityType(m_type));
  }

  if(m_beginOffsetHasBeenSet)
  {
   payload.WithInteger("BeginOffset", m_beginOffset);

  }

  if(m_endOffsetHasBeenSet)
  {
   payload.WithInteger("EndOffset", m_endOffset);

  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
