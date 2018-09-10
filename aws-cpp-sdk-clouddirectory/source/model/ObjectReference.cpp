﻿/*
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

#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

ObjectReference::ObjectReference() : 
    m_selectorHasBeenSet(false)
{
}

ObjectReference::ObjectReference(JsonView jsonValue) : 
    m_selectorHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectReference& ObjectReference::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Selector"))
  {
    m_selector = jsonValue.GetString("Selector");

    m_selectorHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectReference::Jsonize() const
{
  JsonValue payload;

  if(m_selectorHasBeenSet)
  {
   payload.WithString("Selector", m_selector);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
