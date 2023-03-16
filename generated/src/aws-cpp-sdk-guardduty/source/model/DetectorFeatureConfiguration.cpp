/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DetectorFeatureConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

DetectorFeatureConfiguration::DetectorFeatureConfiguration() : 
    m_name(DetectorFeature::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DetectorFeatureConfiguration::DetectorFeatureConfiguration(JsonView jsonValue) : 
    m_name(DetectorFeature::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DetectorFeatureConfiguration& DetectorFeatureConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = DetectorFeatureMapper::GetDetectorFeatureForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectorFeatureConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", DetectorFeatureMapper::GetNameForDetectorFeature(m_name));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FeatureStatusMapper::GetNameForFeatureStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
