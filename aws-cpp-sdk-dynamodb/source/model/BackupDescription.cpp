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

#include <aws/dynamodb/model/BackupDescription.h>
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

BackupDescription::BackupDescription() : 
    m_backupDetailsHasBeenSet(false),
    m_sourceTableDetailsHasBeenSet(false),
    m_sourceTableFeatureDetailsHasBeenSet(false)
{
}

BackupDescription::BackupDescription(const JsonValue& jsonValue) : 
    m_backupDetailsHasBeenSet(false),
    m_sourceTableDetailsHasBeenSet(false),
    m_sourceTableFeatureDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

BackupDescription& BackupDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("BackupDetails"))
  {
    m_backupDetails = jsonValue.GetObject("BackupDetails");

    m_backupDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceTableDetails"))
  {
    m_sourceTableDetails = jsonValue.GetObject("SourceTableDetails");

    m_sourceTableDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceTableFeatureDetails"))
  {
    m_sourceTableFeatureDetails = jsonValue.GetObject("SourceTableFeatureDetails");

    m_sourceTableFeatureDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupDescription::Jsonize() const
{
  JsonValue payload;

  if(m_backupDetailsHasBeenSet)
  {
   payload.WithObject("BackupDetails", m_backupDetails.Jsonize());

  }

  if(m_sourceTableDetailsHasBeenSet)
  {
   payload.WithObject("SourceTableDetails", m_sourceTableDetails.Jsonize());

  }

  if(m_sourceTableFeatureDetailsHasBeenSet)
  {
   payload.WithObject("SourceTableFeatureDetails", m_sourceTableFeatureDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
