/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-serverless/model/JobDriver.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMRServerless
{
namespace Model
{

JobDriver::JobDriver() : 
    m_sparkSubmitHasBeenSet(false),
    m_hiveHasBeenSet(false)
{
}

JobDriver::JobDriver(JsonView jsonValue) : 
    m_sparkSubmitHasBeenSet(false),
    m_hiveHasBeenSet(false)
{
  *this = jsonValue;
}

JobDriver& JobDriver::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sparkSubmit"))
  {
    m_sparkSubmit = jsonValue.GetObject("sparkSubmit");

    m_sparkSubmitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hive"))
  {
    m_hive = jsonValue.GetObject("hive");

    m_hiveHasBeenSet = true;
  }

  return *this;
}

JsonValue JobDriver::Jsonize() const
{
  JsonValue payload;

  if(m_sparkSubmitHasBeenSet)
  {
   payload.WithObject("sparkSubmit", m_sparkSubmit.Jsonize());

  }

  if(m_hiveHasBeenSet)
  {
   payload.WithObject("hive", m_hive.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMRServerless
} // namespace Aws
