/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/LambdaEventSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

LambdaEventSource::LambdaEventSource() : 
    m_topicHasBeenSet(false),
    m_type(LambdaEventSourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

LambdaEventSource::LambdaEventSource(JsonView jsonValue) : 
    m_topicHasBeenSet(false),
    m_type(LambdaEventSourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

LambdaEventSource& LambdaEventSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topic"))
  {
    m_topic = jsonValue.GetString("topic");

    m_topicHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = LambdaEventSourceTypeMapper::GetLambdaEventSourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue LambdaEventSource::Jsonize() const
{
  JsonValue payload;

  if(m_topicHasBeenSet)
  {
   payload.WithString("topic", m_topic);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", LambdaEventSourceTypeMapper::GetNameForLambdaEventSourceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
