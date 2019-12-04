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

#include <aws/sagemaker/model/CaptureOption.h>
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

CaptureOption::CaptureOption() : 
    m_captureMode(CaptureMode::NOT_SET),
    m_captureModeHasBeenSet(false)
{
}

CaptureOption::CaptureOption(JsonView jsonValue) : 
    m_captureMode(CaptureMode::NOT_SET),
    m_captureModeHasBeenSet(false)
{
  *this = jsonValue;
}

CaptureOption& CaptureOption::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CaptureMode"))
  {
    m_captureMode = CaptureModeMapper::GetCaptureModeForName(jsonValue.GetString("CaptureMode"));

    m_captureModeHasBeenSet = true;
  }

  return *this;
}

JsonValue CaptureOption::Jsonize() const
{
  JsonValue payload;

  if(m_captureModeHasBeenSet)
  {
   payload.WithString("CaptureMode", CaptureModeMapper::GetNameForCaptureMode(m_captureMode));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
