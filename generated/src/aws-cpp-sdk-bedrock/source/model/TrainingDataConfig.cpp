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

TrainingDataConfig::TrainingDataConfig() : 
    m_s3UriHasBeenSet(false)
{
}

TrainingDataConfig::TrainingDataConfig(JsonView jsonValue) : 
    m_s3UriHasBeenSet(false)
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

  return *this;
}

JsonValue TrainingDataConfig::Jsonize() const
{
  JsonValue payload;

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
