﻿/*
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

#include <aws/guardduty/model/ProductCode.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ProductCode::ProductCode() : 
    m_codeHasBeenSet(false),
    m_productTypeHasBeenSet(false)
{
}

ProductCode::ProductCode(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_productTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ProductCode& ProductCode::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = jsonValue.GetString("code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productType"))
  {
    m_productType = jsonValue.GetString("productType");

    m_productTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductCode::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", m_code);

  }

  if(m_productTypeHasBeenSet)
  {
   payload.WithString("productType", m_productType);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
