/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
