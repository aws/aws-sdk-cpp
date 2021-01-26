/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InputConfig.h>
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

InputConfig::InputConfig() : 
    m_s3UriHasBeenSet(false),
    m_dataInputConfigHasBeenSet(false),
    m_framework(Framework::NOT_SET),
    m_frameworkHasBeenSet(false)
{
}

InputConfig::InputConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_dataInputConfigHasBeenSet(false),
    m_framework(Framework::NOT_SET),
    m_frameworkHasBeenSet(false)
{
  *this = jsonValue;
}

InputConfig& InputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataInputConfig"))
  {
    m_dataInputConfig = jsonValue.GetString("DataInputConfig");

    m_dataInputConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Framework"))
  {
    m_framework = FrameworkMapper::GetFrameworkForName(jsonValue.GetString("Framework"));

    m_frameworkHasBeenSet = true;
  }

  return *this;
}

JsonValue InputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_dataInputConfigHasBeenSet)
  {
   payload.WithString("DataInputConfig", m_dataInputConfig);

  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithString("Framework", FrameworkMapper::GetNameForFramework(m_framework));
  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
