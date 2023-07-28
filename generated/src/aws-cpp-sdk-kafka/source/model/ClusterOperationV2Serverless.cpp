/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClusterOperationV2Serverless.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

ClusterOperationV2Serverless::ClusterOperationV2Serverless() : 
    m_vpcConnectionInfoHasBeenSet(false)
{
}

ClusterOperationV2Serverless::ClusterOperationV2Serverless(JsonView jsonValue) : 
    m_vpcConnectionInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterOperationV2Serverless& ClusterOperationV2Serverless::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vpcConnectionInfo"))
  {
    m_vpcConnectionInfo = jsonValue.GetObject("vpcConnectionInfo");

    m_vpcConnectionInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterOperationV2Serverless::Jsonize() const
{
  JsonValue payload;

  if(m_vpcConnectionInfoHasBeenSet)
  {
   payload.WithObject("vpcConnectionInfo", m_vpcConnectionInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
