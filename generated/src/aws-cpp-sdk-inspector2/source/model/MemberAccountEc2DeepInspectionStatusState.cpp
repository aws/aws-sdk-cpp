/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/MemberAccountEc2DeepInspectionStatusState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

MemberAccountEc2DeepInspectionStatusState::MemberAccountEc2DeepInspectionStatusState(JsonView jsonValue)
{
  *this = jsonValue;
}

MemberAccountEc2DeepInspectionStatusState& MemberAccountEc2DeepInspectionStatusState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");
    m_accountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = Ec2DeepInspectionStatusMapper::GetEc2DeepInspectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MemberAccountEc2DeepInspectionStatusState::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", Ec2DeepInspectionStatusMapper::GetNameForEc2DeepInspectionStatus(m_status));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
