/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/ServiceSetting.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ServiceSetting::ServiceSetting() : 
    m_settingIdHasBeenSet(false),
    m_settingValueHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

ServiceSetting::ServiceSetting(JsonView jsonValue) : 
    m_settingIdHasBeenSet(false),
    m_settingValueHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false),
    m_lastModifiedUserHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceSetting& ServiceSetting::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SettingId"))
  {
    m_settingId = jsonValue.GetString("SettingId");

    m_settingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SettingValue"))
  {
    m_settingValue = jsonValue.GetString("SettingValue");

    m_settingValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedUser"))
  {
    m_lastModifiedUser = jsonValue.GetString("LastModifiedUser");

    m_lastModifiedUserHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceSetting::Jsonize() const
{
  JsonValue payload;

  if(m_settingIdHasBeenSet)
  {
   payload.WithString("SettingId", m_settingId);

  }

  if(m_settingValueHasBeenSet)
  {
   payload.WithString("SettingValue", m_settingValue);

  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedUserHasBeenSet)
  {
   payload.WithString("LastModifiedUser", m_lastModifiedUser);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
