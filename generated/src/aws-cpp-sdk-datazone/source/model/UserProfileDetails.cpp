/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/UserProfileDetails.h>
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

UserProfileDetails::UserProfileDetails() : 
    m_iamHasBeenSet(false),
    m_ssoHasBeenSet(false)
{
}

UserProfileDetails::UserProfileDetails(JsonView jsonValue) : 
    m_iamHasBeenSet(false),
    m_ssoHasBeenSet(false)
{
  *this = jsonValue;
}

UserProfileDetails& UserProfileDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iam"))
  {
    m_iam = jsonValue.GetObject("iam");

    m_iamHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sso"))
  {
    m_sso = jsonValue.GetObject("sso");

    m_ssoHasBeenSet = true;
  }

  return *this;
}

JsonValue UserProfileDetails::Jsonize() const
{
  JsonValue payload;

  if(m_iamHasBeenSet)
  {
   payload.WithObject("iam", m_iam.Jsonize());

  }

  if(m_ssoHasBeenSet)
  {
   payload.WithObject("sso", m_sso.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
