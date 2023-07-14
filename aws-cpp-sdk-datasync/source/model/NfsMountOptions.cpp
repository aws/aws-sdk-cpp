/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/NfsMountOptions.h>
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

NfsMountOptions::NfsMountOptions() : 
    m_version(NfsVersion::NOT_SET),
    m_versionHasBeenSet(false)
{
}

NfsMountOptions::NfsMountOptions(JsonView jsonValue) : 
    m_version(NfsVersion::NOT_SET),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

NfsMountOptions& NfsMountOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = NfsVersionMapper::GetNfsVersionForName(jsonValue.GetString("Version"));

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue NfsMountOptions::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", NfsVersionMapper::GetNameForNfsVersion(m_version));
  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
