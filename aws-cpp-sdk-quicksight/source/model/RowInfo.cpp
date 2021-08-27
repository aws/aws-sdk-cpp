/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RowInfo.h>
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

RowInfo::RowInfo() : 
    m_rowsIngested(0),
    m_rowsIngestedHasBeenSet(false),
    m_rowsDropped(0),
    m_rowsDroppedHasBeenSet(false)
{
}

RowInfo::RowInfo(JsonView jsonValue) : 
    m_rowsIngested(0),
    m_rowsIngestedHasBeenSet(false),
    m_rowsDropped(0),
    m_rowsDroppedHasBeenSet(false)
{
  *this = jsonValue;
}

RowInfo& RowInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RowsIngested"))
  {
    m_rowsIngested = jsonValue.GetInt64("RowsIngested");

    m_rowsIngestedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowsDropped"))
  {
    m_rowsDropped = jsonValue.GetInt64("RowsDropped");

    m_rowsDroppedHasBeenSet = true;
  }

  return *this;
}

JsonValue RowInfo::Jsonize() const
{
  JsonValue payload;

  if(m_rowsIngestedHasBeenSet)
  {
   payload.WithInt64("RowsIngested", m_rowsIngested);

  }

  if(m_rowsDroppedHasBeenSet)
  {
   payload.WithInt64("RowsDropped", m_rowsDropped);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
