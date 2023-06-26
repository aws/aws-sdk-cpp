/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FailedMemberAccountEc2DeepInspectionStatusState.h>
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

FailedMemberAccountEc2DeepInspectionStatusState::FailedMemberAccountEc2DeepInspectionStatusState() : 
    m_accountIdHasBeenSet(false),
    m_ec2ScanStatus(Status::NOT_SET),
    m_ec2ScanStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

FailedMemberAccountEc2DeepInspectionStatusState::FailedMemberAccountEc2DeepInspectionStatusState(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_ec2ScanStatus(Status::NOT_SET),
    m_ec2ScanStatusHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FailedMemberAccountEc2DeepInspectionStatusState& FailedMemberAccountEc2DeepInspectionStatusState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2ScanStatus"))
  {
    m_ec2ScanStatus = StatusMapper::GetStatusForName(jsonValue.GetString("ec2ScanStatus"));

    m_ec2ScanStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedMemberAccountEc2DeepInspectionStatusState::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_ec2ScanStatusHasBeenSet)
  {
   payload.WithString("ec2ScanStatus", StatusMapper::GetNameForStatus(m_ec2ScanStatus));
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
