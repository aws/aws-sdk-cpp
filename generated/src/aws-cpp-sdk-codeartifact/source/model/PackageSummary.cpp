﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageSummary.h>
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

PackageSummary::PackageSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

PackageSummary& PackageSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("originConfiguration"))
  {
    m_originConfiguration = jsonValue.GetObject("originConfiguration");
    m_originConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageSummary::Jsonize() const
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

  if(m_originConfigurationHasBeenSet)
  {
   payload.WithObject("originConfiguration", m_originConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
