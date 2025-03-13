/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/TrainingDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

TrainingDataConfig::TrainingDataConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainingDataConfig& TrainingDataConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationLogsConfig"))
  {
    m_invocationLogsConfig = jsonValue.GetObject("invocationLogsConfig");
    m_invocationLogsConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainingDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  if(m_invocationLogsConfigHasBeenSet)
  {
   payload.WithObject("invocationLogsConfig", m_invocationLogsConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
