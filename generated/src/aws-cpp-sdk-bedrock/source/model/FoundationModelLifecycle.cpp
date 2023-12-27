/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/FoundationModelLifecycle.h>
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

FoundationModelLifecycle::FoundationModelLifecycle() : 
    m_status(FoundationModelLifecycleStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

FoundationModelLifecycle::FoundationModelLifecycle(JsonView jsonValue) : 
    m_status(FoundationModelLifecycleStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

FoundationModelLifecycle& FoundationModelLifecycle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = FoundationModelLifecycleStatusMapper::GetFoundationModelLifecycleStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue FoundationModelLifecycle::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FoundationModelLifecycleStatusMapper::GetNameForFoundationModelLifecycleStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
