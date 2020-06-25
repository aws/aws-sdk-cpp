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

#include <aws/glue/model/DecimalNumber.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DecimalNumber::DecimalNumber() : 
    m_unscaledValueHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false)
{
}

DecimalNumber::DecimalNumber(JsonView jsonValue) : 
    m_unscaledValueHasBeenSet(false),
    m_scale(0),
    m_scaleHasBeenSet(false)
{
  *this = jsonValue;
}

DecimalNumber& DecimalNumber::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UnscaledValue"))
  {
    m_unscaledValue = HashingUtils::Base64Decode(jsonValue.GetString("UnscaledValue"));
    m_unscaledValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Scale"))
  {
    m_scale = jsonValue.GetInteger("Scale");

    m_scaleHasBeenSet = true;
  }

  return *this;
}

JsonValue DecimalNumber::Jsonize() const
{
  JsonValue payload;

  if(m_unscaledValueHasBeenSet)
  {
   payload.WithString("UnscaledValue", HashingUtils::Base64Encode(m_unscaledValue));
  }

  if(m_scaleHasBeenSet)
  {
   payload.WithInteger("Scale", m_scale);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
