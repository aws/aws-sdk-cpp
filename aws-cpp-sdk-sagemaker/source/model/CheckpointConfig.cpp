/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CheckpointConfig.h>
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

CheckpointConfig::CheckpointConfig() : 
    m_s3UriHasBeenSet(false),
    m_localPathHasBeenSet(false)
{
}

CheckpointConfig::CheckpointConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false),
    m_localPathHasBeenSet(false)
{
  *this = jsonValue;
}

CheckpointConfig& CheckpointConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Uri"))
  {
    m_s3Uri = jsonValue.GetString("S3Uri");

    m_s3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalPath"))
  {
    m_localPath = jsonValue.GetString("LocalPath");

    m_localPathHasBeenSet = true;
  }

  return *this;
}

JsonValue CheckpointConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("S3Uri", m_s3Uri);

  }

  if(m_localPathHasBeenSet)
  {
   payload.WithString("LocalPath", m_localPath);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
