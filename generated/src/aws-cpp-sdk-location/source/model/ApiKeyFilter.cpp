/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ApiKeyFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

ApiKeyFilter::ApiKeyFilter() : 
    m_keyStatus(Status::NOT_SET),
    m_keyStatusHasBeenSet(false)
{
}

ApiKeyFilter::ApiKeyFilter(JsonView jsonValue) : 
    m_keyStatus(Status::NOT_SET),
    m_keyStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ApiKeyFilter& ApiKeyFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("KeyStatus"))
  {
    m_keyStatus = StatusMapper::GetStatusForName(jsonValue.GetString("KeyStatus"));

    m_keyStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ApiKeyFilter::Jsonize() const
{
  JsonValue payload;

  if(m_keyStatusHasBeenSet)
  {
   payload.WithString("KeyStatus", StatusMapper::GetNameForStatus(m_keyStatus));
  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
