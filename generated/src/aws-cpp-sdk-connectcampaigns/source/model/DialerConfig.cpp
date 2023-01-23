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
    m_predictiveDialerConfigHasBeenSet(false),
    m_progressiveDialerConfigHasBeenSet(false)
{
}

DialerConfig::DialerConfig(JsonView jsonValue) : 
    m_predictiveDialerConfigHasBeenSet(false),
    m_progressiveDialerConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DialerConfig& DialerConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("predictiveDialerConfig"))
  {
    m_predictiveDialerConfig = jsonValue.GetObject("predictiveDialerConfig");

    m_predictiveDialerConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progressiveDialerConfig"))
  {
    m_progressiveDialerConfig = jsonValue.GetObject("progressiveDialerConfig");

    m_progressiveDialerConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DialerConfig::Jsonize() const
{
  JsonValue payload;

  if(m_predictiveDialerConfigHasBeenSet)
  {
   payload.WithObject("predictiveDialerConfig", m_predictiveDialerConfig.Jsonize());

  }

  if(m_progressiveDialerConfigHasBeenSet)
  {
   payload.WithObject("progressiveDialerConfig", m_progressiveDialerConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
