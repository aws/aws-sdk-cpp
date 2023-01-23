/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Logging.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Logging::Logging() : 
    m_clusterLoggingHasBeenSet(false)
{
}

Logging::Logging(JsonView jsonValue) : 
    m_clusterLoggingHasBeenSet(false)
{
  *this = jsonValue;
}

Logging& Logging::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterLogging"))
  {
    Aws::Utils::Array<JsonView> clusterLoggingJsonList = jsonValue.GetArray("clusterLogging");
    for(unsigned clusterLoggingIndex = 0; clusterLoggingIndex < clusterLoggingJsonList.GetLength(); ++clusterLoggingIndex)
    {
      m_clusterLogging.push_back(clusterLoggingJsonList[clusterLoggingIndex].AsObject());
    }
    m_clusterLoggingHasBeenSet = true;
  }

  return *this;
}

JsonValue Logging::Jsonize() const
{
  JsonValue payload;

  if(m_clusterLoggingHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterLoggingJsonList(m_clusterLogging.size());
   for(unsigned clusterLoggingIndex = 0; clusterLoggingIndex < clusterLoggingJsonList.GetLength(); ++clusterLoggingIndex)
   {
     clusterLoggingJsonList[clusterLoggingIndex].AsObject(m_clusterLogging[clusterLoggingIndex].Jsonize());
   }
   payload.WithArray("clusterLogging", std::move(clusterLoggingJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
