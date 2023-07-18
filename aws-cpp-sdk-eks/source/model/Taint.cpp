/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Taint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Taint::Taint() : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_effect(TaintEffect::NOT_SET),
    m_effectHasBeenSet(false)
{
}

Taint::Taint(JsonView jsonValue) : 
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_effect(TaintEffect::NOT_SET),
    m_effectHasBeenSet(false)
{
  *this = jsonValue;
}

Taint& Taint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetString("value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("effect"))
  {
    m_effect = TaintEffectMapper::GetTaintEffectForName(jsonValue.GetString("effect"));

    m_effectHasBeenSet = true;
  }

  return *this;
}

JsonValue Taint::Jsonize() const
{
  JsonValue payload;

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_valueHasBeenSet)
  {
   payload.WithString("value", m_value);

  }

  if(m_effectHasBeenSet)
  {
   payload.WithString("effect", TaintEffectMapper::GetNameForTaintEffect(m_effect));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
