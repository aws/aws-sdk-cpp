/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/SmbMountOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

SmbMountOptions::SmbMountOptions() : 
    m_version(SmbVersion::NOT_SET),
    m_versionHasBeenSet(false)
{
}

SmbMountOptions::SmbMountOptions(JsonView jsonValue) : 
    m_version(SmbVersion::NOT_SET),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

SmbMountOptions& SmbMountOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = SmbVersionMapper::GetSmbVersionForName(jsonValue.GetString("Version"));

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue SmbMountOptions::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", SmbVersionMapper::GetNameForSmbVersion(m_version));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
