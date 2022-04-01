/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/VirtualObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

VirtualObject::VirtualObject() : 
    m_uriHasBeenSet(false),
    m_eTagHasBeenSet(false)
{
}

VirtualObject::VirtualObject(JsonView jsonValue) : 
    m_uriHasBeenSet(false),
    m_eTagHasBeenSet(false)
{
  *this = jsonValue;
}

VirtualObject& VirtualObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

    m_eTagHasBeenSet = true;
  }

  return *this;
}

JsonValue VirtualObject::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("ETag", m_eTag);

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
