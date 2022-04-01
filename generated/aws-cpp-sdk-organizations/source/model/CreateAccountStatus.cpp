/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/CreateAccountStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

CreateAccountStatus::CreateAccountStatus() : 
    m_idHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_state(CreateAccountState::NOT_SET),
    m_stateHasBeenSet(false),
    m_requestedTimestampHasBeenSet(false),
    m_completedTimestampHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_govCloudAccountIdHasBeenSet(false),
    m_failureReason(CreateAccountFailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false)
{
}

CreateAccountStatus::CreateAccountStatus(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_state(CreateAccountState::NOT_SET),
    m_stateHasBeenSet(false),
    m_requestedTimestampHasBeenSet(false),
    m_completedTimestampHasBeenSet(false),
    m_accountIdHasBeenSet(false),
    m_govCloudAccountIdHasBeenSet(false),
    m_failureReason(CreateAccountFailureReason::NOT_SET),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

CreateAccountStatus& CreateAccountStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountName"))
  {
    m_accountName = jsonValue.GetString("AccountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = CreateAccountStateMapper::GetCreateAccountStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequestedTimestamp"))
  {
    m_requestedTimestamp = jsonValue.GetDouble("RequestedTimestamp");

    m_requestedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompletedTimestamp"))
  {
    m_completedTimestamp = jsonValue.GetDouble("CompletedTimestamp");

    m_completedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GovCloudAccountId"))
  {
    m_govCloudAccountId = jsonValue.GetString("GovCloudAccountId");

    m_govCloudAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = CreateAccountFailureReasonMapper::GetCreateAccountFailureReasonForName(jsonValue.GetString("FailureReason"));

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue CreateAccountStatus::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", CreateAccountStateMapper::GetNameForCreateAccountState(m_state));
  }

  if(m_requestedTimestampHasBeenSet)
  {
   payload.WithDouble("RequestedTimestamp", m_requestedTimestamp.SecondsWithMSPrecision());
  }

  if(m_completedTimestampHasBeenSet)
  {
   payload.WithDouble("CompletedTimestamp", m_completedTimestamp.SecondsWithMSPrecision());
  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_govCloudAccountIdHasBeenSet)
  {
   payload.WithString("GovCloudAccountId", m_govCloudAccountId);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", CreateAccountFailureReasonMapper::GetNameForCreateAccountFailureReason(m_failureReason));
  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws
