/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BuiltInSlotTypeSummary.h>
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

BuiltInSlotTypeSummary::BuiltInSlotTypeSummary() : 
    m_slotTypeSignatureHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

BuiltInSlotTypeSummary::BuiltInSlotTypeSummary(JsonView jsonValue) : 
    m_slotTypeSignatureHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

BuiltInSlotTypeSummary& BuiltInSlotTypeSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("slotTypeSignature"))
  {
    m_slotTypeSignature = jsonValue.GetString("slotTypeSignature");

    m_slotTypeSignatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue BuiltInSlotTypeSummary::Jsonize() const
{
  JsonValue payload;

  if(m_slotTypeSignatureHasBeenSet)
  {
   payload.WithString("slotTypeSignature", m_slotTypeSignature);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
