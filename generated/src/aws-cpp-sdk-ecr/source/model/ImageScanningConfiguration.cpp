/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
