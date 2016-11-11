/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/dynamodb/model/StreamSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

StreamSpecification::StreamSpecification() : 
    m_streamEnabled(false),
    m_streamEnabledHasBeenSet(false),
    m_streamViewType(StreamViewType::NOT_SET),
    m_streamViewTypeHasBeenSet(false)
{
}

StreamSpecification::StreamSpecification(const JsonValue& jsonValue) : 
    m_streamEnabled(false),
    m_streamEnabledHasBeenSet(false),
    m_streamViewType(StreamViewType::NOT_SET),
    m_streamViewTypeHasBeenSet(false)
{
  *this = jsonValue;
}

StreamSpecification& StreamSpecification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("StreamEnabled"))
  {
    m_streamEnabled = jsonValue.GetBool("StreamEnabled");

    m_streamEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamViewType"))
  {
    m_streamViewType = StreamViewTypeMapper::GetStreamViewTypeForName(jsonValue.GetString("StreamViewType"));

    m_streamViewTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_streamEnabledHasBeenSet)
  {
   payload.WithBool("StreamEnabled", m_streamEnabled);

  }

  if(m_streamViewTypeHasBeenSet)
  {
   payload.WithString("StreamViewType", StreamViewTypeMapper::GetNameForStreamViewType(m_streamViewType));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws