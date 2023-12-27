/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks-auth/model/Subject.h>
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

Subject::Subject() : 
    m_namespaceHasBeenSet(false),
    m_serviceAccountHasBeenSet(false)
{
}

Subject::Subject(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false),
    m_serviceAccountHasBeenSet(false)
{
  *this = jsonValue;
}

Subject& Subject::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue Subject::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_serviceAccountHasBeenSet)
  {
   payload.WithString("serviceAccount", m_serviceAccount);

  }

  return payload;
}

} // namespace Model
} // namespace EKSAuth
} // namespace Aws
