/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchPutAssetPropertyError.h>
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

BatchPutAssetPropertyError::BatchPutAssetPropertyError() : 
    m_errorCode(BatchPutAssetPropertyValueErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_timestampsHasBeenSet(false)
{
}

BatchPutAssetPropertyError::BatchPutAssetPropertyError(JsonView jsonValue) : 
    m_errorCode(BatchPutAssetPropertyValueErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_timestampsHasBeenSet(false)
{
  *this = jsonValue;
}

BatchPutAssetPropertyError& BatchPutAssetPropertyError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = BatchPutAssetPropertyValueErrorCodeMapper::GetBatchPutAssetPropertyValueErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timestamps"))
  {
    Aws::Utils::Array<JsonView> timestampsJsonList = jsonValue.GetArray("timestamps");
    for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
    {
      m_timestamps.push_back(timestampsJsonList[timestampsIndex].AsObject());
    }
    m_timestampsHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchPutAssetPropertyError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", BatchPutAssetPropertyValueErrorCodeMapper::GetNameForBatchPutAssetPropertyValueErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_timestampsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> timestampsJsonList(m_timestamps.size());
   for(unsigned timestampsIndex = 0; timestampsIndex < timestampsJsonList.GetLength(); ++timestampsIndex)
   {
     timestampsJsonList[timestampsIndex].AsObject(m_timestamps[timestampsIndex].Jsonize());
   }
   payload.WithArray("timestamps", std::move(timestampsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
