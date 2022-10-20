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
    m_reportTemplateHasBeenSet(false),
    m_frameworkArnsHasBeenSet(false),
    m_numberOfFrameworks(0),
    m_numberOfFrameworksHasBeenSet(false)
{
}

ReportSetting::ReportSetting(JsonView jsonValue) : 
    m_reportTemplateHasBeenSet(false),
    m_frameworkArnsHasBeenSet(false),
    m_numberOfFrameworks(0),
    m_numberOfFrameworksHasBeenSet(false)
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

  if(jsonValue.ValueExists("FrameworkArns"))
  {
    Aws::Utils::Array<JsonView> frameworkArnsJsonList = jsonValue.GetArray("FrameworkArns");
    for(unsigned frameworkArnsIndex = 0; frameworkArnsIndex < frameworkArnsJsonList.GetLength(); ++frameworkArnsIndex)
    {
      m_frameworkArns.push_back(frameworkArnsJsonList[frameworkArnsIndex].AsString());
    }
    m_frameworkArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfFrameworks"))
  {
    m_numberOfFrameworks = jsonValue.GetInteger("NumberOfFrameworks");

    m_numberOfFrameworksHasBeenSet = true;
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

  if(m_frameworkArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> frameworkArnsJsonList(m_frameworkArns.size());
   for(unsigned frameworkArnsIndex = 0; frameworkArnsIndex < frameworkArnsJsonList.GetLength(); ++frameworkArnsIndex)
   {
     frameworkArnsJsonList[frameworkArnsIndex].AsString(m_frameworkArns[frameworkArnsIndex]);
   }
   payload.WithArray("FrameworkArns", std::move(frameworkArnsJsonList));

  }

  if(m_numberOfFrameworksHasBeenSet)
  {
   payload.WithInteger("NumberOfFrameworks", m_numberOfFrameworks);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
