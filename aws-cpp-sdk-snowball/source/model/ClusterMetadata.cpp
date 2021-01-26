/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ClusterMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

ClusterMetadata::ClusterMetadata() : 
    m_clusterIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_clusterState(ClusterState::NOT_SET),
    m_clusterStateHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_forwardingAddressIdHasBeenSet(false),
    m_taxDocumentsHasBeenSet(false)
{
}

ClusterMetadata::ClusterMetadata(JsonView jsonValue) : 
    m_clusterIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_clusterState(ClusterState::NOT_SET),
    m_clusterStateHasBeenSet(false),
    m_jobType(JobType::NOT_SET),
    m_jobTypeHasBeenSet(false),
    m_snowballType(SnowballType::NOT_SET),
    m_snowballTypeHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_addressIdHasBeenSet(false),
    m_shippingOption(ShippingOption::NOT_SET),
    m_shippingOptionHasBeenSet(false),
    m_notificationHasBeenSet(false),
    m_forwardingAddressIdHasBeenSet(false),
    m_taxDocumentsHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterMetadata& ClusterMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsKeyARN"))
  {
    m_kmsKeyARN = jsonValue.GetString("KmsKeyARN");

    m_kmsKeyARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleARN"))
  {
    m_roleARN = jsonValue.GetString("RoleARN");

    m_roleARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterState"))
  {
    m_clusterState = ClusterStateMapper::GetClusterStateForName(jsonValue.GetString("ClusterState"));

    m_clusterStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("JobType"))
  {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("JobType"));

    m_jobTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowballType"))
  {
    m_snowballType = SnowballTypeMapper::GetSnowballTypeForName(jsonValue.GetString("SnowballType"));

    m_snowballTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    m_resources = jsonValue.GetObject("Resources");

    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AddressId"))
  {
    m_addressId = jsonValue.GetString("AddressId");

    m_addressIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ShippingOption"))
  {
    m_shippingOption = ShippingOptionMapper::GetShippingOptionForName(jsonValue.GetString("ShippingOption"));

    m_shippingOptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Notification"))
  {
    m_notification = jsonValue.GetObject("Notification");

    m_notificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForwardingAddressId"))
  {
    m_forwardingAddressId = jsonValue.GetString("ForwardingAddressId");

    m_forwardingAddressIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TaxDocuments"))
  {
    m_taxDocuments = jsonValue.GetObject("TaxDocuments");

    m_taxDocumentsHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_kmsKeyARNHasBeenSet)
  {
   payload.WithString("KmsKeyARN", m_kmsKeyARN);

  }

  if(m_roleARNHasBeenSet)
  {
   payload.WithString("RoleARN", m_roleARN);

  }

  if(m_clusterStateHasBeenSet)
  {
   payload.WithString("ClusterState", ClusterStateMapper::GetNameForClusterState(m_clusterState));
  }

  if(m_jobTypeHasBeenSet)
  {
   payload.WithString("JobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if(m_snowballTypeHasBeenSet)
  {
   payload.WithString("SnowballType", SnowballTypeMapper::GetNameForSnowballType(m_snowballType));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_resourcesHasBeenSet)
  {
   payload.WithObject("Resources", m_resources.Jsonize());

  }

  if(m_addressIdHasBeenSet)
  {
   payload.WithString("AddressId", m_addressId);

  }

  if(m_shippingOptionHasBeenSet)
  {
   payload.WithString("ShippingOption", ShippingOptionMapper::GetNameForShippingOption(m_shippingOption));
  }

  if(m_notificationHasBeenSet)
  {
   payload.WithObject("Notification", m_notification.Jsonize());

  }

  if(m_forwardingAddressIdHasBeenSet)
  {
   payload.WithString("ForwardingAddressId", m_forwardingAddressId);

  }

  if(m_taxDocumentsHasBeenSet)
  {
   payload.WithObject("TaxDocuments", m_taxDocuments.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
