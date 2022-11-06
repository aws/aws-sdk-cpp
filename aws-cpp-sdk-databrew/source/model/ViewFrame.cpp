/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ViewFrame.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

ViewFrame::ViewFrame() : 
    m_startColumnIndex(0),
    m_startColumnIndexHasBeenSet(false),
    m_columnRange(0),
    m_columnRangeHasBeenSet(false),
    m_hiddenColumnsHasBeenSet(false),
    m_startRowIndex(0),
    m_startRowIndexHasBeenSet(false),
    m_rowRange(0),
    m_rowRangeHasBeenSet(false),
    m_analytics(AnalyticsMode::NOT_SET),
    m_analyticsHasBeenSet(false)
{
}

ViewFrame::ViewFrame(JsonView jsonValue) : 
    m_startColumnIndex(0),
    m_startColumnIndexHasBeenSet(false),
    m_columnRange(0),
    m_columnRangeHasBeenSet(false),
    m_hiddenColumnsHasBeenSet(false),
    m_startRowIndex(0),
    m_startRowIndexHasBeenSet(false),
    m_rowRange(0),
    m_rowRangeHasBeenSet(false),
    m_analytics(AnalyticsMode::NOT_SET),
    m_analyticsHasBeenSet(false)
{
  *this = jsonValue;
}

ViewFrame& ViewFrame::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StartColumnIndex"))
  {
    m_startColumnIndex = jsonValue.GetInteger("StartColumnIndex");

    m_startColumnIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColumnRange"))
  {
    m_columnRange = jsonValue.GetInteger("ColumnRange");

    m_columnRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HiddenColumns"))
  {
    Aws::Utils::Array<JsonView> hiddenColumnsJsonList = jsonValue.GetArray("HiddenColumns");
    for(unsigned hiddenColumnsIndex = 0; hiddenColumnsIndex < hiddenColumnsJsonList.GetLength(); ++hiddenColumnsIndex)
    {
      m_hiddenColumns.push_back(hiddenColumnsJsonList[hiddenColumnsIndex].AsString());
    }
    m_hiddenColumnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartRowIndex"))
  {
    m_startRowIndex = jsonValue.GetInteger("StartRowIndex");

    m_startRowIndexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowRange"))
  {
    m_rowRange = jsonValue.GetInteger("RowRange");

    m_rowRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Analytics"))
  {
    m_analytics = AnalyticsModeMapper::GetAnalyticsModeForName(jsonValue.GetString("Analytics"));

    m_analyticsHasBeenSet = true;
  }

  return *this;
}

JsonValue ViewFrame::Jsonize() const
{
  JsonValue payload;

  if(m_startColumnIndexHasBeenSet)
  {
   payload.WithInteger("StartColumnIndex", m_startColumnIndex);

  }

  if(m_columnRangeHasBeenSet)
  {
   payload.WithInteger("ColumnRange", m_columnRange);

  }

  if(m_hiddenColumnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hiddenColumnsJsonList(m_hiddenColumns.size());
   for(unsigned hiddenColumnsIndex = 0; hiddenColumnsIndex < hiddenColumnsJsonList.GetLength(); ++hiddenColumnsIndex)
   {
     hiddenColumnsJsonList[hiddenColumnsIndex].AsString(m_hiddenColumns[hiddenColumnsIndex]);
   }
   payload.WithArray("HiddenColumns", std::move(hiddenColumnsJsonList));

  }

  if(m_startRowIndexHasBeenSet)
  {
   payload.WithInteger("StartRowIndex", m_startRowIndex);

  }

  if(m_rowRangeHasBeenSet)
  {
   payload.WithInteger("RowRange", m_rowRange);

  }

  if(m_analyticsHasBeenSet)
  {
   payload.WithString("Analytics", AnalyticsModeMapper::GetNameForAnalyticsMode(m_analytics));
  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
