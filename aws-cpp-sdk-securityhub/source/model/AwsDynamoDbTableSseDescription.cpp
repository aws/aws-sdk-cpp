/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableSseDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsDynamoDbTableSseDescription::AwsDynamoDbTableSseDescription() : 
    m_inaccessibleEncryptionDateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sseTypeHasBeenSet(false),
    m_kmsMasterKeyArnHasBeenSet(false)
{
}

AwsDynamoDbTableSseDescription::AwsDynamoDbTableSseDescription(JsonView jsonValue) : 
    m_inaccessibleEncryptionDateTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sseTypeHasBeenSet(false),
    m_kmsMasterKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableSseDescription& AwsDynamoDbTableSseDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InaccessibleEncryptionDateTime"))
  {
    m_inaccessibleEncryptionDateTime = jsonValue.GetString("InaccessibleEncryptionDateTime");

    m_inaccessibleEncryptionDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SseType"))
  {
    m_sseType = jsonValue.GetString("SseType");

    m_sseTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KmsMasterKeyArn"))
  {
    m_kmsMasterKeyArn = jsonValue.GetString("KmsMasterKeyArn");

    m_kmsMasterKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableSseDescription::Jsonize() const
{
  JsonValue payload;

  if(m_inaccessibleEncryptionDateTimeHasBeenSet)
  {
   payload.WithString("InaccessibleEncryptionDateTime", m_inaccessibleEncryptionDateTime);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_sseTypeHasBeenSet)
  {
   payload.WithString("SseType", m_sseType);

  }

  if(m_kmsMasterKeyArnHasBeenSet)
  {
   payload.WithString("KmsMasterKeyArn", m_kmsMasterKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
