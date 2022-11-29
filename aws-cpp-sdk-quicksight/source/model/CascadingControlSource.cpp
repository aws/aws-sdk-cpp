/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/CascadingControlSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

CascadingControlSource::CascadingControlSource() : 
    m_sourceSheetControlIdHasBeenSet(false),
    m_columnToMatchHasBeenSet(false)
{
}

CascadingControlSource::CascadingControlSource(JsonView jsonValue) : 
    m_sourceSheetControlIdHasBeenSet(false),
    m_columnToMatchHasBeenSet(false)
{
  *this = jsonValue;
}

CascadingControlSource& CascadingControlSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceSheetControlId"))
  {
    m_sourceSheetControlId = jsonValue.GetString("SourceSheetControlId");

    m_sourceSheetControlIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnToMatch"))
  {
    m_columnToMatch = jsonValue.GetObject("ColumnToMatch");

    m_columnToMatchHasBeenSet = true;
  }

  return *this;
}

JsonValue CascadingControlSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceSheetControlIdHasBeenSet)
  {
   payload.WithString("SourceSheetControlId", m_sourceSheetControlId);

  }

  if(m_columnToMatchHasBeenSet)
  {
   payload.WithObject("ColumnToMatch", m_columnToMatch.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
