/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AttackVectorDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

AttackVectorDescription::AttackVectorDescription() : 
    m_vectorTypeHasBeenSet(false)
{
}

AttackVectorDescription::AttackVectorDescription(JsonView jsonValue) : 
    m_vectorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AttackVectorDescription& AttackVectorDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VectorType"))
  {
    m_vectorType = jsonValue.GetString("VectorType");

    m_vectorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AttackVectorDescription::Jsonize() const
{
  JsonValue payload;

  if(m_vectorTypeHasBeenSet)
  {
   payload.WithString("VectorType", m_vectorType);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
