/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageFailure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ImageFailure::ImageFailure() : 
    m_imageIdHasBeenSet(false),
    m_failureCode(ImageFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

ImageFailure::ImageFailure(JsonView jsonValue) : 
    m_imageIdHasBeenSet(false),
    m_failureCode(ImageFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

ImageFailure& ImageFailure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageId"))
  {
    m_imageId = jsonValue.GetObject("imageId");

    m_imageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = ImageFailureCodeMapper::GetImageFailureCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageFailure::Jsonize() const
{
  JsonValue payload;

  if(m_imageIdHasBeenSet)
  {
   payload.WithObject("imageId", m_imageId.Jsonize());

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", ImageFailureCodeMapper::GetNameForImageFailureCode(m_failureCode));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
