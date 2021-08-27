/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/MemberDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Detective
{
namespace Model
{

MemberDetail::MemberDetail() : 
    m_accountIdHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_graphArnHasBeenSet(false),
    m_masterIdHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_disabledReason(MemberDisabledReason::NOT_SET),
    m_disabledReasonHasBeenSet(false),
    m_invitedTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_percentOfGraphUtilization(0.0),
    m_percentOfGraphUtilizationHasBeenSet(false),
    m_percentOfGraphUtilizationUpdatedTimeHasBeenSet(false)
{
}

MemberDetail::MemberDetail(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_graphArnHasBeenSet(false),
    m_masterIdHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_disabledReason(MemberDisabledReason::NOT_SET),
    m_disabledReasonHasBeenSet(false),
    m_invitedTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_percentOfGraphUtilization(0.0),
    m_percentOfGraphUtilizationHasBeenSet(false),
    m_percentOfGraphUtilizationUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

MemberDetail& MemberDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EmailAddress"))
  {
    m_emailAddress = jsonValue.GetString("EmailAddress");

    m_emailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GraphArn"))
  {
    m_graphArn = jsonValue.GetString("GraphArn");

    m_graphArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MasterId"))
  {
    m_masterId = jsonValue.GetString("MasterId");

    m_masterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MemberStatusMapper::GetMemberStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisabledReason"))
  {
    m_disabledReason = MemberDisabledReasonMapper::GetMemberDisabledReasonForName(jsonValue.GetString("DisabledReason"));

    m_disabledReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InvitedTime"))
  {
    m_invitedTime = jsonValue.GetDouble("InvitedTime");

    m_invitedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTime"))
  {
    m_updatedTime = jsonValue.GetDouble("UpdatedTime");

    m_updatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentOfGraphUtilization"))
  {
    m_percentOfGraphUtilization = jsonValue.GetDouble("PercentOfGraphUtilization");

    m_percentOfGraphUtilizationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentOfGraphUtilizationUpdatedTime"))
  {
    m_percentOfGraphUtilizationUpdatedTime = jsonValue.GetDouble("PercentOfGraphUtilizationUpdatedTime");

    m_percentOfGraphUtilizationUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue MemberDetail::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_emailAddressHasBeenSet)
  {
   payload.WithString("EmailAddress", m_emailAddress);

  }

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_masterIdHasBeenSet)
  {
   payload.WithString("MasterId", m_masterId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MemberStatusMapper::GetNameForMemberStatus(m_status));
  }

  if(m_disabledReasonHasBeenSet)
  {
   payload.WithString("DisabledReason", MemberDisabledReasonMapper::GetNameForMemberDisabledReason(m_disabledReason));
  }

  if(m_invitedTimeHasBeenSet)
  {
   payload.WithDouble("InvitedTime", m_invitedTime.SecondsWithMSPrecision());
  }

  if(m_updatedTimeHasBeenSet)
  {
   payload.WithDouble("UpdatedTime", m_updatedTime.SecondsWithMSPrecision());
  }

  if(m_percentOfGraphUtilizationHasBeenSet)
  {
   payload.WithDouble("PercentOfGraphUtilization", m_percentOfGraphUtilization);

  }

  if(m_percentOfGraphUtilizationUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("PercentOfGraphUtilizationUpdatedTime", m_percentOfGraphUtilizationUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
