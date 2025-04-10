/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DataSetExportItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

DataSetExportItem::DataSetExportItem(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSetExportItem& DataSetExportItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("datasetName"))
  {
    m_datasetName = jsonValue.GetString("datasetName");
    m_datasetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("externalLocation"))
  {
    m_externalLocation = jsonValue.GetObject("externalLocation");
    m_externalLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSetExportItem::Jsonize() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("datasetName", m_datasetName);

  }

  if(m_externalLocationHasBeenSet)
  {
   payload.WithObject("externalLocation", m_externalLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
