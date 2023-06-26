/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageOriginConfiguration.h>
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

PackageOriginConfiguration::PackageOriginConfiguration() : 
    m_restrictionsHasBeenSet(false)
{
}

PackageOriginConfiguration::PackageOriginConfiguration(JsonView jsonValue) : 
    m_restrictionsHasBeenSet(false)
{
  *this = jsonValue;
}

PackageOriginConfiguration& PackageOriginConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("restrictions"))
  {
    m_restrictions = jsonValue.GetObject("restrictions");

    m_restrictionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageOriginConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_restrictionsHasBeenSet)
  {
   payload.WithObject("restrictions", m_restrictions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
