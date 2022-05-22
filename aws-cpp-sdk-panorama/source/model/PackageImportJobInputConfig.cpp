/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PackageImportJobInputConfig.h>
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

PackageImportJobInputConfig::PackageImportJobInputConfig() : 
    m_packageVersionInputConfigHasBeenSet(false)
{
}

PackageImportJobInputConfig::PackageImportJobInputConfig(JsonView jsonValue) : 
    m_packageVersionInputConfigHasBeenSet(false)
{
  *this = jsonValue;
}

PackageImportJobInputConfig& PackageImportJobInputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageVersionInputConfig"))
  {
    m_packageVersionInputConfig = jsonValue.GetObject("PackageVersionInputConfig");

    m_packageVersionInputConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageImportJobInputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_packageVersionInputConfigHasBeenSet)
  {
   payload.WithObject("PackageVersionInputConfig", m_packageVersionInputConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
