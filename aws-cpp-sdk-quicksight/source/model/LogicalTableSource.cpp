/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/LogicalTableSource.h>
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

LogicalTableSource::LogicalTableSource() : 
    m_joinInstructionHasBeenSet(false),
    m_physicalTableIdHasBeenSet(false),
    m_dataSetArnHasBeenSet(false)
{
}

LogicalTableSource::LogicalTableSource(JsonView jsonValue) : 
    m_joinInstructionHasBeenSet(false),
    m_physicalTableIdHasBeenSet(false),
    m_dataSetArnHasBeenSet(false)
{
  *this = jsonValue;
}

LogicalTableSource& LogicalTableSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JoinInstruction"))
  {
    m_joinInstruction = jsonValue.GetObject("JoinInstruction");

    m_joinInstructionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PhysicalTableId"))
  {
    m_physicalTableId = jsonValue.GetString("PhysicalTableId");

    m_physicalTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetArn"))
  {
    m_dataSetArn = jsonValue.GetString("DataSetArn");

    m_dataSetArnHasBeenSet = true;
  }

  return *this;
}

JsonValue LogicalTableSource::Jsonize() const
{
  JsonValue payload;

  if(m_joinInstructionHasBeenSet)
  {
   payload.WithObject("JoinInstruction", m_joinInstruction.Jsonize());

  }

  if(m_physicalTableIdHasBeenSet)
  {
   payload.WithString("PhysicalTableId", m_physicalTableId);

  }

  if(m_dataSetArnHasBeenSet)
  {
   payload.WithString("DataSetArn", m_dataSetArn);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
