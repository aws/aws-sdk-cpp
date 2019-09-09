/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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




