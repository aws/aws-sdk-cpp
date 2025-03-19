/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ComputeConfiguration.h>
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

ComputeConfiguration::ComputeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeConfiguration& ComputeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("worker"))
  {
    m_worker = jsonValue.GetObject("worker");
    m_workerHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_workerHasBeenSet)
  {
   payload.WithObject("worker", m_worker.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
