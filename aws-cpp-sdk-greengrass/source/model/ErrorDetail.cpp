/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ErrorDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

ErrorDetail::ErrorDetail() : 
    m_detailedErrorCodeHasBeenSet(false),
    m_detailedErrorMessageHasBeenSet(false)
{
}

ErrorDetail::ErrorDetail(JsonView jsonValue) : 
    m_detailedErrorCodeHasBeenSet(false),
    m_detailedErrorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorDetail& ErrorDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetailedErrorCode"))
  {
    m_detailedErrorCode = jsonValue.GetString("DetailedErrorCode");

    m_detailedErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DetailedErrorMessage"))
  {
    m_detailedErrorMessage = jsonValue.GetString("DetailedErrorMessage");

    m_detailedErrorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorDetail::Jsonize() const
{
  JsonValue payload;

  if(m_detailedErrorCodeHasBeenSet)
  {
   payload.WithString("DetailedErrorCode", m_detailedErrorCode);

  }

  if(m_detailedErrorMessageHasBeenSet)
  {
   payload.WithString("DetailedErrorMessage", m_detailedErrorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
