/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ErrorDetail::ErrorDetail(const JsonValue& jsonValue) : 
    m_detailedErrorCodeHasBeenSet(false),
    m_detailedErrorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorDetail& ErrorDetail::operator =(const JsonValue& jsonValue)
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
