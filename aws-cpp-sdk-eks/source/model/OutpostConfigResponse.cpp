/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/OutpostConfigResponse.h>
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

OutpostConfigResponse::OutpostConfigResponse() : 
    m_outpostArnsHasBeenSet(false),
    m_controlPlaneInstanceTypeHasBeenSet(false)
{
}

OutpostConfigResponse::OutpostConfigResponse(JsonView jsonValue) : 
    m_outpostArnsHasBeenSet(false),
    m_controlPlaneInstanceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

OutpostConfigResponse& OutpostConfigResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outpostArns"))
  {
    Aws::Utils::Array<JsonView> outpostArnsJsonList = jsonValue.GetArray("outpostArns");
    for(unsigned outpostArnsIndex = 0; outpostArnsIndex < outpostArnsJsonList.GetLength(); ++outpostArnsIndex)
    {
      m_outpostArns.push_back(outpostArnsJsonList[outpostArnsIndex].AsString());
    }
    m_outpostArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("controlPlaneInstanceType"))
  {
    m_controlPlaneInstanceType = jsonValue.GetString("controlPlaneInstanceType");

    m_controlPlaneInstanceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue OutpostConfigResponse::Jsonize() const
{
  JsonValue payload;

  if(m_outpostArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> outpostArnsJsonList(m_outpostArns.size());
   for(unsigned outpostArnsIndex = 0; outpostArnsIndex < outpostArnsJsonList.GetLength(); ++outpostArnsIndex)
   {
     outpostArnsJsonList[outpostArnsIndex].AsString(m_outpostArns[outpostArnsIndex]);
   }
   payload.WithArray("outpostArns", std::move(outpostArnsJsonList));

  }

  if(m_controlPlaneInstanceTypeHasBeenSet)
  {
   payload.WithString("controlPlaneInstanceType", m_controlPlaneInstanceType);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
