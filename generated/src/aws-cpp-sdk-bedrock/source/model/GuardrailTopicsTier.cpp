/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailTopicsTier.h>
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

GuardrailTopicsTier::GuardrailTopicsTier(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailTopicsTier& GuardrailTopicsTier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("tierName"))
  {
    m_tierName = GuardrailTopicsTierNameMapper::GetGuardrailTopicsTierNameForName(jsonValue.GetString("tierName"));
    m_tierNameHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailTopicsTier::Jsonize() const
{
  JsonValue payload;

  if(m_tierNameHasBeenSet)
  {
   payload.WithString("tierName", GuardrailTopicsTierNameMapper::GetNameForGuardrailTopicsTierName(m_tierName));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
