/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/RevisionEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

RevisionEntry::RevisionEntry() : 
    m_arnHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_finalized(false),
    m_finalizedHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_revocationCommentHasBeenSet(false),
    m_revoked(false),
    m_revokedHasBeenSet(false),
    m_revokedAtHasBeenSet(false)
{
}

RevisionEntry::RevisionEntry(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_finalized(false),
    m_finalizedHasBeenSet(false),
    m_idHasBeenSet(false),
    m_sourceIdHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_revocationCommentHasBeenSet(false),
    m_revoked(false),
    m_revokedHasBeenSet(false),
    m_revokedAtHasBeenSet(false)
{
  *this = jsonValue;
}

RevisionEntry& RevisionEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comment"))
  {
    m_comment = jsonValue.GetString("Comment");

    m_commentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Finalized"))
  {
    m_finalized = jsonValue.GetBool("Finalized");

    m_finalizedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceId"))
  {
    m_sourceId = jsonValue.GetString("SourceId");

    m_sourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevocationComment"))
  {
    m_revocationComment = jsonValue.GetString("RevocationComment");

    m_revocationCommentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Revoked"))
  {
    m_revoked = jsonValue.GetBool("Revoked");

    m_revokedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevokedAt"))
  {
    m_revokedAt = jsonValue.GetString("RevokedAt");

    m_revokedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue RevisionEntry::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_commentHasBeenSet)
  {
   payload.WithString("Comment", m_comment);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_finalizedHasBeenSet)
  {
   payload.WithBool("Finalized", m_finalized);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_sourceIdHasBeenSet)
  {
   payload.WithString("SourceId", m_sourceId);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_revocationCommentHasBeenSet)
  {
   payload.WithString("RevocationComment", m_revocationComment);

  }

  if(m_revokedHasBeenSet)
  {
   payload.WithBool("Revoked", m_revoked);

  }

  if(m_revokedAtHasBeenSet)
  {
   payload.WithString("RevokedAt", m_revokedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
