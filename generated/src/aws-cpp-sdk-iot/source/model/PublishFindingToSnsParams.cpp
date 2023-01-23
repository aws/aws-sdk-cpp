/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PublishFindingToSnsParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

PublishFindingToSnsParams::PublishFindingToSnsParams() : 
    m_topicArnHasBeenSet(false)
{
}

PublishFindingToSnsParams::PublishFindingToSnsParams(JsonView jsonValue) : 
    m_topicArnHasBeenSet(false)
{
  *this = jsonValue;
}

PublishFindingToSnsParams& PublishFindingToSnsParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicArn"))
  {
    m_topicArn = jsonValue.GetString("topicArn");

    m_topicArnHasBeenSet = true;
  }

  return *this;
}

JsonValue PublishFindingToSnsParams::Jsonize() const
{
  JsonValue payload;

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("topicArn", m_topicArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
