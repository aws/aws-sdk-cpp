/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-cluster/model/ServiceLimitExceededException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryCluster
{
namespace Model
{

ServiceLimitExceededException::ServiceLimitExceededException() : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_limitCodeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
}

ServiceLimitExceededException::ServiceLimitExceededException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_limitCodeHasBeenSet(false),
    m_serviceCodeHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceLimitExceededException& ServiceLimitExceededException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("limitCode"))
  {
    m_limitCode = jsonValue.GetString("limitCode");

    m_limitCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serviceCode"))
  {
    m_serviceCode = jsonValue.GetString("serviceCode");

    m_serviceCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceLimitExceededException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_limitCodeHasBeenSet)
  {
   payload.WithString("limitCode", m_limitCode);

  }

  if(m_serviceCodeHasBeenSet)
  {
   payload.WithString("serviceCode", m_serviceCode);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryCluster
} // namespace Aws
