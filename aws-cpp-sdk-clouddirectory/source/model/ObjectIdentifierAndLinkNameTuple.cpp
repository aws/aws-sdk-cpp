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

#include <aws/clouddirectory/model/ObjectIdentifierAndLinkNameTuple.h>
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

ObjectIdentifierAndLinkNameTuple::ObjectIdentifierAndLinkNameTuple() : 
    m_objectIdentifierHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
}

ObjectIdentifierAndLinkNameTuple::ObjectIdentifierAndLinkNameTuple(JsonView jsonValue) : 
    m_objectIdentifierHasBeenSet(false),
    m_linkNameHasBeenSet(false)
{
  *this = jsonValue;
}

ObjectIdentifierAndLinkNameTuple& ObjectIdentifierAndLinkNameTuple::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

    m_objectIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LinkName"))
  {
    m_linkName = jsonValue.GetString("LinkName");

    m_linkNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ObjectIdentifierAndLinkNameTuple::Jsonize() const
{
  JsonValue payload;

  if(m_objectIdentifierHasBeenSet)
  {
   payload.WithString("ObjectIdentifier", m_objectIdentifier);

  }

  if(m_linkNameHasBeenSet)
  {
   payload.WithString("LinkName", m_linkName);

  }

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
