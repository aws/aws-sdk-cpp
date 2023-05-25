/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/AwsService.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

AwsService::AwsService() : 
    m_invokedByHasBeenSet(false)
{
}

AwsService::AwsService(JsonView jsonValue) : 
    m_invokedByHasBeenSet(false)
{
  *this = jsonValue;
}

AwsService& AwsService::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("invokedBy"))
  {
    m_invokedBy = jsonValue.GetString("invokedBy");

    m_invokedByHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsService::Jsonize() const
{
  JsonValue payload;

  if(m_invokedByHasBeenSet)
  {
   payload.WithString("invokedBy", m_invokedBy);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
