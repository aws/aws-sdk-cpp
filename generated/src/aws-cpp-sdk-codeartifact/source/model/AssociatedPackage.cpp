/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/AssociatedPackage.h>
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

AssociatedPackage::AssociatedPackage() : 
    m_format(PackageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_associationType(PackageGroupAssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false)
{
}

AssociatedPackage::AssociatedPackage(JsonView jsonValue) : 
    m_format(PackageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_associationType(PackageGroupAssociationType::NOT_SET),
    m_associationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AssociatedPackage& AssociatedPackage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("format"))
  {
    m_format = PackageFormatMapper::GetPackageFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("associationType"))
  {
    m_associationType = PackageGroupAssociationTypeMapper::GetPackageGroupAssociationTypeForName(jsonValue.GetString("associationType"));

    m_associationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AssociatedPackage::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", PackageFormatMapper::GetNameForPackageFormat(m_format));
  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_packageHasBeenSet)
  {
   payload.WithString("package", m_package);

  }

  if(m_associationTypeHasBeenSet)
  {
   payload.WithString("associationType", PackageGroupAssociationTypeMapper::GetNameForPackageGroupAssociationType(m_associationType));
  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
