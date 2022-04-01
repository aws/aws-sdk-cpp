/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/LoggingConfigurationMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

LoggingConfigurationMetadata::LoggingConfigurationMetadata() : 
    m_createdAtHasBeenSet(false),
    m_logGroupArnHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workspaceHasBeenSet(false)
{
}

LoggingConfigurationMetadata::LoggingConfigurationMetadata(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_logGroupArnHasBeenSet(false),
    m_modifiedAtHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_workspaceHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfigurationMetadata& LoggingConfigurationMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logGroupArn"))
  {
    m_logGroupArn = jsonValue.GetString("logGroupArn");

    m_logGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workspace"))
  {
    m_workspace = jsonValue.GetString("workspace");

    m_workspaceHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfigurationMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_logGroupArnHasBeenSet)
  {
   payload.WithString("logGroupArn", m_logGroupArn);

  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_workspaceHasBeenSet)
  {
   payload.WithString("workspace", m_workspace);

  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
