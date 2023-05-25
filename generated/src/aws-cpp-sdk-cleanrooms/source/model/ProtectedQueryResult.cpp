/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQueryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQueryResult::ProtectedQueryResult() : 
    m_outputHasBeenSet(false)
{
}

ProtectedQueryResult::ProtectedQueryResult(JsonView jsonValue) : 
    m_outputHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedQueryResult& ProtectedQueryResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("output"))
  {
    m_output = jsonValue.GetObject("output");

    m_outputHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedQueryResult::Jsonize() const
{
  JsonValue payload;

  if(m_outputHasBeenSet)
  {
   payload.WithObject("output", m_output.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
