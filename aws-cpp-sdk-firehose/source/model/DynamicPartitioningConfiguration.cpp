/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DynamicPartitioningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

DynamicPartitioningConfiguration::DynamicPartitioningConfiguration() : 
    m_retryOptionsHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

DynamicPartitioningConfiguration::DynamicPartitioningConfiguration(JsonView jsonValue) : 
    m_retryOptionsHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
  *this = jsonValue;
}

DynamicPartitioningConfiguration& DynamicPartitioningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetryOptions"))
  {
    m_retryOptions = jsonValue.GetObject("RetryOptions");

    m_retryOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  return *this;
}

JsonValue DynamicPartitioningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_retryOptionsHasBeenSet)
  {
   payload.WithObject("RetryOptions", m_retryOptions.Jsonize());

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
