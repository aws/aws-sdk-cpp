/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetContentVersionValue.h>
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

DatasetContentVersionValue::DatasetContentVersionValue() : 
    m_datasetNameHasBeenSet(false)
{
}

DatasetContentVersionValue::DatasetContentVersionValue(JsonView jsonValue) : 
    m_datasetNameHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetContentVersionValue& DatasetContentVersionValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasetName"))
  {
    m_datasetName = jsonValue.GetString("datasetName");

    m_datasetNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetContentVersionValue::Jsonize() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("datasetName", m_datasetName);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
