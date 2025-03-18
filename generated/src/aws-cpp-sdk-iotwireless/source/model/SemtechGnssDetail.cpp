/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SemtechGnssDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SemtechGnssDetail::SemtechGnssDetail(JsonView jsonValue)
{
  *this = jsonValue;
}

SemtechGnssDetail& SemtechGnssDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Provider"))
  {
    m_provider = PositionSolverProviderMapper::GetPositionSolverProviderForName(jsonValue.GetString("Provider"));
    m_providerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = PositionSolverTypeMapper::GetPositionSolverTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PositionConfigurationStatusMapper::GetPositionConfigurationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Fec"))
  {
    m_fec = PositionConfigurationFecMapper::GetPositionConfigurationFecForName(jsonValue.GetString("Fec"));
    m_fecHasBeenSet = true;
  }
  return *this;
}

JsonValue SemtechGnssDetail::Jsonize() const
{
  JsonValue payload;

  if(m_providerHasBeenSet)
  {
   payload.WithString("Provider", PositionSolverProviderMapper::GetNameForPositionSolverProvider(m_provider));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", PositionSolverTypeMapper::GetNameForPositionSolverType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PositionConfigurationStatusMapper::GetNameForPositionConfigurationStatus(m_status));
  }

  if(m_fecHasBeenSet)
  {
   payload.WithString("Fec", PositionConfigurationFecMapper::GetNameForPositionConfigurationFec(m_fec));
  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
