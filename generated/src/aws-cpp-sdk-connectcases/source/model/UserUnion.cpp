/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/UserUnion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCases
{
namespace Model
{

UserUnion::UserUnion() : 
    m_userArnHasBeenSet(false)
{
}

UserUnion::UserUnion(JsonView jsonValue) : 
    m_userArnHasBeenSet(false)
{
  *this = jsonValue;
}

UserUnion& UserUnion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

    m_userArnHasBeenSet = true;
  }

  return *this;
}

JsonValue UserUnion::Jsonize() const
{
  JsonValue payload;

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
