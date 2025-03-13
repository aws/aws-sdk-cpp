/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/RemoteNodeNetwork.h>
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

RemoteNodeNetwork::RemoteNodeNetwork(JsonView jsonValue)
{
  *this = jsonValue;
}

RemoteNodeNetwork& RemoteNodeNetwork::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cidrs"))
  {
    Aws::Utils::Array<JsonView> cidrsJsonList = jsonValue.GetArray("cidrs");
    for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
    {
      m_cidrs.push_back(cidrsJsonList[cidrsIndex].AsString());
    }
    m_cidrsHasBeenSet = true;
  }
  return *this;
}

JsonValue RemoteNodeNetwork::Jsonize() const
{
  JsonValue payload;

  if(m_cidrsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cidrsJsonList(m_cidrs.size());
   for(unsigned cidrsIndex = 0; cidrsIndex < cidrsJsonList.GetLength(); ++cidrsIndex)
   {
     cidrsJsonList[cidrsIndex].AsString(m_cidrs[cidrsIndex]);
   }
   payload.WithArray("cidrs", std::move(cidrsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
