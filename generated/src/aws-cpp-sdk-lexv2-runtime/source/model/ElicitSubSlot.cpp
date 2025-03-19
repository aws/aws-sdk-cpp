/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/ElicitSubSlot.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexRuntimeV2
{
namespace Model
{

ElicitSubSlot::ElicitSubSlot(JsonView jsonValue)
{
  *this = jsonValue;
}

ElicitSubSlot& ElicitSubSlot::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("subSlotToElicit"))
  {
    m_subSlotToElicit = Aws::MakeShared<ElicitSubSlot>("ElicitSubSlot", jsonValue.GetObject("subSlotToElicit"));
    m_subSlotToElicitHasBeenSet = true;
  }
  return *this;
}

JsonValue ElicitSubSlot::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_subSlotToElicitHasBeenSet)
  {
   payload.WithObject("subSlotToElicit", m_subSlotToElicit->Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexRuntimeV2
} // namespace Aws
