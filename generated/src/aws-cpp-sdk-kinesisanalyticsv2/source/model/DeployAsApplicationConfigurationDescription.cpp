/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/DeployAsApplicationConfigurationDescription.h>
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

DeployAsApplicationConfigurationDescription::DeployAsApplicationConfigurationDescription() : 
    m_s3ContentLocationDescriptionHasBeenSet(false)
{
}

DeployAsApplicationConfigurationDescription::DeployAsApplicationConfigurationDescription(JsonView jsonValue) : 
    m_s3ContentLocationDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

DeployAsApplicationConfigurationDescription& DeployAsApplicationConfigurationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3ContentLocationDescription"))
  {
    m_s3ContentLocationDescription = jsonValue.GetObject("S3ContentLocationDescription");

    m_s3ContentLocationDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue DeployAsApplicationConfigurationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_s3ContentLocationDescriptionHasBeenSet)
  {
   payload.WithObject("S3ContentLocationDescription", m_s3ContentLocationDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
