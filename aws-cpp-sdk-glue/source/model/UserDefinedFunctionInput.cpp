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

#include <aws/glue/model/UserDefinedFunctionInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

UserDefinedFunctionInput::UserDefinedFunctionInput() : 
    m_functionNameHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_ownerType(PrincipalType::NOT_SET),
    m_ownerTypeHasBeenSet(false),
    m_resourceUrisHasBeenSet(false)
{
}

UserDefinedFunctionInput::UserDefinedFunctionInput(const JsonValue& jsonValue) : 
    m_functionNameHasBeenSet(false),
    m_classNameHasBeenSet(false),
    m_ownerNameHasBeenSet(false),
    m_ownerType(PrincipalType::NOT_SET),
    m_ownerTypeHasBeenSet(false),
    m_resourceUrisHasBeenSet(false)
{
  *this = jsonValue;
}

UserDefinedFunctionInput& UserDefinedFunctionInput::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("FunctionName"))
  {
    m_functionName = jsonValue.GetString("FunctionName");

    m_functionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClassName"))
  {
    m_className = jsonValue.GetString("ClassName");

    m_classNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerName"))
  {
    m_ownerName = jsonValue.GetString("OwnerName");

    m_ownerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerType"))
  {
    m_ownerType = PrincipalTypeMapper::GetPrincipalTypeForName(jsonValue.GetString("OwnerType"));

    m_ownerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceUris"))
  {
    Array<JsonValue> resourceUrisJsonList = jsonValue.GetArray("ResourceUris");
    for(unsigned resourceUrisIndex = 0; resourceUrisIndex < resourceUrisJsonList.GetLength(); ++resourceUrisIndex)
    {
      m_resourceUris.push_back(resourceUrisJsonList[resourceUrisIndex].AsObject());
    }
    m_resourceUrisHasBeenSet = true;
  }

  return *this;
}

JsonValue UserDefinedFunctionInput::Jsonize() const
{
  JsonValue payload;

  if(m_functionNameHasBeenSet)
  {
   payload.WithString("FunctionName", m_functionName);

  }

  if(m_classNameHasBeenSet)
  {
   payload.WithString("ClassName", m_className);

  }

  if(m_ownerNameHasBeenSet)
  {
   payload.WithString("OwnerName", m_ownerName);

  }

  if(m_ownerTypeHasBeenSet)
  {
   payload.WithString("OwnerType", PrincipalTypeMapper::GetNameForPrincipalType(m_ownerType));
  }

  if(m_resourceUrisHasBeenSet)
  {
   Array<JsonValue> resourceUrisJsonList(m_resourceUris.size());
   for(unsigned resourceUrisIndex = 0; resourceUrisIndex < resourceUrisJsonList.GetLength(); ++resourceUrisIndex)
   {
     resourceUrisJsonList[resourceUrisIndex].AsObject(m_resourceUris[resourceUrisIndex].Jsonize());
   }
   payload.WithArray("ResourceUris", std::move(resourceUrisJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
