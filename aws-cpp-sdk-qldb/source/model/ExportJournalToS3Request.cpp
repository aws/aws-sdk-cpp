/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb/model/ExportJournalToS3Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::QLDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportJournalToS3Request::ExportJournalToS3Request() : 
    m_nameHasBeenSet(false),
    m_inclusiveStartTimeHasBeenSet(false),
    m_exclusiveEndTimeHasBeenSet(false),
    m_s3ExportConfigurationHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Aws::String ExportJournalToS3Request::SerializePayload() const
{
  JsonValue payload;

  if(m_inclusiveStartTimeHasBeenSet)
  {
   payload.WithDouble("InclusiveStartTime", m_inclusiveStartTime.SecondsWithMSPrecision());
  }

  if(m_exclusiveEndTimeHasBeenSet)
  {
   payload.WithDouble("ExclusiveEndTime", m_exclusiveEndTime.SecondsWithMSPrecision());
  }

  if(m_s3ExportConfigurationHasBeenSet)
  {
   payload.WithObject("S3ExportConfiguration", m_s3ExportConfiguration.Jsonize());

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  return payload.View().WriteReadable();
}




