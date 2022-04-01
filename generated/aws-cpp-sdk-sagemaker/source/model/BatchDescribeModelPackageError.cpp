/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/BatchDescribeModelPackageError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

BatchDescribeModelPackageError::BatchDescribeModelPackageError() : 
    m_errorCodeHasBeenSet(false),
    m_errorResponseHasBeenSet(false)
{
}

BatchDescribeModelPackageError::BatchDescribeModelPackageError(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorResponseHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDescribeModelPackageError& BatchDescribeModelPackageError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorResponse"))
  {
    m_errorResponse = jsonValue.GetString("ErrorResponse");

    m_errorResponseHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDescribeModelPackageError::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorResponseHasBeenSet)
  {
   payload.WithString("ErrorResponse", m_errorResponse);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
