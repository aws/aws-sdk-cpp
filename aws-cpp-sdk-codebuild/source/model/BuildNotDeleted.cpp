/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/BuildNotDeleted.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

BuildNotDeleted::BuildNotDeleted() : 
    m_idHasBeenSet(false),
    m_statusCodeHasBeenSet(false)
{
}

BuildNotDeleted::BuildNotDeleted(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_statusCodeHasBeenSet(false)
{
  *this = jsonValue;
}

BuildNotDeleted& BuildNotDeleted::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusCode"))
  {
    m_statusCode = jsonValue.GetString("statusCode");

    m_statusCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue BuildNotDeleted::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("statusCode", m_statusCode);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
