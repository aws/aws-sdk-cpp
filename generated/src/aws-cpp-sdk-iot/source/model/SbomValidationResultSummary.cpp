/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/SbomValidationResultSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

SbomValidationResultSummary::SbomValidationResultSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

SbomValidationResultSummary& SbomValidationResultSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");
    m_fileNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("validationResult"))
  {
    m_validationResult = SbomValidationResultMapper::GetSbomValidationResultForName(jsonValue.GetString("validationResult"));
    m_validationResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = SbomValidationErrorCodeMapper::GetSbomValidationErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue SbomValidationResultSummary::Jsonize() const
{
  JsonValue payload;

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  if(m_validationResultHasBeenSet)
  {
   payload.WithString("validationResult", SbomValidationResultMapper::GetNameForSbomValidationResult(m_validationResult));
  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", SbomValidationErrorCodeMapper::GetNameForSbomValidationErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
