/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/AdditionalInstanceConfiguration.h>
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

AdditionalInstanceConfiguration::AdditionalInstanceConfiguration() : 
    m_systemsManagerAgentHasBeenSet(false),
    m_userDataOverrideHasBeenSet(false)
{
}

AdditionalInstanceConfiguration::AdditionalInstanceConfiguration(JsonView jsonValue) : 
    m_systemsManagerAgentHasBeenSet(false),
    m_userDataOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

AdditionalInstanceConfiguration& AdditionalInstanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("systemsManagerAgent"))
  {
    m_systemsManagerAgent = jsonValue.GetObject("systemsManagerAgent");

    m_systemsManagerAgentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userDataOverride"))
  {
    m_userDataOverride = jsonValue.GetString("userDataOverride");

    m_userDataOverrideHasBeenSet = true;
  }

  return *this;
}

JsonValue AdditionalInstanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_systemsManagerAgentHasBeenSet)
  {
   payload.WithObject("systemsManagerAgent", m_systemsManagerAgent.Jsonize());

  }

  if(m_userDataOverrideHasBeenSet)
  {
   payload.WithString("userDataOverride", m_userDataOverride);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
