/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateDnsRecordCreationState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

LoadBalancerTlsCertificateDnsRecordCreationState::LoadBalancerTlsCertificateDnsRecordCreationState() : 
    m_code(LoadBalancerTlsCertificateDnsRecordCreationStateCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

LoadBalancerTlsCertificateDnsRecordCreationState::LoadBalancerTlsCertificateDnsRecordCreationState(JsonView jsonValue) : 
    m_code(LoadBalancerTlsCertificateDnsRecordCreationStateCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificateDnsRecordCreationState& LoadBalancerTlsCertificateDnsRecordCreationState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = LoadBalancerTlsCertificateDnsRecordCreationStateCodeMapper::GetLoadBalancerTlsCertificateDnsRecordCreationStateCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancerTlsCertificateDnsRecordCreationState::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", LoadBalancerTlsCertificateDnsRecordCreationStateCodeMapper::GetNameForLoadBalancerTlsCertificateDnsRecordCreationStateCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
