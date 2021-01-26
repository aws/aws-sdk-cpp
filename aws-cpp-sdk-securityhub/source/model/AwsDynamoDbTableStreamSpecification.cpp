/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsDynamoDbTableStreamSpecification.h>
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

AwsDynamoDbTableStreamSpecification::AwsDynamoDbTableStreamSpecification() : 
    m_streamEnabled(false),
    m_streamEnabledHasBeenSet(false),
    m_streamViewTypeHasBeenSet(false)
{
}

AwsDynamoDbTableStreamSpecification::AwsDynamoDbTableStreamSpecification(JsonView jsonValue) : 
    m_streamEnabled(false),
    m_streamEnabledHasBeenSet(false),
    m_streamViewTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AwsDynamoDbTableStreamSpecification& AwsDynamoDbTableStreamSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StreamEnabled"))
  {
    m_streamEnabled = jsonValue.GetBool("StreamEnabled");

    m_streamEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StreamViewType"))
  {
    m_streamViewType = jsonValue.GetString("StreamViewType");

    m_streamViewTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsDynamoDbTableStreamSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_streamEnabledHasBeenSet)
  {
   payload.WithBool("StreamEnabled", m_streamEnabled);

  }

  if(m_streamViewTypeHasBeenSet)
  {
   payload.WithString("StreamViewType", m_streamViewType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
