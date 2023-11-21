/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/MetadataTransferJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

MetadataTransferJobSummary::MetadataTransferJobSummary() : 
    m_metadataTransferJobIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false)
{
}

MetadataTransferJobSummary::MetadataTransferJobSummary(JsonView jsonValue) : 
    m_metadataTransferJobIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_updateDateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_progressHasBeenSet(false)
{
  *this = jsonValue;
}

MetadataTransferJobSummary& MetadataTransferJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("metadataTransferJobId"))
  {
    m_metadataTransferJobId = jsonValue.GetString("metadataTransferJobId");

    m_metadataTransferJobIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updateDateTime"))
  {
    m_updateDateTime = jsonValue.GetDouble("updateDateTime");

    m_updateDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("progress"))
  {
    m_progress = jsonValue.GetObject("progress");

    m_progressHasBeenSet = true;
  }

  return *this;
}

JsonValue MetadataTransferJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_metadataTransferJobIdHasBeenSet)
  {
   payload.WithString("metadataTransferJobId", m_metadataTransferJobId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_updateDateTimeHasBeenSet)
  {
   payload.WithDouble("updateDateTime", m_updateDateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithObject("status", m_status.Jsonize());

  }

  if(m_progressHasBeenSet)
  {
   payload.WithObject("progress", m_progress.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
