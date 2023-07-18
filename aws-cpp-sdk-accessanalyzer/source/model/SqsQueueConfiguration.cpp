/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/SqsQueueConfiguration.h>
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

SqsQueueConfiguration::SqsQueueConfiguration() : 
    m_queuePolicyHasBeenSet(false)
{
}

SqsQueueConfiguration::SqsQueueConfiguration(JsonView jsonValue) : 
    m_queuePolicyHasBeenSet(false)
{
  *this = jsonValue;
}

SqsQueueConfiguration& SqsQueueConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queuePolicy"))
  {
    m_queuePolicy = jsonValue.GetString("queuePolicy");

    m_queuePolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue SqsQueueConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_queuePolicyHasBeenSet)
  {
   payload.WithString("queuePolicy", m_queuePolicy);

  }

  return payload;
}

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
