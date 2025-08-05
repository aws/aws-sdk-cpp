/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningCheckRule.h>
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

AutomatedReasoningCheckRule::AutomatedReasoningCheckRule(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningCheckRule& AutomatedReasoningCheckRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyVersionArn"))
  {
    m_policyVersionArn = jsonValue.GetString("policyVersionArn");
    m_policyVersionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningCheckRule::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_policyVersionArnHasBeenSet)
  {
   payload.WithString("policyVersionArn", m_policyVersionArn);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
