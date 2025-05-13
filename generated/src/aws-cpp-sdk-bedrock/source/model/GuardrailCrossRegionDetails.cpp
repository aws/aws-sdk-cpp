/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailCrossRegionDetails.h>
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

GuardrailCrossRegionDetails::GuardrailCrossRegionDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailCrossRegionDetails& GuardrailCrossRegionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrailProfileId"))
  {
    m_guardrailProfileId = jsonValue.GetString("guardrailProfileId");
    m_guardrailProfileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailProfileArn"))
  {
    m_guardrailProfileArn = jsonValue.GetString("guardrailProfileArn");
    m_guardrailProfileArnHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailCrossRegionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailProfileIdHasBeenSet)
  {
   payload.WithString("guardrailProfileId", m_guardrailProfileId);

  }

  if(m_guardrailProfileArnHasBeenSet)
  {
   payload.WithString("guardrailProfileArn", m_guardrailProfileArn);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
