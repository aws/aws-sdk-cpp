/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PackageVersionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

PackageVersionSummary::PackageVersionSummary() : 
    m_packageNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_status(PackageVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

PackageVersionSummary::PackageVersionSummary(JsonView jsonValue) : 
    m_packageNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_status(PackageVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

PackageVersionSummary& PackageVersionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("packageName"))
  {
    m_packageName = jsonValue.GetString("packageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("versionName"))
  {
    m_versionName = jsonValue.GetString("versionName");

    m_versionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PackageVersionStatusMapper::GetPackageVersionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageVersionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("packageName", m_packageName);

  }

  if(m_versionNameHasBeenSet)
  {
   payload.WithString("versionName", m_versionName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PackageVersionStatusMapper::GetNameForPackageVersionStatus(m_status));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
