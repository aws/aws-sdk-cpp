/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/TimeSeriesSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

TimeSeriesSummary::TimeSeriesSummary() : 
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_timeSeriesIdHasBeenSet(false),
    m_dataType(PropertyDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_dataTypeSpecHasBeenSet(false),
    m_timeSeriesCreationDateHasBeenSet(false),
    m_timeSeriesLastUpdateDateHasBeenSet(false),
    m_timeSeriesArnHasBeenSet(false)
{
}

TimeSeriesSummary::TimeSeriesSummary(JsonView jsonValue) : 
    m_assetIdHasBeenSet(false),
    m_propertyIdHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_timeSeriesIdHasBeenSet(false),
    m_dataType(PropertyDataType::NOT_SET),
    m_dataTypeHasBeenSet(false),
    m_dataTypeSpecHasBeenSet(false),
    m_timeSeriesCreationDateHasBeenSet(false),
    m_timeSeriesLastUpdateDateHasBeenSet(false),
    m_timeSeriesArnHasBeenSet(false)
{
  *this = jsonValue;
}

TimeSeriesSummary& TimeSeriesSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("assetId"))
  {
    m_assetId = jsonValue.GetString("assetId");

    m_assetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("propertyId"))
  {
    m_propertyId = jsonValue.GetString("propertyId");

    m_propertyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");

    m_aliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeSeriesId"))
  {
    m_timeSeriesId = jsonValue.GetString("timeSeriesId");

    m_timeSeriesIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataType"))
  {
    m_dataType = PropertyDataTypeMapper::GetPropertyDataTypeForName(jsonValue.GetString("dataType"));

    m_dataTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataTypeSpec"))
  {
    m_dataTypeSpec = jsonValue.GetString("dataTypeSpec");

    m_dataTypeSpecHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeSeriesCreationDate"))
  {
    m_timeSeriesCreationDate = jsonValue.GetDouble("timeSeriesCreationDate");

    m_timeSeriesCreationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeSeriesLastUpdateDate"))
  {
    m_timeSeriesLastUpdateDate = jsonValue.GetDouble("timeSeriesLastUpdateDate");

    m_timeSeriesLastUpdateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeSeriesArn"))
  {
    m_timeSeriesArn = jsonValue.GetString("timeSeriesArn");

    m_timeSeriesArnHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeSeriesSummary::Jsonize() const
{
  JsonValue payload;

  if(m_assetIdHasBeenSet)
  {
   payload.WithString("assetId", m_assetId);

  }

  if(m_propertyIdHasBeenSet)
  {
   payload.WithString("propertyId", m_propertyId);

  }

  if(m_aliasHasBeenSet)
  {
   payload.WithString("alias", m_alias);

  }

  if(m_timeSeriesIdHasBeenSet)
  {
   payload.WithString("timeSeriesId", m_timeSeriesId);

  }

  if(m_dataTypeHasBeenSet)
  {
   payload.WithString("dataType", PropertyDataTypeMapper::GetNameForPropertyDataType(m_dataType));
  }

  if(m_dataTypeSpecHasBeenSet)
  {
   payload.WithString("dataTypeSpec", m_dataTypeSpec);

  }

  if(m_timeSeriesCreationDateHasBeenSet)
  {
   payload.WithDouble("timeSeriesCreationDate", m_timeSeriesCreationDate.SecondsWithMSPrecision());
  }

  if(m_timeSeriesLastUpdateDateHasBeenSet)
  {
   payload.WithDouble("timeSeriesLastUpdateDate", m_timeSeriesLastUpdateDate.SecondsWithMSPrecision());
  }

  if(m_timeSeriesArnHasBeenSet)
  {
   payload.WithString("timeSeriesArn", m_timeSeriesArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
