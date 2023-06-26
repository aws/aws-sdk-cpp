/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DeployAsApplicationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

DeployAsApplicationConfiguration::DeployAsApplicationConfiguration() : 
    m_s3ContentLocationHasBeenSet(false)
{
}

DeployAsApplicationConfiguration::DeployAsApplicationConfiguration(JsonView jsonValue) : 
    m_s3ContentLocationHasBeenSet(false)
{
  *this = jsonValue;
}

DeployAsApplicationConfiguration& DeployAsApplicationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ContentLocation"))
  {
    m_s3ContentLocation = jsonValue.GetObject("S3ContentLocation");

    m_s3ContentLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue DeployAsApplicationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3ContentLocationHasBeenSet)
  {
   payload.WithObject("S3ContentLocation", m_s3ContentLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
