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

#include <aws/ecr/model/ImageScanningConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ImageScanningConfiguration::ImageScanningConfiguration() : 
    m_scanOnPush(false),
    m_scanOnPushHasBeenSet(false)
{
}

ImageScanningConfiguration::ImageScanningConfiguration(JsonView jsonValue) : 
    m_scanOnPush(false),
    m_scanOnPushHasBeenSet(false)
{
  *this = jsonValue;
}

ImageScanningConfiguration& ImageScanningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanOnPush"))
  {
    m_scanOnPush = jsonValue.GetBool("scanOnPush");

    m_scanOnPushHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageScanningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_scanOnPushHasBeenSet)
  {
   payload.WithBool("scanOnPush", m_scanOnPush);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
