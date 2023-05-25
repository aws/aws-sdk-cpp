/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dax/model/SSEDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DAX
{
namespace Model
{

SSEDescription::SSEDescription() : 
    m_status(SSEStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

SSEDescription::SSEDescription(JsonView jsonValue) : 
    m_status(SSEStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

SSEDescription& SSEDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SSEStatusMapper::GetSSEStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue SSEDescription::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SSEStatusMapper::GetNameForSSEStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace DAX
} // namespace Aws
