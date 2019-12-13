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
    m_invitedTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
{
}

MemberDetail::MemberDetail(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_emailAddressHasBeenSet(false),
    m_graphArnHasBeenSet(false),
    m_masterIdHasBeenSet(false),
    m_status(MemberStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_invitedTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false)
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

  if(m_invitedTimeHasBeenSet)
  {
   payload.WithDouble("InvitedTime", m_invitedTime.SecondsWithMSPrecision());
  }

  if(m_updatedTimeHasBeenSet)
  {
   payload.WithDouble("UpdatedTime", m_updatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Detective
} // namespace Aws
