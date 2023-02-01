/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/Definition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

Definition::Definition() : 
    m_contentHasBeenSet(false),
    m_s3LocationHasBeenSet(false)
{
}

Definition::Definition(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_s3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

Definition& Definition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetString("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue Definition::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithString("s3Location", m_s3Location);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
