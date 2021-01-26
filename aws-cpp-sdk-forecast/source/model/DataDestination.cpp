/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DataDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

DataDestination::DataDestination() : 
    m_s3ConfigHasBeenSet(false)
{
}

DataDestination::DataDestination(JsonView jsonValue) : 
    m_s3ConfigHasBeenSet(false)
{
  *this = jsonValue;
}

DataDestination& DataDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Config"))
  {
    m_s3Config = jsonValue.GetObject("S3Config");

    m_s3ConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue DataDestination::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigHasBeenSet)
  {
   payload.WithObject("S3Config", m_s3Config.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
