/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/PatchSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

PatchSource::PatchSource() : 
    m_nameHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

PatchSource::PatchSource(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
  *this = jsonValue;
}

PatchSource& PatchSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Products"))
  {
    Aws::Utils::Array<JsonView> productsJsonList = jsonValue.GetArray("Products");
    for(unsigned productsIndex = 0; productsIndex < productsJsonList.GetLength(); ++productsIndex)
    {
      m_products.push_back(productsJsonList[productsIndex].AsString());
    }
    m_productsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetString("Configuration");

    m_configurationHasBeenSet = true;
  }

  return *this;
}

JsonValue PatchSource::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_productsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> productsJsonList(m_products.size());
   for(unsigned productsIndex = 0; productsIndex < productsJsonList.GetLength(); ++productsIndex)
   {
     productsJsonList[productsIndex].AsString(m_products[productsIndex]);
   }
   payload.WithArray("Products", std::move(productsJsonList));

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithString("Configuration", m_configuration);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
