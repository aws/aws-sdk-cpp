/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/ErrorCause.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace HealthLake
{
namespace Model
{

ErrorCause::ErrorCause(JsonView jsonValue)
{
  *this = jsonValue;
}

ErrorCause& ErrorCause::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ErrorCategory"))
  {
    m_errorCategory = ErrorCategoryMapper::GetErrorCategoryForName(jsonValue.GetString("ErrorCategory"));
    m_errorCategoryHasBeenSet = true;
  }
  return *this;
}

JsonValue ErrorCause::Jsonize() const
{
  JsonValue payload;

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorCategoryHasBeenSet)
  {
   payload.WithString("ErrorCategory", ErrorCategoryMapper::GetNameForErrorCategory(m_errorCategory));
  }

  return payload;
}

} // namespace Model
} // namespace HealthLake
} // namespace Aws
