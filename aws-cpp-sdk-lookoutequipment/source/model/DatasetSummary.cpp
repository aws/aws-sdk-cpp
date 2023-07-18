/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DatasetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

DatasetSummary::DatasetSummary() : 
    m_datasetNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

DatasetSummary::DatasetSummary(JsonView jsonValue) : 
    m_datasetNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetSummary& DatasetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

    m_datasetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

    m_datasetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
