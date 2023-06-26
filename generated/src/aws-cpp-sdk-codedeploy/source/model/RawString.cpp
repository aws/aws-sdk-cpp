/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RawString.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

RawString::RawString() : 
    m_contentHasBeenSet(false),
    m_sha256HasBeenSet(false)
{
}

RawString::RawString(JsonView jsonValue) : 
    m_contentHasBeenSet(false),
    m_sha256HasBeenSet(false)
{
  *this = jsonValue;
}

RawString& RawString::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetString("content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sha256"))
  {
    m_sha256 = jsonValue.GetString("sha256");

    m_sha256HasBeenSet = true;
  }

  return *this;
}

JsonValue RawString::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("content", m_content);

  }

  if(m_sha256HasBeenSet)
  {
   payload.WithString("sha256", m_sha256);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
