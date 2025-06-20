/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailContentFiltersTier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

GuardrailContentFiltersTier::GuardrailContentFiltersTier(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailContentFiltersTier& GuardrailContentFiltersTier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tierName"))
  {
    m_tierName = GuardrailContentFiltersTierNameMapper::GetGuardrailContentFiltersTierNameForName(jsonValue.GetString("tierName"));
    m_tierNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailContentFiltersTier::Jsonize() const
{
  JsonValue payload;

  if(m_tierNameHasBeenSet)
  {
   payload.WithString("tierName", GuardrailContentFiltersTierNameMapper::GetNameForGuardrailContentFiltersTierName(m_tierName));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
