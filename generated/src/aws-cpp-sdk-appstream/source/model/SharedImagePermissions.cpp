/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/SharedImagePermissions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

SharedImagePermissions::SharedImagePermissions() : 
    m_sharedAccountIdHasBeenSet(false),
    m_imagePermissionsHasBeenSet(false)
{
}

SharedImagePermissions::SharedImagePermissions(JsonView jsonValue) : 
    m_sharedAccountIdHasBeenSet(false),
    m_imagePermissionsHasBeenSet(false)
{
  *this = jsonValue;
}

SharedImagePermissions& SharedImagePermissions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sharedAccountId"))
  {
    m_sharedAccountId = jsonValue.GetString("sharedAccountId");

    m_sharedAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePermissions"))
  {
    m_imagePermissions = jsonValue.GetObject("imagePermissions");

    m_imagePermissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue SharedImagePermissions::Jsonize() const
{
  JsonValue payload;

  if(m_sharedAccountIdHasBeenSet)
  {
   payload.WithString("sharedAccountId", m_sharedAccountId);

  }

  if(m_imagePermissionsHasBeenSet)
  {
   payload.WithObject("imagePermissions", m_imagePermissions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
