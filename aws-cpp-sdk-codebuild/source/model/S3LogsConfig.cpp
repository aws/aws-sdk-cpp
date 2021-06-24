/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/S3LogsConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

S3LogsConfig::S3LogsConfig() : 
    m_status(LogsConfigStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false)
{
}

S3LogsConfig::S3LogsConfig(JsonView jsonValue) : 
    m_status(LogsConfigStatusType::NOT_SET),
    m_statusHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_encryptionDisabled(false),
    m_encryptionDisabledHasBeenSet(false)
{
  *this = jsonValue;
}

S3LogsConfig& S3LogsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = LogsConfigStatusTypeMapper::GetLogsConfigStatusTypeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionDisabled"))
  {
    m_encryptionDisabled = jsonValue.GetBool("encryptionDisabled");

    m_encryptionDisabledHasBeenSet = true;
  }

  return *this;
}

JsonValue S3LogsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", LogsConfigStatusTypeMapper::GetNameForLogsConfigStatusType(m_status));
  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  if(m_encryptionDisabledHasBeenSet)
  {
   payload.WithBool("encryptionDisabled", m_encryptionDisabled);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
