﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/AthenaError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

AthenaError::AthenaError() : 
    m_errorCategory(0),
    m_errorCategoryHasBeenSet(false),
    m_errorType(0),
    m_errorTypeHasBeenSet(false)
{
}

AthenaError::AthenaError(JsonView jsonValue) : 
    m_errorCategory(0),
    m_errorCategoryHasBeenSet(false),
    m_errorType(0),
    m_errorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AthenaError& AthenaError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCategory"))
  {
    m_errorCategory = jsonValue.GetInteger("ErrorCategory");

    m_errorCategoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorType"))
  {
    m_errorType = jsonValue.GetInteger("ErrorType");

    m_errorTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AthenaError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCategoryHasBeenSet)
  {
   payload.WithInteger("ErrorCategory", m_errorCategory);

  }

  if(m_errorTypeHasBeenSet)
  {
   payload.WithInteger("ErrorType", m_errorType);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
