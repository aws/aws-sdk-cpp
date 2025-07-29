/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/LatestServiceJobAttempt.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

LatestServiceJobAttempt::LatestServiceJobAttempt(JsonView jsonValue)
{
  *this = jsonValue;
}

LatestServiceJobAttempt& LatestServiceJobAttempt::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceResourceId"))
  {
    m_serviceResourceId = jsonValue.GetObject("serviceResourceId");
    m_serviceResourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue LatestServiceJobAttempt::Jsonize() const
{
  JsonValue payload;

  if(m_serviceResourceIdHasBeenSet)
  {
   payload.WithObject("serviceResourceId", m_serviceResourceId.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
