/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/BillingGroupListElement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

BillingGroupListElement::BillingGroupListElement() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_primaryAccountIdHasBeenSet(false),
    m_computationPreferenceHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_status(BillingGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_accountGroupingHasBeenSet(false)
{
}

BillingGroupListElement::BillingGroupListElement(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_primaryAccountIdHasBeenSet(false),
    m_computationPreferenceHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_creationTime(0),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTime(0),
    m_lastModifiedTimeHasBeenSet(false),
    m_status(BillingGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_accountGroupingHasBeenSet(false)
{
  *this = jsonValue;
}

BillingGroupListElement& BillingGroupListElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryAccountId"))
  {
    m_primaryAccountId = jsonValue.GetString("PrimaryAccountId");

    m_primaryAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComputationPreference"))
  {
    m_computationPreference = jsonValue.GetObject("ComputationPreference");

    m_computationPreferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetInt64("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetInt64("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = BillingGroupStatusMapper::GetBillingGroupStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusReason"))
  {
    m_statusReason = jsonValue.GetString("StatusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountGrouping"))
  {
    m_accountGrouping = jsonValue.GetObject("AccountGrouping");

    m_accountGroupingHasBeenSet = true;
  }

  return *this;
}

JsonValue BillingGroupListElement::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_primaryAccountIdHasBeenSet)
  {
   payload.WithString("PrimaryAccountId", m_primaryAccountId);

  }

  if(m_computationPreferenceHasBeenSet)
  {
   payload.WithObject("ComputationPreference", m_computationPreference.Jsonize());

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("Size", m_size);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithInt64("CreationTime", m_creationTime);

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithInt64("LastModifiedTime", m_lastModifiedTime);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", BillingGroupStatusMapper::GetNameForBillingGroupStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("StatusReason", m_statusReason);

  }

  if(m_accountGroupingHasBeenSet)
  {
   payload.WithObject("AccountGrouping", m_accountGrouping.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
