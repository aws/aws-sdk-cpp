/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ProvisionedModelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

ProvisionedModelSummary::ProvisionedModelSummary() : 
    m_provisionedModelNameHasBeenSet(false),
    m_provisionedModelArnHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_desiredModelArnHasBeenSet(false),
    m_foundationModelArnHasBeenSet(false),
    m_modelUnits(0),
    m_modelUnitsHasBeenSet(false),
    m_desiredModelUnits(0),
    m_desiredModelUnitsHasBeenSet(false),
    m_status(ProvisionedModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_commitmentDuration(CommitmentDuration::NOT_SET),
    m_commitmentDurationHasBeenSet(false),
    m_commitmentExpirationTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
}

ProvisionedModelSummary::ProvisionedModelSummary(JsonView jsonValue) : 
    m_provisionedModelNameHasBeenSet(false),
    m_provisionedModelArnHasBeenSet(false),
    m_modelArnHasBeenSet(false),
    m_desiredModelArnHasBeenSet(false),
    m_foundationModelArnHasBeenSet(false),
    m_modelUnits(0),
    m_modelUnitsHasBeenSet(false),
    m_desiredModelUnits(0),
    m_desiredModelUnitsHasBeenSet(false),
    m_status(ProvisionedModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_commitmentDuration(CommitmentDuration::NOT_SET),
    m_commitmentDurationHasBeenSet(false),
    m_commitmentExpirationTimeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedModelSummary& ProvisionedModelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("provisionedModelName"))
  {
    m_provisionedModelName = jsonValue.GetString("provisionedModelName");

    m_provisionedModelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("provisionedModelArn"))
  {
    m_provisionedModelArn = jsonValue.GetString("provisionedModelArn");

    m_provisionedModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");

    m_modelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredModelArn"))
  {
    m_desiredModelArn = jsonValue.GetString("desiredModelArn");

    m_desiredModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("foundationModelArn"))
  {
    m_foundationModelArn = jsonValue.GetString("foundationModelArn");

    m_foundationModelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modelUnits"))
  {
    m_modelUnits = jsonValue.GetInteger("modelUnits");

    m_modelUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("desiredModelUnits"))
  {
    m_desiredModelUnits = jsonValue.GetInteger("desiredModelUnits");

    m_desiredModelUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ProvisionedModelStatusMapper::GetProvisionedModelStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("commitmentDuration"))
  {
    m_commitmentDuration = CommitmentDurationMapper::GetCommitmentDurationForName(jsonValue.GetString("commitmentDuration"));

    m_commitmentDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("commitmentExpirationTime"))
  {
    m_commitmentExpirationTime = jsonValue.GetString("commitmentExpirationTime");

    m_commitmentExpirationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedModelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_provisionedModelNameHasBeenSet)
  {
   payload.WithString("provisionedModelName", m_provisionedModelName);

  }

  if(m_provisionedModelArnHasBeenSet)
  {
   payload.WithString("provisionedModelArn", m_provisionedModelArn);

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_desiredModelArnHasBeenSet)
  {
   payload.WithString("desiredModelArn", m_desiredModelArn);

  }

  if(m_foundationModelArnHasBeenSet)
  {
   payload.WithString("foundationModelArn", m_foundationModelArn);

  }

  if(m_modelUnitsHasBeenSet)
  {
   payload.WithInteger("modelUnits", m_modelUnits);

  }

  if(m_desiredModelUnitsHasBeenSet)
  {
   payload.WithInteger("desiredModelUnits", m_desiredModelUnits);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ProvisionedModelStatusMapper::GetNameForProvisionedModelStatus(m_status));
  }

  if(m_commitmentDurationHasBeenSet)
  {
   payload.WithString("commitmentDuration", CommitmentDurationMapper::GetNameForCommitmentDuration(m_commitmentDuration));
  }

  if(m_commitmentExpirationTimeHasBeenSet)
  {
   payload.WithString("commitmentExpirationTime", m_commitmentExpirationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithString("lastModifiedTime", m_lastModifiedTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
