/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/IPSet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

IPSet::IPSet() : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iPAddressVersion(IPAddressVersion::NOT_SET),
    m_iPAddressVersionHasBeenSet(false),
    m_addressesHasBeenSet(false)
{
}

IPSet::IPSet(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iPAddressVersion(IPAddressVersion::NOT_SET),
    m_iPAddressVersionHasBeenSet(false),
    m_addressesHasBeenSet(false)
{
  *this = jsonValue;
}

IPSet& IPSet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IPAddressVersion"))
  {
    m_iPAddressVersion = IPAddressVersionMapper::GetIPAddressVersionForName(jsonValue.GetString("IPAddressVersion"));

    m_iPAddressVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Addresses"))
  {
    Aws::Utils::Array<JsonView> addressesJsonList = jsonValue.GetArray("Addresses");
    for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
    {
      m_addresses.push_back(addressesJsonList[addressesIndex].AsString());
    }
    m_addressesHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSet::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_iPAddressVersionHasBeenSet)
  {
   payload.WithString("IPAddressVersion", IPAddressVersionMapper::GetNameForIPAddressVersion(m_iPAddressVersion));
  }

  if(m_addressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addressesJsonList(m_addresses.size());
   for(unsigned addressesIndex = 0; addressesIndex < addressesJsonList.GetLength(); ++addressesIndex)
   {
     addressesJsonList[addressesIndex].AsString(m_addresses[addressesIndex]);
   }
   payload.WithArray("Addresses", std::move(addressesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
