/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/VersioningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

VersioningConfiguration::VersioningConfiguration() : 
    m_unlimited(false),
    m_unlimitedHasBeenSet(false),
    m_maxVersions(0),
    m_maxVersionsHasBeenSet(false)
{
}

VersioningConfiguration::VersioningConfiguration(JsonView jsonValue) : 
    m_unlimited(false),
    m_unlimitedHasBeenSet(false),
    m_maxVersions(0),
    m_maxVersionsHasBeenSet(false)
{
  *this = jsonValue;
}

VersioningConfiguration& VersioningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unlimited"))
  {
    m_unlimited = jsonValue.GetBool("unlimited");

    m_unlimitedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxVersions"))
  {
    m_maxVersions = jsonValue.GetInteger("maxVersions");

    m_maxVersionsHasBeenSet = true;
  }

  return *this;
}

JsonValue VersioningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_unlimitedHasBeenSet)
  {
   payload.WithBool("unlimited", m_unlimited);

  }

  if(m_maxVersionsHasBeenSet)
  {
   payload.WithInteger("maxVersions", m_maxVersions);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
