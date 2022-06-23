/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/JobCheckpointConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

JobCheckpointConfig::JobCheckpointConfig() : 
    m_localPathHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
}

JobCheckpointConfig::JobCheckpointConfig(JsonView jsonValue) : 
    m_localPathHasBeenSet(false),
    m_s3UriHasBeenSet(false)
{
  *this = jsonValue;
}

JobCheckpointConfig& JobCheckpointConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("localPath"))
  {
    m_localPath = jsonValue.GetString("localPath");

    m_localPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Uri"))
  {
    m_s3Uri = jsonValue.GetString("s3Uri");

    m_s3UriHasBeenSet = true;
  }

  return *this;
}

JsonValue JobCheckpointConfig::Jsonize() const
{
  JsonValue payload;

  if(m_localPathHasBeenSet)
  {
   payload.WithString("localPath", m_localPath);

  }

  if(m_s3UriHasBeenSet)
  {
   payload.WithString("s3Uri", m_s3Uri);

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
