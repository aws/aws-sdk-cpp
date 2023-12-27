/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/PodIdentityAssociationSummary.h>
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

PodIdentityAssociationSummary::PodIdentityAssociationSummary() : 
    m_clusterNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_serviceAccountHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
}

PodIdentityAssociationSummary::PodIdentityAssociationSummary(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_serviceAccountHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
  *this = jsonValue;
}

PodIdentityAssociationSummary& PodIdentityAssociationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceAccount"))
  {
    m_serviceAccount = jsonValue.GetString("serviceAccount");

    m_serviceAccountHasBeenSet = true;
  }

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

JsonValue PodIdentityAssociationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_serviceAccountHasBeenSet)
  {
   payload.WithString("serviceAccount", m_serviceAccount);

  }

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
} // namespace EKS
} // namespace Aws
