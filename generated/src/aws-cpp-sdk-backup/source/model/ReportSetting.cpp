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
    m_numberOfFrameworksHasBeenSet(false),
    m_accountsHasBeenSet(false),
    m_organizationUnitsHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

ReportSetting::ReportSetting(JsonView jsonValue) : 
    m_reportTemplateHasBeenSet(false),
    m_frameworkArnsHasBeenSet(false),
    m_numberOfFrameworks(0),
    m_numberOfFrameworksHasBeenSet(false),
    m_accountsHasBeenSet(false),
    m_organizationUnitsHasBeenSet(false),
    m_regionsHasBeenSet(false)
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

  if(jsonValue.ValueExists("Accounts"))
  {
    Aws::Utils::Array<JsonView> accountsJsonList = jsonValue.GetArray("Accounts");
    for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
    {
      m_accounts.push_back(accountsJsonList[accountsIndex].AsString());
    }
    m_accountsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationUnits"))
  {
    Aws::Utils::Array<JsonView> organizationUnitsJsonList = jsonValue.GetArray("OrganizationUnits");
    for(unsigned organizationUnitsIndex = 0; organizationUnitsIndex < organizationUnitsJsonList.GetLength(); ++organizationUnitsIndex)
    {
      m_organizationUnits.push_back(organizationUnitsJsonList[organizationUnitsIndex].AsString());
    }
    m_organizationUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("Regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
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

  if(m_accountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountsJsonList(m_accounts.size());
   for(unsigned accountsIndex = 0; accountsIndex < accountsJsonList.GetLength(); ++accountsIndex)
   {
     accountsJsonList[accountsIndex].AsString(m_accounts[accountsIndex]);
   }
   payload.WithArray("Accounts", std::move(accountsJsonList));

  }

  if(m_organizationUnitsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> organizationUnitsJsonList(m_organizationUnits.size());
   for(unsigned organizationUnitsIndex = 0; organizationUnitsIndex < organizationUnitsJsonList.GetLength(); ++organizationUnitsIndex)
   {
     organizationUnitsJsonList[organizationUnitsIndex].AsString(m_organizationUnits[organizationUnitsIndex]);
   }
   payload.WithArray("OrganizationUnits", std::move(organizationUnitsJsonList));

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("Regions", std::move(regionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
