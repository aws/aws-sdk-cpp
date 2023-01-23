/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/LoadBalancerTlsCertificateSummary.h>
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

LoadBalancerTlsCertificateSummary::LoadBalancerTlsCertificateSummary() : 
    m_nameHasBeenSet(false),
    m_isAttached(false),
    m_isAttachedHasBeenSet(false)
{
}

LoadBalancerTlsCertificateSummary::LoadBalancerTlsCertificateSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_isAttached(false),
    m_isAttachedHasBeenSet(false)
{
  *this = jsonValue;
}

LoadBalancerTlsCertificateSummary& LoadBalancerTlsCertificateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isAttached"))
  {
    m_isAttached = jsonValue.GetBool("isAttached");

    m_isAttachedHasBeenSet = true;
  }

  return *this;
}

JsonValue LoadBalancerTlsCertificateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_isAttachedHasBeenSet)
  {
   payload.WithBool("isAttached", m_isAttached);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
