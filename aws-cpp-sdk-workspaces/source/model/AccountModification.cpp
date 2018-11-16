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

#include <aws/workspaces/model/AccountModification.h>
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

AccountModification::AccountModification() : 
    m_modificationState(DedicatedTenancyModificationStateEnum::NOT_SET),
    m_modificationStateHasBeenSet(false),
    m_dedicatedTenancySupport(DedicatedTenancySupportResultEnum::NOT_SET),
    m_dedicatedTenancySupportHasBeenSet(false),
    m_dedicatedTenancyManagementCidrRangeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

AccountModification::AccountModification(JsonView jsonValue) : 
    m_modificationState(DedicatedTenancyModificationStateEnum::NOT_SET),
    m_modificationStateHasBeenSet(false),
    m_dedicatedTenancySupport(DedicatedTenancySupportResultEnum::NOT_SET),
    m_dedicatedTenancySupportHasBeenSet(false),
    m_dedicatedTenancyManagementCidrRangeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

AccountModification& AccountModification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ModificationState"))
  {
    m_modificationState = DedicatedTenancyModificationStateEnumMapper::GetDedicatedTenancyModificationStateEnumForName(jsonValue.GetString("ModificationState"));

    m_modificationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedTenancySupport"))
  {
    m_dedicatedTenancySupport = DedicatedTenancySupportResultEnumMapper::GetDedicatedTenancySupportResultEnumForName(jsonValue.GetString("DedicatedTenancySupport"));

    m_dedicatedTenancySupportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DedicatedTenancyManagementCidrRange"))
  {
    m_dedicatedTenancyManagementCidrRange = jsonValue.GetString("DedicatedTenancyManagementCidrRange");

    m_dedicatedTenancyManagementCidrRangeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountModification::Jsonize() const
{
  JsonValue payload;

  if(m_modificationStateHasBeenSet)
  {
   payload.WithString("ModificationState", DedicatedTenancyModificationStateEnumMapper::GetNameForDedicatedTenancyModificationStateEnum(m_modificationState));
  }

  if(m_dedicatedTenancySupportHasBeenSet)
  {
   payload.WithString("DedicatedTenancySupport", DedicatedTenancySupportResultEnumMapper::GetNameForDedicatedTenancySupportResultEnum(m_dedicatedTenancySupport));
  }

  if(m_dedicatedTenancyManagementCidrRangeHasBeenSet)
  {
   payload.WithString("DedicatedTenancyManagementCidrRange", m_dedicatedTenancyManagementCidrRange);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
