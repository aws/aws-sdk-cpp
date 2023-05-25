/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DelegatedAdmin.h>
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

DelegatedAdmin::DelegatedAdmin() : 
    m_accountIdHasBeenSet(false),
    m_relationshipStatus(RelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false)
{
}

DelegatedAdmin::DelegatedAdmin(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_relationshipStatus(RelationshipStatus::NOT_SET),
    m_relationshipStatusHasBeenSet(false)
{
  *this = jsonValue;
}

DelegatedAdmin& DelegatedAdmin::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("relationshipStatus"))
  {
    m_relationshipStatus = RelationshipStatusMapper::GetRelationshipStatusForName(jsonValue.GetString("relationshipStatus"));

    m_relationshipStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue DelegatedAdmin::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_relationshipStatusHasBeenSet)
  {
   payload.WithString("relationshipStatus", RelationshipStatusMapper::GetNameForRelationshipStatus(m_relationshipStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
