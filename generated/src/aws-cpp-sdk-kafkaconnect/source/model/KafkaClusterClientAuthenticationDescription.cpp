/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/KafkaClusterClientAuthenticationDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

KafkaClusterClientAuthenticationDescription::KafkaClusterClientAuthenticationDescription() : 
    m_authenticationType(KafkaClusterClientAuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false)
{
}

KafkaClusterClientAuthenticationDescription::KafkaClusterClientAuthenticationDescription(JsonView jsonValue) : 
    m_authenticationType(KafkaClusterClientAuthenticationType::NOT_SET),
    m_authenticationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaClusterClientAuthenticationDescription& KafkaClusterClientAuthenticationDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authenticationType"))
  {
    m_authenticationType = KafkaClusterClientAuthenticationTypeMapper::GetKafkaClusterClientAuthenticationTypeForName(jsonValue.GetString("authenticationType"));

    m_authenticationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaClusterClientAuthenticationDescription::Jsonize() const
{
  JsonValue payload;

  if(m_authenticationTypeHasBeenSet)
  {
   payload.WithString("authenticationType", KafkaClusterClientAuthenticationTypeMapper::GetNameForKafkaClusterClientAuthenticationType(m_authenticationType));
  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
