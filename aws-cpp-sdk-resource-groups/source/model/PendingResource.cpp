/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/PendingResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

PendingResource::PendingResource() : 
    m_resourceArnHasBeenSet(false)
{
}

PendingResource::PendingResource(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

PendingResource& PendingResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
