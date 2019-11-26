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

#include <aws/dynamodb/model/ArchivalSummary.h>
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

ArchivalSummary::ArchivalSummary() : 
    m_archivalDateTimeHasBeenSet(false),
    m_archivalReasonHasBeenSet(false),
    m_archivalBackupArnHasBeenSet(false)
{
}

ArchivalSummary::ArchivalSummary(JsonView jsonValue) : 
    m_archivalDateTimeHasBeenSet(false),
    m_archivalReasonHasBeenSet(false),
    m_archivalBackupArnHasBeenSet(false)
{
  *this = jsonValue;
}

ArchivalSummary& ArchivalSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArchivalDateTime"))
  {
    m_archivalDateTime = jsonValue.GetDouble("ArchivalDateTime");

    m_archivalDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchivalReason"))
  {
    m_archivalReason = jsonValue.GetString("ArchivalReason");

    m_archivalReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArchivalBackupArn"))
  {
    m_archivalBackupArn = jsonValue.GetString("ArchivalBackupArn");

    m_archivalBackupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchivalSummary::Jsonize() const
{
  JsonValue payload;

  if(m_archivalDateTimeHasBeenSet)
  {
   payload.WithDouble("ArchivalDateTime", m_archivalDateTime.SecondsWithMSPrecision());
  }

  if(m_archivalReasonHasBeenSet)
  {
   payload.WithString("ArchivalReason", m_archivalReason);

  }

  if(m_archivalBackupArnHasBeenSet)
  {
   payload.WithString("ArchivalBackupArn", m_archivalBackupArn);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
