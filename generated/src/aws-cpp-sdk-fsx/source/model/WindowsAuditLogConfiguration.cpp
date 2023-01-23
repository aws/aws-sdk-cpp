/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/WindowsAuditLogConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

WindowsAuditLogConfiguration::WindowsAuditLogConfiguration() : 
    m_fileAccessAuditLogLevel(WindowsAccessAuditLogLevel::NOT_SET),
    m_fileAccessAuditLogLevelHasBeenSet(false),
    m_fileShareAccessAuditLogLevel(WindowsAccessAuditLogLevel::NOT_SET),
    m_fileShareAccessAuditLogLevelHasBeenSet(false),
    m_auditLogDestinationHasBeenSet(false)
{
}

WindowsAuditLogConfiguration::WindowsAuditLogConfiguration(JsonView jsonValue) : 
    m_fileAccessAuditLogLevel(WindowsAccessAuditLogLevel::NOT_SET),
    m_fileAccessAuditLogLevelHasBeenSet(false),
    m_fileShareAccessAuditLogLevel(WindowsAccessAuditLogLevel::NOT_SET),
    m_fileShareAccessAuditLogLevelHasBeenSet(false),
    m_auditLogDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

WindowsAuditLogConfiguration& WindowsAuditLogConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileAccessAuditLogLevel"))
  {
    m_fileAccessAuditLogLevel = WindowsAccessAuditLogLevelMapper::GetWindowsAccessAuditLogLevelForName(jsonValue.GetString("FileAccessAuditLogLevel"));

    m_fileAccessAuditLogLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FileShareAccessAuditLogLevel"))
  {
    m_fileShareAccessAuditLogLevel = WindowsAccessAuditLogLevelMapper::GetWindowsAccessAuditLogLevelForName(jsonValue.GetString("FileShareAccessAuditLogLevel"));

    m_fileShareAccessAuditLogLevelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuditLogDestination"))
  {
    m_auditLogDestination = jsonValue.GetString("AuditLogDestination");

    m_auditLogDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue WindowsAuditLogConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fileAccessAuditLogLevelHasBeenSet)
  {
   payload.WithString("FileAccessAuditLogLevel", WindowsAccessAuditLogLevelMapper::GetNameForWindowsAccessAuditLogLevel(m_fileAccessAuditLogLevel));
  }

  if(m_fileShareAccessAuditLogLevelHasBeenSet)
  {
   payload.WithString("FileShareAccessAuditLogLevel", WindowsAccessAuditLogLevelMapper::GetNameForWindowsAccessAuditLogLevel(m_fileShareAccessAuditLogLevel));
  }

  if(m_auditLogDestinationHasBeenSet)
  {
   payload.WithString("AuditLogDestination", m_auditLogDestination);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
