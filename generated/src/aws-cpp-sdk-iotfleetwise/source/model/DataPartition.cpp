/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/DataPartition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

DataPartition::DataPartition(JsonView jsonValue)
{
  *this = jsonValue;
}

DataPartition& DataPartition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageOptions"))
  {
    m_storageOptions = jsonValue.GetObject("storageOptions");
    m_storageOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uploadOptions"))
  {
    m_uploadOptions = jsonValue.GetObject("uploadOptions");
    m_uploadOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataPartition::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_storageOptionsHasBeenSet)
  {
   payload.WithObject("storageOptions", m_storageOptions.Jsonize());

  }

  if(m_uploadOptionsHasBeenSet)
  {
   payload.WithObject("uploadOptions", m_uploadOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
