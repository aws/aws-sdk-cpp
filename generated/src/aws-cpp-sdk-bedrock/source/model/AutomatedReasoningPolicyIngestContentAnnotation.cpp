/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyIngestContentAnnotation.h>
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

AutomatedReasoningPolicyIngestContentAnnotation::AutomatedReasoningPolicyIngestContentAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyIngestContentAnnotation& AutomatedReasoningPolicyIngestContentAnnotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyIngestContentAnnotation::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
