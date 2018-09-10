﻿/*
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

#include <aws/dynamodb/model/RestoreTableToPointInTimeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RestoreTableToPointInTimeRequest::RestoreTableToPointInTimeRequest() : 
    m_sourceTableNameHasBeenSet(false),
    m_targetTableNameHasBeenSet(false),
    m_useLatestRestorableTime(false),
    m_useLatestRestorableTimeHasBeenSet(false),
    m_restoreDateTimeHasBeenSet(false)
{
}

Aws::String RestoreTableToPointInTimeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceTableNameHasBeenSet)
  {
   payload.WithString("SourceTableName", m_sourceTableName);

  }

  if(m_targetTableNameHasBeenSet)
  {
   payload.WithString("TargetTableName", m_targetTableName);

  }

  if(m_useLatestRestorableTimeHasBeenSet)
  {
   payload.WithBool("UseLatestRestorableTime", m_useLatestRestorableTime);

  }

  if(m_restoreDateTimeHasBeenSet)
  {
   payload.WithDouble("RestoreDateTime", m_restoreDateTime.SecondsWithMSPrecision());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreTableToPointInTimeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.RestoreTableToPointInTime"));
  return headers;

}




