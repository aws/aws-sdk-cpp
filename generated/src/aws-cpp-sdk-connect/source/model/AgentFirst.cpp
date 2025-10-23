/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AgentFirst.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AgentFirst::AgentFirst(JsonView jsonValue)
{
  *this = jsonValue;
}

AgentFirst& AgentFirst::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Preview"))
  {
    m_preview = jsonValue.GetObject("Preview");
    m_previewHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentFirst::Jsonize() const
{
  JsonValue payload;

  if(m_previewHasBeenSet)
  {
   payload.WithObject("Preview", m_preview.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
