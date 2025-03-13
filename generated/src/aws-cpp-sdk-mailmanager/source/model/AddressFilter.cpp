/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/AddressFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

AddressFilter::AddressFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

AddressFilter& AddressFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AddressPrefix"))
  {
    m_addressPrefix = jsonValue.GetString("AddressPrefix");
    m_addressPrefixHasBeenSet = true;
  }
  return *this;
}

JsonValue AddressFilter::Jsonize() const
{
  JsonValue payload;

  if(m_addressPrefixHasBeenSet)
  {
   payload.WithString("AddressPrefix", m_addressPrefix);

  }

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
