/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
