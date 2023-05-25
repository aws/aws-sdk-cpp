/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DestinationInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

DestinationInfo::DestinationInfo() : 
    m_idHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
}

DestinationInfo::DestinationInfo(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationInfo& DestinationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");

    m_serviceHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
