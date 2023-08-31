/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/DialerConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

DialerConfig::DialerConfig() : 
    m_progressiveDialerConfigHasBeenSet(false),
    m_predictiveDialerConfigHasBeenSet(false),
    m_agentlessDialerConfigHasBeenSet(false)
{
}

DialerConfig::DialerConfig(JsonView jsonValue) : 
    m_progressiveDialerConfigHasBeenSet(false),
    m_predictiveDialerConfigHasBeenSet(false),
    m_agentlessDialerConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DialerConfig& DialerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("progressiveDialerConfig"))
  {
    m_progressiveDialerConfig = jsonValue.GetObject("progressiveDialerConfig");

    m_progressiveDialerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("predictiveDialerConfig"))
  {
    m_predictiveDialerConfig = jsonValue.GetObject("predictiveDialerConfig");

    m_predictiveDialerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentlessDialerConfig"))
  {
    m_agentlessDialerConfig = jsonValue.GetObject("agentlessDialerConfig");

    m_agentlessDialerConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DialerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_progressiveDialerConfigHasBeenSet)
  {
   payload.WithObject("progressiveDialerConfig", m_progressiveDialerConfig.Jsonize());

  }

  if(m_predictiveDialerConfigHasBeenSet)
  {
   payload.WithObject("predictiveDialerConfig", m_predictiveDialerConfig.Jsonize());

  }

  if(m_agentlessDialerConfigHasBeenSet)
  {
   payload.WithObject("agentlessDialerConfig", m_agentlessDialerConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
