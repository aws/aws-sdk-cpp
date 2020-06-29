/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DatasetImportJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ForecastService
{
namespace Model
{

DatasetImportJobSummary::DatasetImportJobSummary() : 
    m_datasetImportJobArnHasBeenSet(false),
    m_datasetImportJobNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
}

DatasetImportJobSummary::DatasetImportJobSummary(JsonView jsonValue) : 
    m_datasetImportJobArnHasBeenSet(false),
    m_datasetImportJobNameHasBeenSet(false),
    m_dataSourceHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModificationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetImportJobSummary& DatasetImportJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DatasetImportJobArn"))
  {
    m_datasetImportJobArn = jsonValue.GetString("DatasetImportJobArn");

    m_datasetImportJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetImportJobName"))
  {
    m_datasetImportJobName = jsonValue.GetString("DatasetImportJobName");

    m_datasetImportJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSource"))
  {
    m_dataSource = jsonValue.GetObject("DataSource");

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

    m_lastModificationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetImportJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_datasetImportJobArnHasBeenSet)
  {
   payload.WithString("DatasetImportJobArn", m_datasetImportJobArn);

  }

  if(m_datasetImportJobNameHasBeenSet)
  {
   payload.WithString("DatasetImportJobName", m_datasetImportJobName);

  }

  if(m_dataSourceHasBeenSet)
  {
   payload.WithObject("DataSource", m_dataSource.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModificationTimeHasBeenSet)
  {
   payload.WithDouble("LastModificationTime", m_lastModificationTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ForecastService
} // namespace Aws
