/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

OutputConfig::OutputConfig() : 
    m_s3OutputLocationHasBeenSet(false),
    m_targetDevice(TargetDevice::NOT_SET),
    m_targetDeviceHasBeenSet(false),
    m_targetPlatformHasBeenSet(false),
    m_compilerOptionsHasBeenSet(false)
{
}

OutputConfig::OutputConfig(JsonView jsonValue) : 
    m_s3OutputLocationHasBeenSet(false),
    m_targetDevice(TargetDevice::NOT_SET),
    m_targetDeviceHasBeenSet(false),
    m_targetPlatformHasBeenSet(false),
    m_compilerOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

OutputConfig& OutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3OutputLocation"))
  {
    m_s3OutputLocation = jsonValue.GetString("S3OutputLocation");

    m_s3OutputLocationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetDevice"))
  {
    m_targetDevice = TargetDeviceMapper::GetTargetDeviceForName(jsonValue.GetString("TargetDevice"));

    m_targetDeviceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetPlatform"))
  {
    m_targetPlatform = jsonValue.GetObject("TargetPlatform");

    m_targetPlatformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompilerOptions"))
  {
    m_compilerOptions = jsonValue.GetString("CompilerOptions");

    m_compilerOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3OutputLocationHasBeenSet)
  {
   payload.WithString("S3OutputLocation", m_s3OutputLocation);

  }

  if(m_targetDeviceHasBeenSet)
  {
   payload.WithString("TargetDevice", TargetDeviceMapper::GetNameForTargetDevice(m_targetDevice));
  }

  if(m_targetPlatformHasBeenSet)
  {
   payload.WithObject("TargetPlatform", m_targetPlatform.Jsonize());

  }

  if(m_compilerOptionsHasBeenSet)
  {
   payload.WithString("CompilerOptions", m_compilerOptions);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
