/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CompletionReport.h>
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

CompletionReport::CompletionReport() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_format(ReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_scope(ReportScope::NOT_SET),
    m_scopeHasBeenSet(false)
{
}

CompletionReport::CompletionReport(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_format(ReportFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_scope(ReportScope::NOT_SET),
    m_scopeHasBeenSet(false)
{
  *this = jsonValue;
}

CompletionReport& CompletionReport::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = ReportFormatMapper::GetReportFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scope"))
  {
    m_scope = ReportScopeMapper::GetReportScopeForName(jsonValue.GetString("Scope"));

    m_scopeHasBeenSet = true;
  }

  return *this;
}

JsonValue CompletionReport::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", ReportFormatMapper::GetNameForReportFormat(m_format));
  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("Scope", ReportScopeMapper::GetNameForReportScope(m_scope));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
