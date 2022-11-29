/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securitylake/model/SourceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

SourceType::SourceType() : 
    m_awsSourceType(AwsLogSourceType::NOT_SET),
    m_awsSourceTypeHasBeenSet(false),
    m_customSourceTypeHasBeenSet(false)
{
}

SourceType::SourceType(JsonView jsonValue) : 
    m_awsSourceType(AwsLogSourceType::NOT_SET),
    m_awsSourceTypeHasBeenSet(false),
    m_customSourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SourceType& SourceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("awsSourceType"))
  {
    m_awsSourceType = AwsLogSourceTypeMapper::GetAwsLogSourceTypeForName(jsonValue.GetString("awsSourceType"));

    m_awsSourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customSourceType"))
  {
    m_customSourceType = jsonValue.GetString("customSourceType");

    m_customSourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceType::Jsonize() const
{
  JsonValue payload;

  if(m_awsSourceTypeHasBeenSet)
  {
   payload.WithString("awsSourceType", AwsLogSourceTypeMapper::GetNameForAwsLogSourceType(m_awsSourceType));
  }

  if(m_customSourceTypeHasBeenSet)
  {
   payload.WithString("customSourceType", m_customSourceType);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
