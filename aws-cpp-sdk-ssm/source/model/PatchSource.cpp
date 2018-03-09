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

PatchSource::PatchSource(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_productsHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
  *this = jsonValue;
}

PatchSource& PatchSource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Products"))
  {
    Array<JsonValue> productsJsonList = jsonValue.GetArray("Products");
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
   Array<JsonValue> productsJsonList(m_products.size());
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
