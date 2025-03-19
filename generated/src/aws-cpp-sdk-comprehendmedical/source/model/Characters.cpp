/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehendmedical/model/Characters.h>
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

Characters::Characters(JsonView jsonValue)
{
  *this = jsonValue;
}

Characters& Characters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OriginalTextCharacters"))
  {
    m_originalTextCharacters = jsonValue.GetInteger("OriginalTextCharacters");
    m_originalTextCharactersHasBeenSet = true;
  }
  return *this;
}

JsonValue Characters::Jsonize() const
{
  JsonValue payload;

  if(m_originalTextCharactersHasBeenSet)
  {
   payload.WithInteger("OriginalTextCharacters", m_originalTextCharacters);

  }

  return payload;
}

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
