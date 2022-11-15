/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ClientProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ClientProperties::ClientProperties() : 
    m_reconnectEnabled(ReconnectEnum::NOT_SET),
    m_reconnectEnabledHasBeenSet(false),
    m_logUploadEnabled(LogUploadEnum::NOT_SET),
    m_logUploadEnabledHasBeenSet(false)
{
}

ClientProperties::ClientProperties(JsonView jsonValue) : 
    m_reconnectEnabled(ReconnectEnum::NOT_SET),
    m_reconnectEnabledHasBeenSet(false),
    m_logUploadEnabled(LogUploadEnum::NOT_SET),
    m_logUploadEnabledHasBeenSet(false)
{
  *this = jsonValue;
}

ClientProperties& ClientProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReconnectEnabled"))
  {
    m_reconnectEnabled = ReconnectEnumMapper::GetReconnectEnumForName(jsonValue.GetString("ReconnectEnabled"));

    m_reconnectEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogUploadEnabled"))
  {
    m_logUploadEnabled = LogUploadEnumMapper::GetLogUploadEnumForName(jsonValue.GetString("LogUploadEnabled"));

    m_logUploadEnabledHasBeenSet = true;
  }

  return *this;
}

JsonValue ClientProperties::Jsonize() const
{
  JsonValue payload;

  if(m_reconnectEnabledHasBeenSet)
  {
   payload.WithString("ReconnectEnabled", ReconnectEnumMapper::GetNameForReconnectEnum(m_reconnectEnabled));
  }

  if(m_logUploadEnabledHasBeenSet)
  {
   payload.WithString("LogUploadEnabled", LogUploadEnumMapper::GetNameForLogUploadEnum(m_logUploadEnabled));
  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
