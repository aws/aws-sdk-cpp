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

#include <aws/apigateway/model/DocumentationPart.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

DocumentationPart::DocumentationPart() : 
    m_idHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
}

DocumentationPart::DocumentationPart(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_propertiesHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentationPart& DocumentationPart::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetObject("location");

    m_locationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("properties"))
  {
    m_properties = jsonValue.GetString("properties");

    m_propertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentationPart::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithObject("location", m_location.Jsonize());

  }

  if(m_propertiesHasBeenSet)
  {
   payload.WithString("properties", m_properties);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws