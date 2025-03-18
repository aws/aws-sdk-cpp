/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DTMFSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

DTMFSpecification::DTMFSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

DTMFSpecification& DTMFSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxLength"))
  {
    m_maxLength = jsonValue.GetInteger("maxLength");
    m_maxLengthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTimeoutMs"))
  {
    m_endTimeoutMs = jsonValue.GetInteger("endTimeoutMs");
    m_endTimeoutMsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deletionCharacter"))
  {
    m_deletionCharacter = jsonValue.GetString("deletionCharacter");
    m_deletionCharacterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endCharacter"))
  {
    m_endCharacter = jsonValue.GetString("endCharacter");
    m_endCharacterHasBeenSet = true;
  }
  return *this;
}

JsonValue DTMFSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_maxLengthHasBeenSet)
  {
   payload.WithInteger("maxLength", m_maxLength);

  }

  if(m_endTimeoutMsHasBeenSet)
  {
   payload.WithInteger("endTimeoutMs", m_endTimeoutMs);

  }

  if(m_deletionCharacterHasBeenSet)
  {
   payload.WithString("deletionCharacter", m_deletionCharacter);

  }

  if(m_endCharacterHasBeenSet)
  {
   payload.WithString("endCharacter", m_endCharacter);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
