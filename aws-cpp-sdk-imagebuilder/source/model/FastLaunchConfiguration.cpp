/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/FastLaunchConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

FastLaunchConfiguration::FastLaunchConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_snapshotConfigurationHasBeenSet(false),
    m_maxParallelLaunches(0),
    m_maxParallelLaunchesHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

FastLaunchConfiguration::FastLaunchConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_snapshotConfigurationHasBeenSet(false),
    m_maxParallelLaunches(0),
    m_maxParallelLaunchesHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

FastLaunchConfiguration& FastLaunchConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("snapshotConfiguration"))
  {
    m_snapshotConfiguration = jsonValue.GetObject("snapshotConfiguration");

    m_snapshotConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("maxParallelLaunches"))
  {
    m_maxParallelLaunches = jsonValue.GetInteger("maxParallelLaunches");

    m_maxParallelLaunchesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchTemplate"))
  {
    m_launchTemplate = jsonValue.GetObject("launchTemplate");

    m_launchTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue FastLaunchConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_snapshotConfigurationHasBeenSet)
  {
   payload.WithObject("snapshotConfiguration", m_snapshotConfiguration.Jsonize());

  }

  if(m_maxParallelLaunchesHasBeenSet)
  {
   payload.WithInteger("maxParallelLaunches", m_maxParallelLaunches);

  }

  if(m_launchTemplateHasBeenSet)
  {
   payload.WithObject("launchTemplate", m_launchTemplate.Jsonize());

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
