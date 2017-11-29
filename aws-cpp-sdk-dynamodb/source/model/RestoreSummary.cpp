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

#include <aws/dynamodb/model/RestoreSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

RestoreSummary::RestoreSummary() : 
    m_sourceBackupArnHasBeenSet(false),
    m_sourceTableArnHasBeenSet(false),
    m_restoreDateTimeHasBeenSet(false),
    m_restoreInProgress(false),
    m_restoreInProgressHasBeenSet(false)
{
}

RestoreSummary::RestoreSummary(const JsonValue& jsonValue) : 
    m_sourceBackupArnHasBeenSet(false),
    m_sourceTableArnHasBeenSet(false),
    m_restoreDateTimeHasBeenSet(false),
    m_restoreInProgress(false),
    m_restoreInProgressHasBeenSet(false)
{
  *this = jsonValue;
}

RestoreSummary& RestoreSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SourceBackupArn"))
  {
    m_sourceBackupArn = jsonValue.GetString("SourceBackupArn");

    m_sourceBackupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceTableArn"))
  {
    m_sourceTableArn = jsonValue.GetString("SourceTableArn");

    m_sourceTableArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreDateTime"))
  {
    m_restoreDateTime = jsonValue.GetDouble("RestoreDateTime");

    m_restoreDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreInProgress"))
  {
    m_restoreInProgress = jsonValue.GetBool("RestoreInProgress");

    m_restoreInProgressHasBeenSet = true;
  }

  return *this;
}

JsonValue RestoreSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sourceBackupArnHasBeenSet)
  {
   payload.WithString("SourceBackupArn", m_sourceBackupArn);

  }

  if(m_sourceTableArnHasBeenSet)
  {
   payload.WithString("SourceTableArn", m_sourceTableArn);

  }

  if(m_restoreDateTimeHasBeenSet)
  {
   payload.WithDouble("RestoreDateTime", m_restoreDateTime.SecondsWithMSPrecision());
  }

  if(m_restoreInProgressHasBeenSet)
  {
   payload.WithBool("RestoreInProgress", m_restoreInProgress);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
