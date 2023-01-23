/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatastorePartition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatastorePartition::DatastorePartition() : 
    m_attributePartitionHasBeenSet(false),
    m_timestampPartitionHasBeenSet(false)
{
}

DatastorePartition::DatastorePartition(JsonView jsonValue) : 
    m_attributePartitionHasBeenSet(false),
    m_timestampPartitionHasBeenSet(false)
{
  *this = jsonValue;
}

DatastorePartition& DatastorePartition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributePartition"))
  {
    m_attributePartition = jsonValue.GetObject("attributePartition");

    m_attributePartitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestampPartition"))
  {
    m_timestampPartition = jsonValue.GetObject("timestampPartition");

    m_timestampPartitionHasBeenSet = true;
  }

  return *this;
}

JsonValue DatastorePartition::Jsonize() const
{
  JsonValue payload;

  if(m_attributePartitionHasBeenSet)
  {
   payload.WithObject("attributePartition", m_attributePartition.Jsonize());

  }

  if(m_timestampPartitionHasBeenSet)
  {
   payload.WithObject("timestampPartition", m_timestampPartition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
