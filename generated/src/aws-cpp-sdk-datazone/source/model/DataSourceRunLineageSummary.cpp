/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataSourceRunLineageSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

DataSourceRunLineageSummary::DataSourceRunLineageSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSourceRunLineageSummary& DataSourceRunLineageSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("importStatus"))
  {
    m_importStatus = LineageImportStatusMapper::GetLineageImportStatusForName(jsonValue.GetString("importStatus"));
    m_importStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceRunLineageSummary::Jsonize() const
{
  JsonValue payload;

  if(m_importStatusHasBeenSet)
  {
   payload.WithString("importStatus", LineageImportStatusMapper::GetNameForLineageImportStatus(m_importStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
