/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/DataSetImportItem.h>
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

DataSetImportItem::DataSetImportItem() : 
    m_dataSetHasBeenSet(false),
    m_externalLocationHasBeenSet(false)
{
}

DataSetImportItem::DataSetImportItem(JsonView jsonValue) : 
    m_dataSetHasBeenSet(false),
    m_externalLocationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetImportItem& DataSetImportItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSet"))
  {
    m_dataSet = jsonValue.GetObject("dataSet");

    m_dataSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalLocation"))
  {
    m_externalLocation = jsonValue.GetObject("externalLocation");

    m_externalLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetImportItem::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetHasBeenSet)
  {
   payload.WithObject("dataSet", m_dataSet.Jsonize());

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
