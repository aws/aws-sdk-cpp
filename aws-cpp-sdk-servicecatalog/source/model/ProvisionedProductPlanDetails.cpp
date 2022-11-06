/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisionedProductPlanDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

ProvisionedProductPlanDetails::ProvisionedProductPlanDetails() : 
    m_createdTimeHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_provisionProductIdHasBeenSet(false),
    m_provisionProductNameHasBeenSet(false),
    m_planType(ProvisionedProductPlanType::NOT_SET),
    m_planTypeHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_status(ProvisionedProductPlanStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_notificationArnsHasBeenSet(false),
    m_provisioningParametersHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

ProvisionedProductPlanDetails::ProvisionedProductPlanDetails(JsonView jsonValue) : 
    m_createdTimeHasBeenSet(false),
    m_pathIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_provisionProductIdHasBeenSet(false),
    m_provisionProductNameHasBeenSet(false),
    m_planType(ProvisionedProductPlanType::NOT_SET),
    m_planTypeHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_status(ProvisionedProductPlanStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_notificationArnsHasBeenSet(false),
    m_provisioningParametersHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedProductPlanDetails& ProvisionedProductPlanDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PathId"))
  {
    m_pathId = jsonValue.GetString("PathId");

    m_pathIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlanName"))
  {
    m_planName = jsonValue.GetString("PlanName");

    m_planNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlanId"))
  {
    m_planId = jsonValue.GetString("PlanId");

    m_planIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionProductId"))
  {
    m_provisionProductId = jsonValue.GetString("ProvisionProductId");

    m_provisionProductIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisionProductName"))
  {
    m_provisionProductName = jsonValue.GetString("ProvisionProductName");

    m_provisionProductNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PlanType"))
  {
    m_planType = ProvisionedProductPlanTypeMapper::GetProvisionedProductPlanTypeForName(jsonValue.GetString("PlanType"));

    m_planTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

    m_provisioningArtifactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProvisionedProductPlanStatusMapper::GetProvisionedProductPlanStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedTime"))
  {
    m_updatedTime = jsonValue.GetDouble("UpdatedTime");

    m_updatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NotificationArns"))
  {
    Aws::Utils::Array<JsonView> notificationArnsJsonList = jsonValue.GetArray("NotificationArns");
    for(unsigned notificationArnsIndex = 0; notificationArnsIndex < notificationArnsJsonList.GetLength(); ++notificationArnsIndex)
    {
      m_notificationArns.push_back(notificationArnsJsonList[notificationArnsIndex].AsString());
    }
    m_notificationArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningParameters"))
  {
    Aws::Utils::Array<JsonView> provisioningParametersJsonList = jsonValue.GetArray("ProvisioningParameters");
    for(unsigned provisioningParametersIndex = 0; provisioningParametersIndex < provisioningParametersJsonList.GetLength(); ++provisioningParametersIndex)
    {
      m_provisioningParameters.push_back(provisioningParametersJsonList[provisioningParametersIndex].AsObject());
    }
    m_provisioningParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedProductPlanDetails::Jsonize() const
{
  JsonValue payload;

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_pathIdHasBeenSet)
  {
   payload.WithString("PathId", m_pathId);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_planNameHasBeenSet)
  {
   payload.WithString("PlanName", m_planName);

  }

  if(m_planIdHasBeenSet)
  {
   payload.WithString("PlanId", m_planId);

  }

  if(m_provisionProductIdHasBeenSet)
  {
   payload.WithString("ProvisionProductId", m_provisionProductId);

  }

  if(m_provisionProductNameHasBeenSet)
  {
   payload.WithString("ProvisionProductName", m_provisionProductName);

  }

  if(m_planTypeHasBeenSet)
  {
   payload.WithString("PlanType", ProvisionedProductPlanTypeMapper::GetNameForProvisionedProductPlanType(m_planType));
  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProvisionedProductPlanStatusMapper::GetNameForProvisionedProductPlanStatus(m_status));
  }

  if(m_updatedTimeHasBeenSet)
  {
   payload.WithDouble("UpdatedTime", m_updatedTime.SecondsWithMSPrecision());
  }

  if(m_notificationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> notificationArnsJsonList(m_notificationArns.size());
   for(unsigned notificationArnsIndex = 0; notificationArnsIndex < notificationArnsJsonList.GetLength(); ++notificationArnsIndex)
   {
     notificationArnsJsonList[notificationArnsIndex].AsString(m_notificationArns[notificationArnsIndex]);
   }
   payload.WithArray("NotificationArns", std::move(notificationArnsJsonList));

  }

  if(m_provisioningParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> provisioningParametersJsonList(m_provisioningParameters.size());
   for(unsigned provisioningParametersIndex = 0; provisioningParametersIndex < provisioningParametersJsonList.GetLength(); ++provisioningParametersIndex)
   {
     provisioningParametersJsonList[provisioningParametersIndex].AsObject(m_provisioningParameters[provisioningParametersIndex].Jsonize());
   }
   payload.WithArray("ProvisioningParameters", std::move(provisioningParametersJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
