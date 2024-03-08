/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/AuditEventPerformedBy.h>
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

AuditEventPerformedBy::AuditEventPerformedBy() : 
    m_iamPrincipalArnHasBeenSet(false),
    m_userHasBeenSet(false)
{
}

AuditEventPerformedBy::AuditEventPerformedBy(JsonView jsonValue) : 
    m_iamPrincipalArnHasBeenSet(false),
    m_userHasBeenSet(false)
{
  *this = jsonValue;
}

AuditEventPerformedBy& AuditEventPerformedBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("iamPrincipalArn"))
  {
    m_iamPrincipalArn = jsonValue.GetString("iamPrincipalArn");

    m_iamPrincipalArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("user"))
  {
    m_user = jsonValue.GetObject("user");

    m_userHasBeenSet = true;
  }

  return *this;
}

JsonValue AuditEventPerformedBy::Jsonize() const
{
  JsonValue payload;

  if(m_iamPrincipalArnHasBeenSet)
  {
   payload.WithString("iamPrincipalArn", m_iamPrincipalArn);

  }

  if(m_userHasBeenSet)
  {
   payload.WithObject("user", m_user.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
