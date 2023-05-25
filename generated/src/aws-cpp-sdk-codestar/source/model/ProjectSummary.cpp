/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/ProjectSummary.h>
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

ProjectSummary::ProjectSummary() : 
    m_projectIdHasBeenSet(false),
    m_projectArnHasBeenSet(false)
{
}

ProjectSummary::ProjectSummary(JsonView jsonValue) : 
    m_projectIdHasBeenSet(false),
    m_projectArnHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectSummary& ProjectSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

    m_projectIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectArn"))
  {
    m_projectArn = jsonValue.GetString("projectArn");

    m_projectArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectSummary::Jsonize() const
{
  JsonValue payload;

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  if(m_projectArnHasBeenSet)
  {
   payload.WithString("projectArn", m_projectArn);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStar
} // namespace Aws
