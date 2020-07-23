/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/ImagePermission.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

ImagePermission::ImagePermission() : 
    m_sharedAccountIdHasBeenSet(false)
{
}

ImagePermission::ImagePermission(JsonView jsonValue) : 
    m_sharedAccountIdHasBeenSet(false)
{
  *this = jsonValue;
}

ImagePermission& ImagePermission::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SharedAccountId"))
  {
    m_sharedAccountId = jsonValue.GetString("SharedAccountId");

    m_sharedAccountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ImagePermission::Jsonize() const
{
  JsonValue payload;

  if(m_sharedAccountIdHasBeenSet)
  {
   payload.WithString("SharedAccountId", m_sharedAccountId);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
