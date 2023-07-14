/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/RackPhysicalProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Outposts
{
namespace Model
{

RackPhysicalProperties::RackPhysicalProperties() : 
    m_powerDrawKva(PowerDrawKva::NOT_SET),
    m_powerDrawKvaHasBeenSet(false),
    m_powerPhase(PowerPhase::NOT_SET),
    m_powerPhaseHasBeenSet(false),
    m_powerConnector(PowerConnector::NOT_SET),
    m_powerConnectorHasBeenSet(false),
    m_powerFeedDrop(PowerFeedDrop::NOT_SET),
    m_powerFeedDropHasBeenSet(false),
    m_uplinkGbps(UplinkGbps::NOT_SET),
    m_uplinkGbpsHasBeenSet(false),
    m_uplinkCount(UplinkCount::NOT_SET),
    m_uplinkCountHasBeenSet(false),
    m_fiberOpticCableType(FiberOpticCableType::NOT_SET),
    m_fiberOpticCableTypeHasBeenSet(false),
    m_opticalStandard(OpticalStandard::NOT_SET),
    m_opticalStandardHasBeenSet(false),
    m_maximumSupportedWeightLbs(MaximumSupportedWeightLbs::NOT_SET),
    m_maximumSupportedWeightLbsHasBeenSet(false)
{
}

RackPhysicalProperties::RackPhysicalProperties(JsonView jsonValue) : 
    m_powerDrawKva(PowerDrawKva::NOT_SET),
    m_powerDrawKvaHasBeenSet(false),
    m_powerPhase(PowerPhase::NOT_SET),
    m_powerPhaseHasBeenSet(false),
    m_powerConnector(PowerConnector::NOT_SET),
    m_powerConnectorHasBeenSet(false),
    m_powerFeedDrop(PowerFeedDrop::NOT_SET),
    m_powerFeedDropHasBeenSet(false),
    m_uplinkGbps(UplinkGbps::NOT_SET),
    m_uplinkGbpsHasBeenSet(false),
    m_uplinkCount(UplinkCount::NOT_SET),
    m_uplinkCountHasBeenSet(false),
    m_fiberOpticCableType(FiberOpticCableType::NOT_SET),
    m_fiberOpticCableTypeHasBeenSet(false),
    m_opticalStandard(OpticalStandard::NOT_SET),
    m_opticalStandardHasBeenSet(false),
    m_maximumSupportedWeightLbs(MaximumSupportedWeightLbs::NOT_SET),
    m_maximumSupportedWeightLbsHasBeenSet(false)
{
  *this = jsonValue;
}

RackPhysicalProperties& RackPhysicalProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PowerDrawKva"))
  {
    m_powerDrawKva = PowerDrawKvaMapper::GetPowerDrawKvaForName(jsonValue.GetString("PowerDrawKva"));

    m_powerDrawKvaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PowerPhase"))
  {
    m_powerPhase = PowerPhaseMapper::GetPowerPhaseForName(jsonValue.GetString("PowerPhase"));

    m_powerPhaseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PowerConnector"))
  {
    m_powerConnector = PowerConnectorMapper::GetPowerConnectorForName(jsonValue.GetString("PowerConnector"));

    m_powerConnectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PowerFeedDrop"))
  {
    m_powerFeedDrop = PowerFeedDropMapper::GetPowerFeedDropForName(jsonValue.GetString("PowerFeedDrop"));

    m_powerFeedDropHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UplinkGbps"))
  {
    m_uplinkGbps = UplinkGbpsMapper::GetUplinkGbpsForName(jsonValue.GetString("UplinkGbps"));

    m_uplinkGbpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UplinkCount"))
  {
    m_uplinkCount = UplinkCountMapper::GetUplinkCountForName(jsonValue.GetString("UplinkCount"));

    m_uplinkCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FiberOpticCableType"))
  {
    m_fiberOpticCableType = FiberOpticCableTypeMapper::GetFiberOpticCableTypeForName(jsonValue.GetString("FiberOpticCableType"));

    m_fiberOpticCableTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OpticalStandard"))
  {
    m_opticalStandard = OpticalStandardMapper::GetOpticalStandardForName(jsonValue.GetString("OpticalStandard"));

    m_opticalStandardHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaximumSupportedWeightLbs"))
  {
    m_maximumSupportedWeightLbs = MaximumSupportedWeightLbsMapper::GetMaximumSupportedWeightLbsForName(jsonValue.GetString("MaximumSupportedWeightLbs"));

    m_maximumSupportedWeightLbsHasBeenSet = true;
  }

  return *this;
}

JsonValue RackPhysicalProperties::Jsonize() const
{
  JsonValue payload;

  if(m_powerDrawKvaHasBeenSet)
  {
   payload.WithString("PowerDrawKva", PowerDrawKvaMapper::GetNameForPowerDrawKva(m_powerDrawKva));
  }

  if(m_powerPhaseHasBeenSet)
  {
   payload.WithString("PowerPhase", PowerPhaseMapper::GetNameForPowerPhase(m_powerPhase));
  }

  if(m_powerConnectorHasBeenSet)
  {
   payload.WithString("PowerConnector", PowerConnectorMapper::GetNameForPowerConnector(m_powerConnector));
  }

  if(m_powerFeedDropHasBeenSet)
  {
   payload.WithString("PowerFeedDrop", PowerFeedDropMapper::GetNameForPowerFeedDrop(m_powerFeedDrop));
  }

  if(m_uplinkGbpsHasBeenSet)
  {
   payload.WithString("UplinkGbps", UplinkGbpsMapper::GetNameForUplinkGbps(m_uplinkGbps));
  }

  if(m_uplinkCountHasBeenSet)
  {
   payload.WithString("UplinkCount", UplinkCountMapper::GetNameForUplinkCount(m_uplinkCount));
  }

  if(m_fiberOpticCableTypeHasBeenSet)
  {
   payload.WithString("FiberOpticCableType", FiberOpticCableTypeMapper::GetNameForFiberOpticCableType(m_fiberOpticCableType));
  }

  if(m_opticalStandardHasBeenSet)
  {
   payload.WithString("OpticalStandard", OpticalStandardMapper::GetNameForOpticalStandard(m_opticalStandard));
  }

  if(m_maximumSupportedWeightLbsHasBeenSet)
  {
   payload.WithString("MaximumSupportedWeightLbs", MaximumSupportedWeightLbsMapper::GetNameForMaximumSupportedWeightLbs(m_maximumSupportedWeightLbs));
  }

  return payload;
}

} // namespace Model
} // namespace Outposts
} // namespace Aws
