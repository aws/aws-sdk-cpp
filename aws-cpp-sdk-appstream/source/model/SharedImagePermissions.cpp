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
