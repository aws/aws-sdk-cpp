/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/DataGrantSummaryEntry.h>
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

DataGrantSummaryEntry::DataGrantSummaryEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

DataGrantSummaryEntry& DataGrantSummaryEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SenderPrincipal"))
  {
    m_senderPrincipal = jsonValue.GetString("SenderPrincipal");
    m_senderPrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReceiverPrincipal"))
  {
    m_receiverPrincipal = jsonValue.GetString("ReceiverPrincipal");
    m_receiverPrincipalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AcceptanceState"))
  {
    m_acceptanceState = DataGrantAcceptanceStateMapper::GetDataGrantAcceptanceStateForName(jsonValue.GetString("AcceptanceState"));
    m_acceptanceStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AcceptedAt"))
  {
    m_acceptedAt = jsonValue.GetString("AcceptedAt");
    m_acceptedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndsAt"))
  {
    m_endsAt = jsonValue.GetString("EndsAt");
    m_endsAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");
    m_dataSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceDataSetId"))
  {
    m_sourceDataSetId = jsonValue.GetString("SourceDataSetId");
    m_sourceDataSetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue DataGrantSummaryEntry::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_senderPrincipalHasBeenSet)
  {
   payload.WithString("SenderPrincipal", m_senderPrincipal);

  }

  if(m_receiverPrincipalHasBeenSet)
  {
   payload.WithString("ReceiverPrincipal", m_receiverPrincipal);

  }

  if(m_acceptanceStateHasBeenSet)
  {
   payload.WithString("AcceptanceState", DataGrantAcceptanceStateMapper::GetNameForDataGrantAcceptanceState(m_acceptanceState));
  }

  if(m_acceptedAtHasBeenSet)
  {
   payload.WithString("AcceptedAt", m_acceptedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endsAtHasBeenSet)
  {
   payload.WithString("EndsAt", m_endsAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_sourceDataSetIdHasBeenSet)
  {
   payload.WithString("SourceDataSetId", m_sourceDataSetId);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
