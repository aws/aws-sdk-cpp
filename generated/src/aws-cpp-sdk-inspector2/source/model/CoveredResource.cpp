/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CoveredResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

CoveredResource::CoveredResource() : 
    m_accountIdHasBeenSet(false),
    m_lastScannedAtHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceMetadataHasBeenSet(false),
    m_resourceType(CoverageResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_scanType(ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false)
{
}

CoveredResource::CoveredResource(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_lastScannedAtHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceMetadataHasBeenSet(false),
    m_resourceType(CoverageResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_scanStatusHasBeenSet(false),
    m_scanType(ScanType::NOT_SET),
    m_scanTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CoveredResource& CoveredResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastScannedAt"))
  {
    m_lastScannedAt = jsonValue.GetDouble("lastScannedAt");

    m_lastScannedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceMetadata"))
  {
    m_resourceMetadata = jsonValue.GetObject("resourceMetadata");

    m_resourceMetadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = CoverageResourceTypeMapper::GetCoverageResourceTypeForName(jsonValue.GetString("resourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanStatus"))
  {
    m_scanStatus = jsonValue.GetObject("scanStatus");

    m_scanStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanType"))
  {
    m_scanType = ScanTypeMapper::GetScanTypeForName(jsonValue.GetString("scanType"));

    m_scanTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CoveredResource::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_lastScannedAtHasBeenSet)
  {
   payload.WithDouble("lastScannedAt", m_lastScannedAt.SecondsWithMSPrecision());
  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_resourceMetadataHasBeenSet)
  {
   payload.WithObject("resourceMetadata", m_resourceMetadata.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", CoverageResourceTypeMapper::GetNameForCoverageResourceType(m_resourceType));
  }

  if(m_scanStatusHasBeenSet)
  {
   payload.WithObject("scanStatus", m_scanStatus.Jsonize());

  }

  if(m_scanTypeHasBeenSet)
  {
   payload.WithString("scanType", ScanTypeMapper::GetNameForScanType(m_scanType));
  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
