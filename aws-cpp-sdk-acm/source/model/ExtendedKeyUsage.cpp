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

#include <aws/acm/model/ExtendedKeyUsage.h>
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

ExtendedKeyUsage::ExtendedKeyUsage() : 
    m_name(ExtendedKeyUsageName::NOT_SET),
    m_nameHasBeenSet(false),
    m_oIDHasBeenSet(false)
{
}

ExtendedKeyUsage::ExtendedKeyUsage(const JsonValue& jsonValue) : 
    m_name(ExtendedKeyUsageName::NOT_SET),
    m_nameHasBeenSet(false),
    m_oIDHasBeenSet(false)
{
  *this = jsonValue;
}

ExtendedKeyUsage& ExtendedKeyUsage::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = ExtendedKeyUsageNameMapper::GetExtendedKeyUsageNameForName(jsonValue.GetString("Name"));

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OID"))
  {
    m_oID = jsonValue.GetString("OID");

    m_oIDHasBeenSet = true;
  }

  return *this;
}

JsonValue ExtendedKeyUsage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", ExtendedKeyUsageNameMapper::GetNameForExtendedKeyUsageName(m_name));
  }

  if(m_oIDHasBeenSet)
  {
   payload.WithString("OID", m_oID);

  }

  return payload;
}

} // namespace Model
} // namespace ACM
} // namespace Aws
