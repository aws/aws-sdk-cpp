/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/PackageVersionOutputConfig.h>
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

PackageVersionOutputConfig::PackageVersionOutputConfig() : 
    m_markLatest(false),
    m_markLatestHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false)
{
}

PackageVersionOutputConfig::PackageVersionOutputConfig(JsonView jsonValue) : 
    m_markLatest(false),
    m_markLatestHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false)
{
  *this = jsonValue;
}

PackageVersionOutputConfig& PackageVersionOutputConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MarkLatest"))
  {
    m_markLatest = jsonValue.GetBool("MarkLatest");

    m_markLatestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageVersion"))
  {
    m_packageVersion = jsonValue.GetString("PackageVersion");

    m_packageVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageVersionOutputConfig::Jsonize() const
{
  JsonValue payload;

  if(m_markLatestHasBeenSet)
  {
   payload.WithBool("MarkLatest", m_markLatest);

  }

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageVersionHasBeenSet)
  {
   payload.WithString("PackageVersion", m_packageVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Panorama
} // namespace Aws
