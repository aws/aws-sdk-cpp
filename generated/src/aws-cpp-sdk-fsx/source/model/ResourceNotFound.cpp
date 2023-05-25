/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ResourceNotFound.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

ResourceNotFound::ResourceNotFound() : 
    m_resourceARNHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

ResourceNotFound::ResourceNotFound(JsonView jsonValue) : 
    m_resourceARNHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceNotFound& ResourceNotFound::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceARN"))
  {
    m_resourceARN = jsonValue.GetString("ResourceARN");

    m_resourceARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceNotFound::Jsonize() const
{
  JsonValue payload;

  if(m_resourceARNHasBeenSet)
  {
   payload.WithString("ResourceARN", m_resourceARN);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
