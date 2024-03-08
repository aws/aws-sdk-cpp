/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/ExecutionReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

ExecutionReference::ExecutionReference() : 
    m_executionIdHasBeenSet(false),
    m_executionStatusHasBeenSet(false)
{
}

ExecutionReference::ExecutionReference(JsonView jsonValue) : 
    m_executionIdHasBeenSet(false),
    m_executionStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionReference& ExecutionReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExecutionId"))
  {
    m_executionId = jsonValue.GetString("ExecutionId");

    m_executionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionStatus"))
  {
    m_executionStatus = jsonValue.GetObject("ExecutionStatus");

    m_executionStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionReference::Jsonize() const
{
  JsonValue payload;

  if(m_executionIdHasBeenSet)
  {
   payload.WithString("ExecutionId", m_executionId);

  }

  if(m_executionStatusHasBeenSet)
  {
   payload.WithObject("ExecutionStatus", m_executionStatus.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
