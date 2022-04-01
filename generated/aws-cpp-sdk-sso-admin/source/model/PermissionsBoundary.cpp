/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/PermissionsBoundary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSOAdmin
{
namespace Model
{

PermissionsBoundary::PermissionsBoundary() : 
    m_customerManagedPolicyReferenceHasBeenSet(false),
    m_managedPolicyArnHasBeenSet(false)
{
}

PermissionsBoundary::PermissionsBoundary(JsonView jsonValue) : 
    m_customerManagedPolicyReferenceHasBeenSet(false),
    m_managedPolicyArnHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionsBoundary& PermissionsBoundary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomerManagedPolicyReference"))
  {
    m_customerManagedPolicyReference = jsonValue.GetObject("CustomerManagedPolicyReference");

    m_customerManagedPolicyReferenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedPolicyArn"))
  {
    m_managedPolicyArn = jsonValue.GetString("ManagedPolicyArn");

    m_managedPolicyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionsBoundary::Jsonize() const
{
  JsonValue payload;

  if(m_customerManagedPolicyReferenceHasBeenSet)
  {
   payload.WithObject("CustomerManagedPolicyReference", m_customerManagedPolicyReference.Jsonize());

  }

  if(m_managedPolicyArnHasBeenSet)
  {
   payload.WithString("ManagedPolicyArn", m_managedPolicyArn);

  }

  return payload;
}

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
