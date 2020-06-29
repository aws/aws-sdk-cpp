/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatastoreStatistics.h>
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

DatastoreStatistics::DatastoreStatistics() : 
    m_sizeHasBeenSet(false)
{
}

DatastoreStatistics::DatastoreStatistics(JsonView jsonValue) : 
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

DatastoreStatistics& DatastoreStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("size"))
  {
    m_size = jsonValue.GetObject("size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatastoreStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_sizeHasBeenSet)
  {
   payload.WithObject("size", m_size.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
