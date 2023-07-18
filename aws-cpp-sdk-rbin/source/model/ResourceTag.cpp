/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rbin/model/ResourceTag.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RecycleBin
{
namespace Model
{

ResourceTag::ResourceTag() : 
    m_resourceTagKeyHasBeenSet(false),
    m_resourceTagValueHasBeenSet(false)
{
}

ResourceTag::ResourceTag(JsonView jsonValue) : 
    m_resourceTagKeyHasBeenSet(false),
    m_resourceTagValueHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceTag& ResourceTag::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceTagKey"))
  {
    m_resourceTagKey = jsonValue.GetString("ResourceTagKey");

    m_resourceTagKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceTagValue"))
  {
    m_resourceTagValue = jsonValue.GetString("ResourceTagValue");

    m_resourceTagValueHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceTag::Jsonize() const
{
  JsonValue payload;

  if(m_resourceTagKeyHasBeenSet)
  {
   payload.WithString("ResourceTagKey", m_resourceTagKey);

  }

  if(m_resourceTagValueHasBeenSet)
  {
   payload.WithString("ResourceTagValue", m_resourceTagValue);

  }

  return payload;
}

} // namespace Model
} // namespace RecycleBin
} // namespace Aws
