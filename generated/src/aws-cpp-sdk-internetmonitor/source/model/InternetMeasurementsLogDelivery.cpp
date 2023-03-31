/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/InternetMeasurementsLogDelivery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

InternetMeasurementsLogDelivery::InternetMeasurementsLogDelivery() : 
    m_s3ConfigHasBeenSet(false)
{
}

InternetMeasurementsLogDelivery::InternetMeasurementsLogDelivery(JsonView jsonValue) : 
    m_s3ConfigHasBeenSet(false)
{
  *this = jsonValue;
}

InternetMeasurementsLogDelivery& InternetMeasurementsLogDelivery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Config"))
  {
    m_s3Config = jsonValue.GetObject("S3Config");

    m_s3ConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue InternetMeasurementsLogDelivery::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigHasBeenSet)
  {
   payload.WithObject("S3Config", m_s3Config.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
