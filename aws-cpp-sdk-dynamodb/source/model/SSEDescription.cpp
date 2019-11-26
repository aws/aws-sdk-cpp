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

#include <aws/dynamodb/model/SSEDescription.h>
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

SSEDescription::SSEDescription() : 
    m_status(SSEStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sSEType(SSEType::NOT_SET),
    m_sSETypeHasBeenSet(false),
    m_kMSMasterKeyArnHasBeenSet(false),
    m_inaccessibleEncryptionDateTimeHasBeenSet(false)
{
}

SSEDescription::SSEDescription(JsonView jsonValue) : 
    m_status(SSEStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sSEType(SSEType::NOT_SET),
    m_sSETypeHasBeenSet(false),
    m_kMSMasterKeyArnHasBeenSet(false),
    m_inaccessibleEncryptionDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SSEDescription& SSEDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SSEStatusMapper::GetSSEStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SSEType"))
  {
    m_sSEType = SSETypeMapper::GetSSETypeForName(jsonValue.GetString("SSEType"));

    m_sSETypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KMSMasterKeyArn"))
  {
    m_kMSMasterKeyArn = jsonValue.GetString("KMSMasterKeyArn");

    m_kMSMasterKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InaccessibleEncryptionDateTime"))
  {
    m_inaccessibleEncryptionDateTime = jsonValue.GetDouble("InaccessibleEncryptionDateTime");

    m_inaccessibleEncryptionDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SSEDescription::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SSEStatusMapper::GetNameForSSEStatus(m_status));
  }

  if(m_sSETypeHasBeenSet)
  {
   payload.WithString("SSEType", SSETypeMapper::GetNameForSSEType(m_sSEType));
  }

  if(m_kMSMasterKeyArnHasBeenSet)
  {
   payload.WithString("KMSMasterKeyArn", m_kMSMasterKeyArn);

  }

  if(m_inaccessibleEncryptionDateTimeHasBeenSet)
  {
   payload.WithDouble("InaccessibleEncryptionDateTime", m_inaccessibleEncryptionDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
