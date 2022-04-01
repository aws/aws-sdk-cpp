/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DeployAsApplicationConfigurationUpdate.h>
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

DeployAsApplicationConfigurationUpdate::DeployAsApplicationConfigurationUpdate() : 
    m_s3ContentLocationUpdateHasBeenSet(false)
{
}

DeployAsApplicationConfigurationUpdate::DeployAsApplicationConfigurationUpdate(JsonView jsonValue) : 
    m_s3ContentLocationUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

DeployAsApplicationConfigurationUpdate& DeployAsApplicationConfigurationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ContentLocationUpdate"))
  {
    m_s3ContentLocationUpdate = jsonValue.GetObject("S3ContentLocationUpdate");

    m_s3ContentLocationUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue DeployAsApplicationConfigurationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_s3ContentLocationUpdateHasBeenSet)
  {
   payload.WithObject("S3ContentLocationUpdate", m_s3ContentLocationUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
