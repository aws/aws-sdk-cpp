/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
