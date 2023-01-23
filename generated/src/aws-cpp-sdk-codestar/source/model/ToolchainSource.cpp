/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/ToolchainSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStar
{
namespace Model
{

ToolchainSource::ToolchainSource() : 
    m_s3HasBeenSet(false)
{
}

ToolchainSource::ToolchainSource(JsonView jsonValue) : 
    m_s3HasBeenSet(false)
{
  *this = jsonValue;
}

ToolchainSource& ToolchainSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");

    m_s3HasBeenSet = true;
  }

  return *this;
}

JsonValue ToolchainSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeStar
} // namespace Aws
