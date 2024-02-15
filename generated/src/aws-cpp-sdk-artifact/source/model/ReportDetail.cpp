/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/ReportDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Artifact
{
namespace Model
{

ReportDetail::ReportDetail() : 
    m_acceptanceType(AcceptanceType::NOT_SET),
    m_acceptanceTypeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_periodEndHasBeenSet(false),
    m_periodStartHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_sequenceNumber(0),
    m_sequenceNumberHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_state(PublishedState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_termArnHasBeenSet(false),
    m_uploadState(UploadState::NOT_SET),
    m_uploadStateHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
}

ReportDetail::ReportDetail(JsonView jsonValue) : 
    m_acceptanceType(AcceptanceType::NOT_SET),
    m_acceptanceTypeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_deletedAtHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_lastModifiedAtHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_periodEndHasBeenSet(false),
    m_periodStartHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_sequenceNumber(0),
    m_sequenceNumberHasBeenSet(false),
    m_seriesHasBeenSet(false),
    m_state(PublishedState::NOT_SET),
    m_stateHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_termArnHasBeenSet(false),
    m_uploadState(UploadState::NOT_SET),
    m_uploadStateHasBeenSet(false),
    m_version(0),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

ReportDetail& ReportDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("acceptanceType"))
  {
    m_acceptanceType = AcceptanceTypeMapper::GetAcceptanceTypeForName(jsonValue.GetString("acceptanceType"));

    m_acceptanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("category"))
  {
    m_category = jsonValue.GetString("category");

    m_categoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("companyName"))
  {
    m_companyName = jsonValue.GetString("companyName");

    m_companyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deletedAt"))
  {
    m_deletedAt = jsonValue.GetString("deletedAt");

    m_deletedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedAt"))
  {
    m_lastModifiedAt = jsonValue.GetString("lastModifiedAt");

    m_lastModifiedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("periodEnd"))
  {
    m_periodEnd = jsonValue.GetString("periodEnd");

    m_periodEndHasBeenSet = true;
  }

  if(jsonValue.ValueExists("periodStart"))
  {
    m_periodStart = jsonValue.GetString("periodStart");

    m_periodStartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("productName"))
  {
    m_productName = jsonValue.GetString("productName");

    m_productNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sequenceNumber"))
  {
    m_sequenceNumber = jsonValue.GetInt64("sequenceNumber");

    m_sequenceNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("series"))
  {
    m_series = jsonValue.GetString("series");

    m_seriesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = PublishedStateMapper::GetPublishedStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("termArn"))
  {
    m_termArn = jsonValue.GetString("termArn");

    m_termArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("uploadState"))
  {
    m_uploadState = UploadStateMapper::GetUploadStateForName(jsonValue.GetString("uploadState"));

    m_uploadStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInt64("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue ReportDetail::Jsonize() const
{
  JsonValue payload;

  if(m_acceptanceTypeHasBeenSet)
  {
   payload.WithString("acceptanceType", AcceptanceTypeMapper::GetNameForAcceptanceType(m_acceptanceType));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_categoryHasBeenSet)
  {
   payload.WithString("category", m_category);

  }

  if(m_companyNameHasBeenSet)
  {
   payload.WithString("companyName", m_companyName);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_deletedAtHasBeenSet)
  {
   payload.WithString("deletedAt", m_deletedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_lastModifiedAtHasBeenSet)
  {
   payload.WithString("lastModifiedAt", m_lastModifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_periodEndHasBeenSet)
  {
   payload.WithString("periodEnd", m_periodEnd.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_periodStartHasBeenSet)
  {
   payload.WithString("periodStart", m_periodStart.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_productNameHasBeenSet)
  {
   payload.WithString("productName", m_productName);

  }

  if(m_sequenceNumberHasBeenSet)
  {
   payload.WithInt64("sequenceNumber", m_sequenceNumber);

  }

  if(m_seriesHasBeenSet)
  {
   payload.WithString("series", m_series);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", PublishedStateMapper::GetNameForPublishedState(m_state));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_termArnHasBeenSet)
  {
   payload.WithString("termArn", m_termArn);

  }

  if(m_uploadStateHasBeenSet)
  {
   payload.WithString("uploadState", UploadStateMapper::GetNameForUploadState(m_uploadState));
  }

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Artifact
} // namespace Aws
