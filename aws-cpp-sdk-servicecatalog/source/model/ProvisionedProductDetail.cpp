/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisionedProductDetail.h>
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

ProvisionedProductDetail::ProvisionedProductDetail() : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(ProvisionedProductStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_lastRecordIdHasBeenSet(false),
    m_lastProvisioningRecordIdHasBeenSet(false),
    m_lastSuccessfulProvisioningRecordIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_launchRoleArnHasBeenSet(false)
{
}

ProvisionedProductDetail::ProvisionedProductDetail(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_idHasBeenSet(false),
    m_status(ProvisionedProductStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_lastRecordIdHasBeenSet(false),
    m_lastProvisioningRecordIdHasBeenSet(false),
    m_lastSuccessfulProvisioningRecordIdHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_provisioningArtifactIdHasBeenSet(false),
    m_launchRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedProductDetail& ProvisionedProductDetail::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ProvisionedProductStatusMapper::GetProvisionedProductStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IdempotencyToken"))
  {
    m_idempotencyToken = jsonValue.GetString("IdempotencyToken");

    m_idempotencyTokenHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastRecordId"))
  {
    m_lastRecordId = jsonValue.GetString("LastRecordId");

    m_lastRecordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastProvisioningRecordId"))
  {
    m_lastProvisioningRecordId = jsonValue.GetString("LastProvisioningRecordId");

    m_lastProvisioningRecordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulProvisioningRecordId"))
  {
    m_lastSuccessfulProvisioningRecordId = jsonValue.GetString("LastSuccessfulProvisioningRecordId");

    m_lastSuccessfulProvisioningRecordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifactId"))
  {
    m_provisioningArtifactId = jsonValue.GetString("ProvisioningArtifactId");

    m_provisioningArtifactIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchRoleArn"))
  {
    m_launchRoleArn = jsonValue.GetString("LaunchRoleArn");

    m_launchRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedProductDetail::Jsonize() const
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

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ProvisionedProductStatusMapper::GetNameForProvisionedProductStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_lastRecordIdHasBeenSet)
  {
   payload.WithString("LastRecordId", m_lastRecordId);

  }

  if(m_lastProvisioningRecordIdHasBeenSet)
  {
   payload.WithString("LastProvisioningRecordId", m_lastProvisioningRecordId);

  }

  if(m_lastSuccessfulProvisioningRecordIdHasBeenSet)
  {
   payload.WithString("LastSuccessfulProvisioningRecordId", m_lastSuccessfulProvisioningRecordId);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_provisioningArtifactIdHasBeenSet)
  {
   payload.WithString("ProvisioningArtifactId", m_provisioningArtifactId);

  }

  if(m_launchRoleArnHasBeenSet)
  {
   payload.WithString("LaunchRoleArn", m_launchRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
