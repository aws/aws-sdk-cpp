/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PackageImportJobOutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Panorama
{
namespace Model
{

PackageImportJobOutputConfig::PackageImportJobOutputConfig() : 
    m_packageVersionOutputConfigHasBeenSet(false)
{
}

PackageImportJobOutputConfig::PackageImportJobOutputConfig(JsonView jsonValue) : 
    m_packageVersionOutputConfigHasBeenSet(false)
{
  *this = jsonValue;
}

PackageImportJobOutputConfig& PackageImportJobOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageVersionOutputConfig"))
  {
    m_packageVersionOutputConfig = jsonValue.GetObject("PackageVersionOutputConfig");

    m_packageVersionOutputConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageImportJobOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_packageVersionOutputConfigHasBeenSet)
  {
   payload.WithObject("PackageVersionOutputConfig", m_packageVersionOutputConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
