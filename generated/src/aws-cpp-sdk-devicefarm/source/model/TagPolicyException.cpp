/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/TagPolicyException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

TagPolicyException::TagPolicyException() : 
    m_messageHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

TagPolicyException::TagPolicyException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

TagPolicyException& TagPolicyException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceName"))
  {
    m_resourceName = jsonValue.GetString("resourceName");

    m_resourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TagPolicyException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
