/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/AccountPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

AccountPolicy::AccountPolicy() : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_lastUpdatedTime(0),
    m_lastUpdatedTimeHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_selectionCriteriaHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

AccountPolicy::AccountPolicy(JsonView jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_lastUpdatedTime(0),
    m_lastUpdatedTimeHasBeenSet(false),
    m_policyType(PolicyType::NOT_SET),
    m_policyTypeHasBeenSet(false),
    m_scope(Scope::NOT_SET),
    m_scopeHasBeenSet(false),
    m_selectionCriteriaHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

AccountPolicy& AccountPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");

    m_policyDocumentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetInt64("lastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyType"))
  {
    m_policyType = PolicyTypeMapper::GetPolicyTypeForName(jsonValue.GetString("policyType"));

    m_policyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scope"))
  {
    m_scope = ScopeMapper::GetScopeForName(jsonValue.GetString("scope"));

    m_scopeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("selectionCriteria"))
  {
    m_selectionCriteria = jsonValue.GetString("selectionCriteria");

    m_selectionCriteriaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithInt64("lastUpdatedTime", m_lastUpdatedTime);

  }

  if(m_policyTypeHasBeenSet)
  {
   payload.WithString("policyType", PolicyTypeMapper::GetNameForPolicyType(m_policyType));
  }

  if(m_scopeHasBeenSet)
  {
   payload.WithString("scope", ScopeMapper::GetNameForScope(m_scope));
  }

  if(m_selectionCriteriaHasBeenSet)
  {
   payload.WithString("selectionCriteria", m_selectionCriteria);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
