/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ClusterInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ClusterInformation::ClusterInformation(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterInformation& ClusterInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");
    m_clusterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clusterDetails"))
  {
    Aws::Utils::Array<JsonView> clusterDetailsJsonList = jsonValue.GetArray("clusterDetails");
    for(unsigned clusterDetailsIndex = 0; clusterDetailsIndex < clusterDetailsJsonList.GetLength(); ++clusterDetailsIndex)
    {
      m_clusterDetails.push_back(clusterDetailsJsonList[clusterDetailsIndex].AsObject());
    }
    m_clusterDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterInformation::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_clusterDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clusterDetailsJsonList(m_clusterDetails.size());
   for(unsigned clusterDetailsIndex = 0; clusterDetailsIndex < clusterDetailsJsonList.GetLength(); ++clusterDetailsIndex)
   {
     clusterDetailsJsonList[clusterDetailsIndex].AsObject(m_clusterDetails[clusterDetailsIndex].Jsonize());
   }
   payload.WithArray("clusterDetails", std::move(clusterDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
