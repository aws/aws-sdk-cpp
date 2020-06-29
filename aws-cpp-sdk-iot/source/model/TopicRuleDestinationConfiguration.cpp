/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/TopicRuleDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

TopicRuleDestinationConfiguration::TopicRuleDestinationConfiguration() : 
    m_httpUrlConfigurationHasBeenSet(false)
{
}

TopicRuleDestinationConfiguration::TopicRuleDestinationConfiguration(JsonView jsonValue) : 
    m_httpUrlConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TopicRuleDestinationConfiguration& TopicRuleDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpUrlConfiguration"))
  {
    m_httpUrlConfiguration = jsonValue.GetObject("httpUrlConfiguration");

    m_httpUrlConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TopicRuleDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_httpUrlConfigurationHasBeenSet)
  {
   payload.WithObject("httpUrlConfiguration", m_httpUrlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
