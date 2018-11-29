/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_targetDeviceHasBeenSet(false)
{
}

OutputConfig::OutputConfig(JsonView jsonValue) : 
    m_s3OutputLocationHasBeenSet(false),
    m_targetDevice(TargetDevice::NOT_SET),
    m_targetDeviceHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
