/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ExtendedKeyUsage::ExtendedKeyUsage(JsonView jsonValue) : 
    m_name(ExtendedKeyUsageName::NOT_SET),
    m_nameHasBeenSet(false),
    m_oIDHasBeenSet(false)
{
  *this = jsonValue;
}

ExtendedKeyUsage& ExtendedKeyUsage::operator =(JsonView jsonValue)
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
