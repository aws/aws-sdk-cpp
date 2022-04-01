/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resource-groups/model/FailedResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

FailedResource::FailedResource() : 
    m_resourceArnHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false)
{
}

FailedResource::FailedResource(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

FailedResource& FailedResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedResource::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  return payload;
}

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
