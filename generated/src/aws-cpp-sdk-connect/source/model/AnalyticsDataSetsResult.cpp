/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AnalyticsDataSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

AnalyticsDataSetsResult::AnalyticsDataSetsResult(JsonView jsonValue)
{
  *this = jsonValue;
}

AnalyticsDataSetsResult& AnalyticsDataSetsResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");
    m_dataSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSetName"))
  {
    m_dataSetName = jsonValue.GetString("DataSetName");
    m_dataSetNameHasBeenSet = true;
  }
  return *this;
}

JsonValue AnalyticsDataSetsResult::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_dataSetNameHasBeenSet)
  {
   payload.WithString("DataSetName", m_dataSetName);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
