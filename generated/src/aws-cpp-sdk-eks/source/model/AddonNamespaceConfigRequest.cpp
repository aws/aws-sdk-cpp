/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/AddonNamespaceConfigRequest.h>
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

AddonNamespaceConfigRequest::AddonNamespaceConfigRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

AddonNamespaceConfigRequest& AddonNamespaceConfigRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  return *this;
}

JsonValue AddonNamespaceConfigRequest::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
