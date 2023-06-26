/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ErrorInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

ErrorInfo::ErrorInfo() : 
    m_errorMessageHasBeenSet(false),
    m_errorType(ErrorDetails::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
}

ErrorInfo::ErrorInfo(JsonView jsonValue) : 
    m_errorMessageHasBeenSet(false),
    m_errorType(ErrorDetails::NOT_SET),
    m_errorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorInfo& ErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorType"))
  {
    m_errorType = ErrorDetailsMapper::GetErrorDetailsForName(jsonValue.GetString("errorType"));

    m_errorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithString("errorType", ErrorDetailsMapper::GetNameForErrorDetails(m_errorType));
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
