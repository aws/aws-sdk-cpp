/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/BatchDeleteImportDataError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

BatchDeleteImportDataError::BatchDeleteImportDataError() : 
    m_importTaskIdHasBeenSet(false),
    m_errorCode(BatchDeleteImportDataErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorDescriptionHasBeenSet(false)
{
}

BatchDeleteImportDataError::BatchDeleteImportDataError(JsonView jsonValue) : 
    m_importTaskIdHasBeenSet(false),
    m_errorCode(BatchDeleteImportDataErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDeleteImportDataError& BatchDeleteImportDataError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("importTaskId"))
  {
    m_importTaskId = jsonValue.GetString("importTaskId");

    m_importTaskIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = BatchDeleteImportDataErrorCodeMapper::GetBatchDeleteImportDataErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorDescription"))
  {
    m_errorDescription = jsonValue.GetString("errorDescription");

    m_errorDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDeleteImportDataError::Jsonize() const
{
  JsonValue payload;

  if(m_importTaskIdHasBeenSet)
  {
   payload.WithString("importTaskId", m_importTaskId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", BatchDeleteImportDataErrorCodeMapper::GetNameForBatchDeleteImportDataErrorCode(m_errorCode));
  }

  if(m_errorDescriptionHasBeenSet)
  {
   payload.WithString("errorDescription", m_errorDescription);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
