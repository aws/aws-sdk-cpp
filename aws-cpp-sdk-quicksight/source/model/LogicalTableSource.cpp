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
    m_physicalTableIdHasBeenSet(false)
{
}

LogicalTableSource::LogicalTableSource(JsonView jsonValue) : 
    m_joinInstructionHasBeenSet(false),
    m_physicalTableIdHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
