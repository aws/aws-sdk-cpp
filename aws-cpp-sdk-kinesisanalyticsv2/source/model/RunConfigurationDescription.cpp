/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/RunConfigurationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

RunConfigurationDescription::RunConfigurationDescription() : 
    m_applicationRestoreConfigurationDescriptionHasBeenSet(false)
{
}

RunConfigurationDescription::RunConfigurationDescription(JsonView jsonValue) : 
    m_applicationRestoreConfigurationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

RunConfigurationDescription& RunConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationRestoreConfigurationDescription"))
  {
    m_applicationRestoreConfigurationDescription = jsonValue.GetObject("ApplicationRestoreConfigurationDescription");

    m_applicationRestoreConfigurationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue RunConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_applicationRestoreConfigurationDescriptionHasBeenSet)
  {
   payload.WithObject("ApplicationRestoreConfigurationDescription", m_applicationRestoreConfigurationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
