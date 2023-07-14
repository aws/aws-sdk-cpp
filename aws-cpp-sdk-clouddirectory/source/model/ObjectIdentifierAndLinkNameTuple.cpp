/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
