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

#include <aws/acm/model/KeyUsage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACM
{
namespace Model
{

KeyUsage::KeyUsage() : 
    m_name(KeyUsageName::NOT_SET),
    m_nameHasBeenSet(false)
{
}

KeyUsage::KeyUsage(const JsonValue& jsonValue) : 
    m_name(KeyUsageName::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

KeyUsage& KeyUsage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = KeyUsageNameMapper::GetKeyUsageNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue KeyUsage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", KeyUsageNameMapper::GetNameForKeyUsageName(m_name));
  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
