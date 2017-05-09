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

#include <aws/lambda/model/AccountUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lambda
{
namespace Model
{

AccountUsage::AccountUsage() : 
    m_totalCodeSize(0),
    m_totalCodeSizeHasBeenSet(false),
    m_functionCount(0),
    m_functionCountHasBeenSet(false)
{
}

AccountUsage::AccountUsage(const JsonValue& jsonValue) : 
    m_totalCodeSize(0),
    m_totalCodeSizeHasBeenSet(false),
    m_functionCount(0),
    m_functionCountHasBeenSet(false)
{
  *this = jsonValue;
}

AccountUsage& AccountUsage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TotalCodeSize"))
  {
    m_totalCodeSize = jsonValue.GetInt64("TotalCodeSize");

    m_totalCodeSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FunctionCount"))
  {
    m_functionCount = jsonValue.GetInt64("FunctionCount");

    m_functionCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AccountUsage::Jsonize() const
{
  JsonValue payload;

  if(m_totalCodeSizeHasBeenSet)
  {
   payload.WithInt64("TotalCodeSize", m_totalCodeSize);

  }

  if(m_functionCountHasBeenSet)
  {
   payload.WithInt64("FunctionCount", m_functionCount);

  }

  return payload;
}

} // namespace Model
} // namespace Lambda
} // namespace Aws