/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

BackupDescription::BackupDescription(JsonView jsonValue) : 
    m_backupDetailsHasBeenSet(false),
    m_sourceTableDetailsHasBeenSet(false),
    m_sourceTableFeatureDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

BackupDescription& BackupDescription::operator =(JsonView jsonValue)
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
