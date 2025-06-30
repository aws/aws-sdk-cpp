/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/DocumentCharLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

DocumentCharLocation::DocumentCharLocation(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentCharLocation& DocumentCharLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("documentIndex"))
  {
    m_documentIndex = jsonValue.GetInteger("documentIndex");
    m_documentIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetInteger("start");
    m_startHasBeenSet = true;
  }
  if(jsonValue.ValueExists("end"))
  {
    m_end = jsonValue.GetInteger("end");
    m_endHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentCharLocation::Jsonize() const
{
  JsonValue payload;

  if(m_documentIndexHasBeenSet)
  {
   payload.WithInteger("documentIndex", m_documentIndex);

  }

  if(m_startHasBeenSet)
  {
   payload.WithInteger("start", m_start);

  }

  if(m_endHasBeenSet)
  {
   payload.WithInteger("end", m_end);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
