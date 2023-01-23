/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/EdgeConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

EdgeConfig::EdgeConfig() : 
    m_hubDeviceArnHasBeenSet(false),
    m_recorderConfigHasBeenSet(false),
    m_uploaderConfigHasBeenSet(false),
    m_deletionConfigHasBeenSet(false)
{
}

EdgeConfig::EdgeConfig(JsonView jsonValue) : 
    m_hubDeviceArnHasBeenSet(false),
    m_recorderConfigHasBeenSet(false),
    m_uploaderConfigHasBeenSet(false),
    m_deletionConfigHasBeenSet(false)
{
  *this = jsonValue;
}

EdgeConfig& EdgeConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HubDeviceArn"))
  {
    m_hubDeviceArn = jsonValue.GetString("HubDeviceArn");

    m_hubDeviceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecorderConfig"))
  {
    m_recorderConfig = jsonValue.GetObject("RecorderConfig");

    m_recorderConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UploaderConfig"))
  {
    m_uploaderConfig = jsonValue.GetObject("UploaderConfig");

    m_uploaderConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionConfig"))
  {
    m_deletionConfig = jsonValue.GetObject("DeletionConfig");

    m_deletionConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue EdgeConfig::Jsonize() const
{
  JsonValue payload;

  if(m_hubDeviceArnHasBeenSet)
  {
   payload.WithString("HubDeviceArn", m_hubDeviceArn);

  }

  if(m_recorderConfigHasBeenSet)
  {
   payload.WithObject("RecorderConfig", m_recorderConfig.Jsonize());

  }

  if(m_uploaderConfigHasBeenSet)
  {
   payload.WithObject("UploaderConfig", m_uploaderConfig.Jsonize());

  }

  if(m_deletionConfigHasBeenSet)
  {
   payload.WithObject("DeletionConfig", m_deletionConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
