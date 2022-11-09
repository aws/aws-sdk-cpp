/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEksClusterLoggingDetails.h>
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

AwsEksClusterLoggingDetails::AwsEksClusterLoggingDetails() : 
    m_clusterLoggingHasBeenSet(false)
{
}

AwsEksClusterLoggingDetails::AwsEksClusterLoggingDetails(JsonView jsonValue) : 
    m_clusterLoggingHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEksClusterLoggingDetails& AwsEksClusterLoggingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterLogging"))
  {
    Aws::Utils::Array<JsonView> clusterLoggingJsonList = jsonValue.GetArray("ClusterLogging");
    for(unsigned clusterLoggingIndex = 0; clusterLoggingIndex < clusterLoggingJsonList.GetLength(); ++clusterLoggingIndex)
    {
      m_clusterLogging.push_back(clusterLoggingJsonList[clusterLoggingIndex].AsObject());
    }
    m_clusterLoggingHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEksClusterLoggingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clusterLoggingHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterLoggingJsonList(m_clusterLogging.size());
   for(unsigned clusterLoggingIndex = 0; clusterLoggingIndex < clusterLoggingJsonList.GetLength(); ++clusterLoggingIndex)
   {
     clusterLoggingJsonList[clusterLoggingIndex].AsObject(m_clusterLogging[clusterLoggingIndex].Jsonize());
   }
   payload.WithArray("ClusterLogging", std::move(clusterLoggingJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
