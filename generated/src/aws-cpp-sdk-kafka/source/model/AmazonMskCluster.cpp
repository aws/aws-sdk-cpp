/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/AmazonMskCluster.h>
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

AmazonMskCluster::AmazonMskCluster() : 
    m_mskClusterArnHasBeenSet(false)
{
}

AmazonMskCluster::AmazonMskCluster(JsonView jsonValue) : 
    m_mskClusterArnHasBeenSet(false)
{
  *this = jsonValue;
}

AmazonMskCluster& AmazonMskCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mskClusterArn"))
  {
    m_mskClusterArn = jsonValue.GetString("mskClusterArn");

    m_mskClusterArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AmazonMskCluster::Jsonize() const
{
  JsonValue payload;

  if(m_mskClusterArnHasBeenSet)
  {
   payload.WithString("mskClusterArn", m_mskClusterArn);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
