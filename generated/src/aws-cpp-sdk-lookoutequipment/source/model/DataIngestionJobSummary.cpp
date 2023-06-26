/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DataIngestionJobSummary.h>
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

DataIngestionJobSummary::DataIngestionJobSummary() : 
    m_jobIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_ingestionInputConfigurationHasBeenSet(false),
    m_status(IngestionJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

DataIngestionJobSummary::DataIngestionJobSummary(JsonView jsonValue) : 
    m_jobIdHasBeenSet(false),
    m_datasetNameHasBeenSet(false),
    m_datasetArnHasBeenSet(false),
    m_ingestionInputConfigurationHasBeenSet(false),
    m_status(IngestionJobStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

DataIngestionJobSummary& DataIngestionJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

    m_jobIdHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("IngestionInputConfiguration"))
  {
    m_ingestionInputConfiguration = jsonValue.GetObject("IngestionInputConfiguration");

    m_ingestionInputConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IngestionJobStatusMapper::GetIngestionJobStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue DataIngestionJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("JobId", m_jobId);

  }

  if(m_datasetNameHasBeenSet)
  {
   payload.WithString("DatasetName", m_datasetName);

  }

  if(m_datasetArnHasBeenSet)
  {
   payload.WithString("DatasetArn", m_datasetArn);

  }

  if(m_ingestionInputConfigurationHasBeenSet)
  {
   payload.WithObject("IngestionInputConfiguration", m_ingestionInputConfiguration.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", IngestionJobStatusMapper::GetNameForIngestionJobStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
