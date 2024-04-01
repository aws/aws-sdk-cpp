/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UserJobsFirst.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

UserJobsFirst::UserJobsFirst() : 
    m_userIdentityIdHasBeenSet(false)
{
}

UserJobsFirst::UserJobsFirst(JsonView jsonValue) : 
    m_userIdentityIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserJobsFirst& UserJobsFirst::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userIdentityId"))
  {
    m_userIdentityId = jsonValue.GetString("userIdentityId");

    m_userIdentityIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserJobsFirst::Jsonize() const
{
  JsonValue payload;

  if(m_userIdentityIdHasBeenSet)
  {
   payload.WithString("userIdentityId", m_userIdentityId);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
