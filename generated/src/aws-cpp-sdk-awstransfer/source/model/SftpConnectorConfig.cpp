/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/SftpConnectorConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

SftpConnectorConfig::SftpConnectorConfig() : 
    m_userSecretIdHasBeenSet(false),
    m_trustedHostKeysHasBeenSet(false)
{
}

SftpConnectorConfig::SftpConnectorConfig(JsonView jsonValue) : 
    m_userSecretIdHasBeenSet(false),
    m_trustedHostKeysHasBeenSet(false)
{
  *this = jsonValue;
}

SftpConnectorConfig& SftpConnectorConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserSecretId"))
  {
    m_userSecretId = jsonValue.GetString("UserSecretId");

    m_userSecretIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TrustedHostKeys"))
  {
    Aws::Utils::Array<JsonView> trustedHostKeysJsonList = jsonValue.GetArray("TrustedHostKeys");
    for(unsigned trustedHostKeysIndex = 0; trustedHostKeysIndex < trustedHostKeysJsonList.GetLength(); ++trustedHostKeysIndex)
    {
      m_trustedHostKeys.push_back(trustedHostKeysJsonList[trustedHostKeysIndex].AsString());
    }
    m_trustedHostKeysHasBeenSet = true;
  }

  return *this;
}

JsonValue SftpConnectorConfig::Jsonize() const
{
  JsonValue payload;

  if(m_userSecretIdHasBeenSet)
  {
   payload.WithString("UserSecretId", m_userSecretId);

  }

  if(m_trustedHostKeysHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> trustedHostKeysJsonList(m_trustedHostKeys.size());
   for(unsigned trustedHostKeysIndex = 0; trustedHostKeysIndex < trustedHostKeysJsonList.GetLength(); ++trustedHostKeysIndex)
   {
     trustedHostKeysJsonList[trustedHostKeysIndex].AsString(m_trustedHostKeys[trustedHostKeysIndex]);
   }
   payload.WithArray("TrustedHostKeys", std::move(trustedHostKeysJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
