/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

KeyUsage::KeyUsage(JsonView jsonValue) : 
    m_name(KeyUsageName::NOT_SET),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

KeyUsage& KeyUsage::operator =(JsonView jsonValue)
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
