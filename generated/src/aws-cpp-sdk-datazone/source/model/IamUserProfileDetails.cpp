/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/IamUserProfileDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

IamUserProfileDetails::IamUserProfileDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

IamUserProfileDetails& IamUserProfileDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");
    m_principalIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IamUserProfileDetails::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
