/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/JobDriver.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

JobDriver::JobDriver() : 
    m_sparkSubmitJobDriverHasBeenSet(false),
    m_sparkSqlJobDriverHasBeenSet(false)
{
}

JobDriver::JobDriver(JsonView jsonValue) : 
    m_sparkSubmitJobDriverHasBeenSet(false),
    m_sparkSqlJobDriverHasBeenSet(false)
{
  *this = jsonValue;
}

JobDriver& JobDriver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sparkSubmitJobDriver"))
  {
    m_sparkSubmitJobDriver = jsonValue.GetObject("sparkSubmitJobDriver");

    m_sparkSubmitJobDriverHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sparkSqlJobDriver"))
  {
    m_sparkSqlJobDriver = jsonValue.GetObject("sparkSqlJobDriver");

    m_sparkSqlJobDriverHasBeenSet = true;
  }

  return *this;
}

JsonValue JobDriver::Jsonize() const
{
  JsonValue payload;

  if(m_sparkSubmitJobDriverHasBeenSet)
  {
   payload.WithObject("sparkSubmitJobDriver", m_sparkSubmitJobDriver.Jsonize());

  }

  if(m_sparkSqlJobDriverHasBeenSet)
  {
   payload.WithObject("sparkSqlJobDriver", m_sparkSqlJobDriver.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
