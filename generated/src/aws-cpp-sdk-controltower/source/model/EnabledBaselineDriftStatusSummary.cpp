/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/EnabledBaselineDriftStatusSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlTower
{
namespace Model
{

EnabledBaselineDriftStatusSummary::EnabledBaselineDriftStatusSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

EnabledBaselineDriftStatusSummary& EnabledBaselineDriftStatusSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("types"))
  {
    m_types = jsonValue.GetObject("types");
    m_typesHasBeenSet = true;
  }
  return *this;
}

JsonValue EnabledBaselineDriftStatusSummary::Jsonize() const
{
  JsonValue payload;

  if(m_typesHasBeenSet)
  {
   payload.WithObject("types", m_types.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ControlTower
} // namespace Aws
