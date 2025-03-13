/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonPodIdentityAssociations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

AddonPodIdentityAssociations::AddonPodIdentityAssociations(JsonView jsonValue)
{
  *this = jsonValue;
}

AddonPodIdentityAssociations& AddonPodIdentityAssociations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceAccount"))
  {
    m_serviceAccount = jsonValue.GetString("serviceAccount");
    m_serviceAccountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue AddonPodIdentityAssociations::Jsonize() const
{
  JsonValue payload;

  if(m_serviceAccountHasBeenSet)
  {
   payload.WithString("serviceAccount", m_serviceAccount);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
