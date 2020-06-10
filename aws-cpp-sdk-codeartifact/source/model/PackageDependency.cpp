/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/codeartifact/model/PackageDependency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

PackageDependency::PackageDependency() : 
    m_namespaceHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_dependencyTypeHasBeenSet(false),
    m_versionRequirementHasBeenSet(false)
{
}

PackageDependency::PackageDependency(JsonView jsonValue) : 
    m_namespaceHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_dependencyTypeHasBeenSet(false),
    m_versionRequirementHasBeenSet(false)
{
  *this = jsonValue;
}

PackageDependency& PackageDependency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("package"))
  {
    m_package = jsonValue.GetString("package");

    m_packageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dependencyType"))
  {
    m_dependencyType = jsonValue.GetString("dependencyType");

    m_dependencyTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionRequirement"))
  {
    m_versionRequirement = jsonValue.GetString("versionRequirement");

    m_versionRequirementHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageDependency::Jsonize() const
{
  JsonValue payload;

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_packageHasBeenSet)
  {
   payload.WithString("package", m_package);

  }

  if(m_dependencyTypeHasBeenSet)
  {
   payload.WithString("dependencyType", m_dependencyType);

  }

  if(m_versionRequirementHasBeenSet)
  {
   payload.WithString("versionRequirement", m_versionRequirement);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
