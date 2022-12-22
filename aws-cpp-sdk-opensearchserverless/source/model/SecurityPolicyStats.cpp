/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/SecurityPolicyStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

SecurityPolicyStats::SecurityPolicyStats() : 
    m_encryptionPolicyCount(0),
    m_encryptionPolicyCountHasBeenSet(false),
    m_networkPolicyCount(0),
    m_networkPolicyCountHasBeenSet(false)
{
}

SecurityPolicyStats::SecurityPolicyStats(JsonView jsonValue) : 
    m_encryptionPolicyCount(0),
    m_encryptionPolicyCountHasBeenSet(false),
    m_networkPolicyCount(0),
    m_networkPolicyCountHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityPolicyStats& SecurityPolicyStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EncryptionPolicyCount"))
  {
    m_encryptionPolicyCount = jsonValue.GetInt64("EncryptionPolicyCount");

    m_encryptionPolicyCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkPolicyCount"))
  {
    m_networkPolicyCount = jsonValue.GetInt64("NetworkPolicyCount");

    m_networkPolicyCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityPolicyStats::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionPolicyCountHasBeenSet)
  {
   payload.WithInt64("EncryptionPolicyCount", m_encryptionPolicyCount);

  }

  if(m_networkPolicyCountHasBeenSet)
  {
   payload.WithInt64("NetworkPolicyCount", m_networkPolicyCount);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
