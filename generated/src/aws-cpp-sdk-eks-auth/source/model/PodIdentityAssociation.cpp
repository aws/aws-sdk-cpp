/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks-auth/model/PodIdentityAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKSAuth
{
namespace Model
{

PodIdentityAssociation::PodIdentityAssociation() : 
    m_associationArnHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
}

PodIdentityAssociation::PodIdentityAssociation(JsonView jsonValue) : 
    m_associationArnHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
  *this = jsonValue;
}

PodIdentityAssociation& PodIdentityAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associationArn"))
  {
    m_associationArn = jsonValue.GetString("associationArn");

    m_associationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associationId"))
  {
    m_associationId = jsonValue.GetString("associationId");

    m_associationIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PodIdentityAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_associationArnHasBeenSet)
  {
   payload.WithString("associationArn", m_associationArn);

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

  }

  return payload;
}

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
