/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ListBillingGroupsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BillingConductor {
namespace Model {

ListBillingGroupsFilter::ListBillingGroupsFilter(JsonView jsonValue) { *this = jsonValue; }

ListBillingGroupsFilter& ListBillingGroupsFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arns")) {
    Aws::Utils::Array<JsonView> arnsJsonList = jsonValue.GetArray("Arns");
    for (unsigned arnsIndex = 0; arnsIndex < arnsJsonList.GetLength(); ++arnsIndex) {
      m_arns.push_back(arnsJsonList[arnsIndex].AsString());
    }
    m_arnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PricingPlan")) {
    m_pricingPlan = jsonValue.GetString("PricingPlan");
    m_pricingPlanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Statuses")) {
    Aws::Utils::Array<JsonView> statusesJsonList = jsonValue.GetArray("Statuses");
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      m_statuses.push_back(BillingGroupStatusMapper::GetBillingGroupStatusForName(statusesJsonList[statusesIndex].AsString()));
    }
    m_statusesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AutoAssociate")) {
    m_autoAssociate = jsonValue.GetBool("AutoAssociate");
    m_autoAssociateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryAccountIds")) {
    Aws::Utils::Array<JsonView> primaryAccountIdsJsonList = jsonValue.GetArray("PrimaryAccountIds");
    for (unsigned primaryAccountIdsIndex = 0; primaryAccountIdsIndex < primaryAccountIdsJsonList.GetLength(); ++primaryAccountIdsIndex) {
      m_primaryAccountIds.push_back(primaryAccountIdsJsonList[primaryAccountIdsIndex].AsString());
    }
    m_primaryAccountIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BillingGroupTypes")) {
    Aws::Utils::Array<JsonView> billingGroupTypesJsonList = jsonValue.GetArray("BillingGroupTypes");
    for (unsigned billingGroupTypesIndex = 0; billingGroupTypesIndex < billingGroupTypesJsonList.GetLength(); ++billingGroupTypesIndex) {
      m_billingGroupTypes.push_back(
          BillingGroupTypeMapper::GetBillingGroupTypeForName(billingGroupTypesJsonList[billingGroupTypesIndex].AsString()));
    }
    m_billingGroupTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Names")) {
    Aws::Utils::Array<JsonView> namesJsonList = jsonValue.GetArray("Names");
    for (unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex) {
      m_names.push_back(namesJsonList[namesIndex].AsObject());
    }
    m_namesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResponsibilityTransferArns")) {
    Aws::Utils::Array<JsonView> responsibilityTransferArnsJsonList = jsonValue.GetArray("ResponsibilityTransferArns");
    for (unsigned responsibilityTransferArnsIndex = 0; responsibilityTransferArnsIndex < responsibilityTransferArnsJsonList.GetLength();
         ++responsibilityTransferArnsIndex) {
      m_responsibilityTransferArns.push_back(responsibilityTransferArnsJsonList[responsibilityTransferArnsIndex].AsString());
    }
    m_responsibilityTransferArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListBillingGroupsFilter::Jsonize() const {
  JsonValue payload;

  if (m_arnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> arnsJsonList(m_arns.size());
    for (unsigned arnsIndex = 0; arnsIndex < arnsJsonList.GetLength(); ++arnsIndex) {
      arnsJsonList[arnsIndex].AsString(m_arns[arnsIndex]);
    }
    payload.WithArray("Arns", std::move(arnsJsonList));
  }

  if (m_pricingPlanHasBeenSet) {
    payload.WithString("PricingPlan", m_pricingPlan);
  }

  if (m_statusesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusesJsonList(m_statuses.size());
    for (unsigned statusesIndex = 0; statusesIndex < statusesJsonList.GetLength(); ++statusesIndex) {
      statusesJsonList[statusesIndex].AsString(BillingGroupStatusMapper::GetNameForBillingGroupStatus(m_statuses[statusesIndex]));
    }
    payload.WithArray("Statuses", std::move(statusesJsonList));
  }

  if (m_autoAssociateHasBeenSet) {
    payload.WithBool("AutoAssociate", m_autoAssociate);
  }

  if (m_primaryAccountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> primaryAccountIdsJsonList(m_primaryAccountIds.size());
    for (unsigned primaryAccountIdsIndex = 0; primaryAccountIdsIndex < primaryAccountIdsJsonList.GetLength(); ++primaryAccountIdsIndex) {
      primaryAccountIdsJsonList[primaryAccountIdsIndex].AsString(m_primaryAccountIds[primaryAccountIdsIndex]);
    }
    payload.WithArray("PrimaryAccountIds", std::move(primaryAccountIdsJsonList));
  }

  if (m_billingGroupTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> billingGroupTypesJsonList(m_billingGroupTypes.size());
    for (unsigned billingGroupTypesIndex = 0; billingGroupTypesIndex < billingGroupTypesJsonList.GetLength(); ++billingGroupTypesIndex) {
      billingGroupTypesJsonList[billingGroupTypesIndex].AsString(
          BillingGroupTypeMapper::GetNameForBillingGroupType(m_billingGroupTypes[billingGroupTypesIndex]));
    }
    payload.WithArray("BillingGroupTypes", std::move(billingGroupTypesJsonList));
  }

  if (m_namesHasBeenSet) {
    Aws::Utils::Array<JsonValue> namesJsonList(m_names.size());
    for (unsigned namesIndex = 0; namesIndex < namesJsonList.GetLength(); ++namesIndex) {
      namesJsonList[namesIndex].AsObject(m_names[namesIndex].Jsonize());
    }
    payload.WithArray("Names", std::move(namesJsonList));
  }

  if (m_responsibilityTransferArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> responsibilityTransferArnsJsonList(m_responsibilityTransferArns.size());
    for (unsigned responsibilityTransferArnsIndex = 0; responsibilityTransferArnsIndex < responsibilityTransferArnsJsonList.GetLength();
         ++responsibilityTransferArnsIndex) {
      responsibilityTransferArnsJsonList[responsibilityTransferArnsIndex].AsString(
          m_responsibilityTransferArns[responsibilityTransferArnsIndex]);
    }
    payload.WithArray("ResponsibilityTransferArns", std::move(responsibilityTransferArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
