/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ReportSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

ReportSetting::ReportSetting() : 
    m_reportTemplateHasBeenSet(false)
{
}

ReportSetting::ReportSetting(JsonView jsonValue) : 
    m_reportTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

ReportSetting& ReportSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReportTemplate"))
  {
    m_reportTemplate = jsonValue.GetString("ReportTemplate");

    m_reportTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportSetting::Jsonize() const
{
  JsonValue payload;

  if(m_reportTemplateHasBeenSet)
  {
   payload.WithString("ReportTemplate", m_reportTemplate);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
