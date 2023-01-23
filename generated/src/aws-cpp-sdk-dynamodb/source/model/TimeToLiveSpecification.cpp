/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/TimeToLiveSpecification.h>
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

TimeToLiveSpecification::TimeToLiveSpecification() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
}

TimeToLiveSpecification::TimeToLiveSpecification(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

TimeToLiveSpecification& TimeToLiveSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeToLiveSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
