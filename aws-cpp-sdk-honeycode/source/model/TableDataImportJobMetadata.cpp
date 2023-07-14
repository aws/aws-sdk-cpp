/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/TableDataImportJobMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

TableDataImportJobMetadata::TableDataImportJobMetadata() : 
    m_submitterHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_importOptionsHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
}

TableDataImportJobMetadata::TableDataImportJobMetadata(JsonView jsonValue) : 
    m_submitterHasBeenSet(false),
    m_submitTimeHasBeenSet(false),
    m_importOptionsHasBeenSet(false),
    m_dataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

TableDataImportJobMetadata& TableDataImportJobMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("submitter"))
  {
    m_submitter = jsonValue.GetObject("submitter");

    m_submitterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("submitTime"))
  {
    m_submitTime = jsonValue.GetDouble("submitTime");

    m_submitTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("importOptions"))
  {
    m_importOptions = jsonValue.GetObject("importOptions");

    m_importOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = jsonValue.GetObject("dataSource");

    m_dataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue TableDataImportJobMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_submitterHasBeenSet)
  {
   payload.WithObject("submitter", m_submitter.Jsonize());

  }

  if(m_submitTimeHasBeenSet)
  {
   payload.WithDouble("submitTime", m_submitTime.SecondsWithMSPrecision());
  }

  if(m_importOptionsHasBeenSet)
  {
   payload.WithObject("importOptions", m_importOptions.Jsonize());

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("dataSource", m_dataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
