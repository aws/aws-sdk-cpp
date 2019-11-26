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

#include <aws/ds/model/LDAPSSettingInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

LDAPSSettingInfo::LDAPSSettingInfo() : 
    m_lDAPSStatus(LDAPSStatus::NOT_SET),
    m_lDAPSStatusHasBeenSet(false),
    m_lDAPSStatusReasonHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

LDAPSSettingInfo::LDAPSSettingInfo(JsonView jsonValue) : 
    m_lDAPSStatus(LDAPSStatus::NOT_SET),
    m_lDAPSStatusHasBeenSet(false),
    m_lDAPSStatusReasonHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

LDAPSSettingInfo& LDAPSSettingInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LDAPSStatus"))
  {
    m_lDAPSStatus = LDAPSStatusMapper::GetLDAPSStatusForName(jsonValue.GetString("LDAPSStatus"));

    m_lDAPSStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LDAPSStatusReason"))
  {
    m_lDAPSStatusReason = jsonValue.GetString("LDAPSStatusReason");

    m_lDAPSStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("LastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue LDAPSSettingInfo::Jsonize() const
{
  JsonValue payload;

  if(m_lDAPSStatusHasBeenSet)
  {
   payload.WithString("LDAPSStatus", LDAPSStatusMapper::GetNameForLDAPSStatus(m_lDAPSStatus));
  }

  if(m_lDAPSStatusReasonHasBeenSet)
  {
   payload.WithString("LDAPSStatusReason", m_lDAPSStatusReason);

  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
