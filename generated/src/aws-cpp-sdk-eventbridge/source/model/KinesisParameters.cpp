/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/KinesisParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

KinesisParameters::KinesisParameters() : 
    m_partitionKeyPathHasBeenSet(false)
{
}

KinesisParameters::KinesisParameters(JsonView jsonValue) : 
    m_partitionKeyPathHasBeenSet(false)
{
  *this = jsonValue;
}

KinesisParameters& KinesisParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PartitionKeyPath"))
  {
    m_partitionKeyPath = jsonValue.GetString("PartitionKeyPath");

    m_partitionKeyPathHasBeenSet = true;
  }

  return *this;
}

JsonValue KinesisParameters::Jsonize() const
{
  JsonValue payload;

  if(m_partitionKeyPathHasBeenSet)
  {
   payload.WithString("PartitionKeyPath", m_partitionKeyPath);

  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
