/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/ServerError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

ServerError::ServerError() : 
    m_serverErrorCategory(ServerErrorCategory::NOT_SET),
    m_serverErrorCategoryHasBeenSet(false)
{
}

ServerError::ServerError(JsonView jsonValue) : 
    m_serverErrorCategory(ServerErrorCategory::NOT_SET),
    m_serverErrorCategoryHasBeenSet(false)
{
  *this = jsonValue;
}

ServerError& ServerError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverErrorCategory"))
  {
    m_serverErrorCategory = ServerErrorCategoryMapper::GetServerErrorCategoryForName(jsonValue.GetString("serverErrorCategory"));

    m_serverErrorCategoryHasBeenSet = true;
  }

  return *this;
}

JsonValue ServerError::Jsonize() const
{
  JsonValue payload;

  if(m_serverErrorCategoryHasBeenSet)
  {
   payload.WithString("serverErrorCategory", ServerErrorCategoryMapper::GetNameForServerErrorCategory(m_serverErrorCategory));
  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
