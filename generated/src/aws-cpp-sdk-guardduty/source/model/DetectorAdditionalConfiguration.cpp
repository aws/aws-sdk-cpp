/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DetectorAdditionalConfiguration.h>
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

DetectorAdditionalConfiguration::DetectorAdditionalConfiguration() : 
    m_name(FeatureAdditionalConfiguration::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DetectorAdditionalConfiguration::DetectorAdditionalConfiguration(JsonView jsonValue) : 
    m_name(FeatureAdditionalConfiguration::NOT_SET),
    m_nameHasBeenSet(false),
    m_status(FeatureStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DetectorAdditionalConfiguration& DetectorAdditionalConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = FeatureAdditionalConfigurationMapper::GetFeatureAdditionalConfigurationForName(jsonValue.GetString("name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = FeatureStatusMapper::GetFeatureStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectorAdditionalConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", FeatureAdditionalConfigurationMapper::GetNameForFeatureAdditionalConfiguration(m_name));
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
