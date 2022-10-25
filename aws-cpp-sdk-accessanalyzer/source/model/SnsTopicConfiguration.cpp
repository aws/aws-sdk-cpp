/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/SnsTopicConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AccessAnalyzer
{
namespace Model
{

SnsTopicConfiguration::SnsTopicConfiguration() : 
    m_topicPolicyHasBeenSet(false)
{
}

SnsTopicConfiguration::SnsTopicConfiguration(JsonView jsonValue) : 
    m_topicPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

SnsTopicConfiguration& SnsTopicConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicPolicy"))
  {
    m_topicPolicy = jsonValue.GetString("topicPolicy");

    m_topicPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue SnsTopicConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_topicPolicyHasBeenSet)
  {
   payload.WithString("topicPolicy", m_topicPolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
