/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/SparkSqlJobDriver.h>
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

SparkSqlJobDriver::SparkSqlJobDriver() : 
    m_entryPointHasBeenSet(false),
    m_sparkSqlParametersHasBeenSet(false)
{
}

SparkSqlJobDriver::SparkSqlJobDriver(JsonView jsonValue) : 
    m_entryPointHasBeenSet(false),
    m_sparkSqlParametersHasBeenSet(false)
{
  *this = jsonValue;
}

SparkSqlJobDriver& SparkSqlJobDriver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryPoint"))
  {
    m_entryPoint = jsonValue.GetString("entryPoint");

    m_entryPointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sparkSqlParameters"))
  {
    m_sparkSqlParameters = jsonValue.GetString("sparkSqlParameters");

    m_sparkSqlParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue SparkSqlJobDriver::Jsonize() const
{
  JsonValue payload;

  if(m_entryPointHasBeenSet)
  {
   payload.WithString("entryPoint", m_entryPoint);

  }

  if(m_sparkSqlParametersHasBeenSet)
  {
   payload.WithString("sparkSqlParameters", m_sparkSqlParameters);

  }

  return payload;
}

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
