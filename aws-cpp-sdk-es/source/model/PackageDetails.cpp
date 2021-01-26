/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/PackageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

PackageDetails::PackageDetails() : 
    m_packageIDHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageType(PackageType::NOT_SET),
    m_packageTypeHasBeenSet(false),
    m_packageDescriptionHasBeenSet(false),
    m_packageStatus(PackageStatus::NOT_SET),
    m_packageStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_availablePackageVersionHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
}

PackageDetails::PackageDetails(JsonView jsonValue) : 
    m_packageIDHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageType(PackageType::NOT_SET),
    m_packageTypeHasBeenSet(false),
    m_packageDescriptionHasBeenSet(false),
    m_packageStatus(PackageStatus::NOT_SET),
    m_packageStatusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_availablePackageVersionHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

PackageDetails& PackageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PackageID"))
  {
    m_packageID = jsonValue.GetString("PackageID");

    m_packageIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageType"))
  {
    m_packageType = PackageTypeMapper::GetPackageTypeForName(jsonValue.GetString("PackageType"));

    m_packageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageDescription"))
  {
    m_packageDescription = jsonValue.GetString("PackageDescription");

    m_packageDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PackageStatus"))
  {
    m_packageStatus = PackageStatusMapper::GetPackageStatusForName(jsonValue.GetString("PackageStatus"));

    m_packageStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailablePackageVersion"))
  {
    m_availablePackageVersion = jsonValue.GetString("AvailablePackageVersion");

    m_availablePackageVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");

    m_errorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_packageIDHasBeenSet)
  {
   payload.WithString("PackageID", m_packageID);

  }

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("PackageName", m_packageName);

  }

  if(m_packageTypeHasBeenSet)
  {
   payload.WithString("PackageType", PackageTypeMapper::GetNameForPackageType(m_packageType));
  }

  if(m_packageDescriptionHasBeenSet)
  {
   payload.WithString("PackageDescription", m_packageDescription);

  }

  if(m_packageStatusHasBeenSet)
  {
   payload.WithString("PackageStatus", PackageStatusMapper::GetNameForPackageStatus(m_packageStatus));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_availablePackageVersionHasBeenSet)
  {
   payload.WithString("AvailablePackageVersion", m_availablePackageVersion);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("ErrorDetails", m_errorDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
