/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/PodIdentityAssociation.h>
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

PodIdentityAssociation::PodIdentityAssociation() : 
    m_clusterNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_serviceAccountHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
}

PodIdentityAssociation::PodIdentityAssociation(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_serviceAccountHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_associationArnHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
  *this = jsonValue;
}

PodIdentityAssociation& PodIdentityAssociation::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("modifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue PodIdentityAssociation::Jsonize() const
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

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_associationArnHasBeenSet)
  {
   payload.WithString("associationArn", m_associationArn);

  }

  if(m_associationIdHasBeenSet)
  {
   payload.WithString("associationId", m_associationId);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("modifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
