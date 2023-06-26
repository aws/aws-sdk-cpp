/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/LegalHold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

LegalHold::LegalHold() : 
    m_titleHasBeenSet(false),
    m_status(LegalHoldStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_legalHoldIdHasBeenSet(false),
    m_legalHoldArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_cancellationDateHasBeenSet(false)
{
}

LegalHold::LegalHold(JsonView jsonValue) : 
    m_titleHasBeenSet(false),
    m_status(LegalHoldStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_legalHoldIdHasBeenSet(false),
    m_legalHoldArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_cancellationDateHasBeenSet(false)
{
  *this = jsonValue;
}

LegalHold& LegalHold::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Title"))
  {
    m_title = jsonValue.GetString("Title");

    m_titleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = LegalHoldStatusMapper::GetLegalHoldStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LegalHoldId"))
  {
    m_legalHoldId = jsonValue.GetString("LegalHoldId");

    m_legalHoldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LegalHoldArn"))
  {
    m_legalHoldArn = jsonValue.GetString("LegalHoldArn");

    m_legalHoldArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CancellationDate"))
  {
    m_cancellationDate = jsonValue.GetDouble("CancellationDate");

    m_cancellationDateHasBeenSet = true;
  }

  return *this;
}

JsonValue LegalHold::Jsonize() const
{
  JsonValue payload;

  if(m_titleHasBeenSet)
  {
   payload.WithString("Title", m_title);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", LegalHoldStatusMapper::GetNameForLegalHoldStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_legalHoldIdHasBeenSet)
  {
   payload.WithString("LegalHoldId", m_legalHoldId);

  }

  if(m_legalHoldArnHasBeenSet)
  {
   payload.WithString("LegalHoldArn", m_legalHoldArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_cancellationDateHasBeenSet)
  {
   payload.WithDouble("CancellationDate", m_cancellationDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
