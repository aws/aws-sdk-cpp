/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/AlertManagerDefinitionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

AlertManagerDefinitionDescription::AlertManagerDefinitionDescription() : 
    m_createdAtHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

AlertManagerDefinitionDescription::AlertManagerDefinitionDescription(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

AlertManagerDefinitionDescription& AlertManagerDefinitionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("data"))
  {
    m_data = HashingUtils::Base64Decode(jsonValue.GetString("data"));
    m_dataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue AlertManagerDefinitionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_dataHasBeenSet)
  {
   payload.WithString("data", HashingUtils::Base64Encode(m_data));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
