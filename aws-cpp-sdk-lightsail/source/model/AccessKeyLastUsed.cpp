/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AccessKeyLastUsed.h>
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

AccessKeyLastUsed::AccessKeyLastUsed() : 
    m_lastUsedDateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
}

AccessKeyLastUsed::AccessKeyLastUsed(JsonView jsonValue) : 
    m_lastUsedDateHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_serviceNameHasBeenSet(false)
{
  *this = jsonValue;
}

AccessKeyLastUsed& AccessKeyLastUsed::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("lastUsedDate"))
  {
    m_lastUsedDate = jsonValue.GetDouble("lastUsedDate");

    m_lastUsedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");

    m_serviceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessKeyLastUsed::Jsonize() const
{
  JsonValue payload;

  if(m_lastUsedDateHasBeenSet)
  {
   payload.WithDouble("lastUsedDate", m_lastUsedDate.SecondsWithMSPrecision());
  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
