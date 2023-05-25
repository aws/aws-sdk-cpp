/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DatasetFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DatasetFilter::DatasetFilter() : 
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false)
{
}

DatasetFilter::DatasetFilter(JsonView jsonValue) : 
    m_status(DatasetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_datasetType(DatasetType::NOT_SET),
    m_datasetTypeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_creationTimeBeforeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetFilter& DatasetFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DatasetType"))
  {
    m_datasetType = DatasetTypeMapper::GetDatasetTypeForName(jsonValue.GetString("DatasetType"));

    m_datasetTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimeAfter"))
  {
    m_creationTimeAfter = jsonValue.GetDouble("CreationTimeAfter");

    m_creationTimeAfterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTimeBefore"))
  {
    m_creationTimeBefore = jsonValue.GetDouble("CreationTimeBefore");

    m_creationTimeBeforeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", DatasetStatusMapper::GetNameForDatasetStatus(m_status));
  }

  if(m_datasetTypeHasBeenSet)
  {
   payload.WithString("DatasetType", DatasetTypeMapper::GetNameForDatasetType(m_datasetType));
  }

  if(m_creationTimeAfterHasBeenSet)
  {
   payload.WithDouble("CreationTimeAfter", m_creationTimeAfter.SecondsWithMSPrecision());
  }

  if(m_creationTimeBeforeHasBeenSet)
  {
   payload.WithDouble("CreationTimeBefore", m_creationTimeBefore.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
