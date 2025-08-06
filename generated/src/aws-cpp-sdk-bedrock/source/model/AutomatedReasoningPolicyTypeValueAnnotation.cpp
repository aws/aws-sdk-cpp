/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyTypeValueAnnotation.h>
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

AutomatedReasoningPolicyTypeValueAnnotation::AutomatedReasoningPolicyTypeValueAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyTypeValueAnnotation& AutomatedReasoningPolicyTypeValueAnnotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("addTypeValue"))
  {
    m_addTypeValue = jsonValue.GetObject("addTypeValue");
    m_addTypeValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTypeValue"))
  {
    m_updateTypeValue = jsonValue.GetObject("updateTypeValue");
    m_updateTypeValueHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deleteTypeValue"))
  {
    m_deleteTypeValue = jsonValue.GetObject("deleteTypeValue");
    m_deleteTypeValueHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyTypeValueAnnotation::Jsonize() const
{
  JsonValue payload;

  if(m_addTypeValueHasBeenSet)
  {
   payload.WithObject("addTypeValue", m_addTypeValue.Jsonize());

  }

  if(m_updateTypeValueHasBeenSet)
  {
   payload.WithObject("updateTypeValue", m_updateTypeValue.Jsonize());

  }

  if(m_deleteTypeValueHasBeenSet)
  {
   payload.WithObject("deleteTypeValue", m_deleteTypeValue.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
