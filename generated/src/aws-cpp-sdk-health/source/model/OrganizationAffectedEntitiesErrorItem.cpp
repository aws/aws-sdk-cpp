/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/OrganizationAffectedEntitiesErrorItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Health
{
namespace Model
{

OrganizationAffectedEntitiesErrorItem::OrganizationAffectedEntitiesErrorItem() : 
    m_awsAccountIdHasBeenSet(false),
    m_eventArnHasBeenSet(false),
    m_errorNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

OrganizationAffectedEntitiesErrorItem::OrganizationAffectedEntitiesErrorItem(JsonView jsonValue) : 
    m_awsAccountIdHasBeenSet(false),
    m_eventArnHasBeenSet(false),
    m_errorNameHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

OrganizationAffectedEntitiesErrorItem& OrganizationAffectedEntitiesErrorItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsAccountId"))
  {
    m_awsAccountId = jsonValue.GetString("awsAccountId");

    m_awsAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("eventArn"))
  {
    m_eventArn = jsonValue.GetString("eventArn");

    m_eventArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorName"))
  {
    m_errorName = jsonValue.GetString("errorName");

    m_errorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue OrganizationAffectedEntitiesErrorItem::Jsonize() const
{
  JsonValue payload;

  if(m_awsAccountIdHasBeenSet)
  {
   payload.WithString("awsAccountId", m_awsAccountId);

  }

  if(m_eventArnHasBeenSet)
  {
   payload.WithString("eventArn", m_eventArn);

  }

  if(m_errorNameHasBeenSet)
  {
   payload.WithString("errorName", m_errorName);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Health
} // namespace Aws
