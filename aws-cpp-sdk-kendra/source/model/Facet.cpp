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

#include <aws/kendra/model/Facet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Facet::Facet() : 
    m_documentAttributeKeyHasBeenSet(false)
{
}

Facet::Facet(JsonView jsonValue) : 
    m_documentAttributeKeyHasBeenSet(false)
{
  *this = jsonValue;
}

Facet& Facet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttributeKey"))
  {
    m_documentAttributeKey = jsonValue.GetString("DocumentAttributeKey");

    m_documentAttributeKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue Facet::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeKeyHasBeenSet)
  {
   payload.WithString("DocumentAttributeKey", m_documentAttributeKey);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
