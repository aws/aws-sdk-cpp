/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/UpdateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

UpdateResult::UpdateResult() : 
    m_updateAvailable(false),
    m_updateAvailableHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

UpdateResult::UpdateResult(JsonView jsonValue) : 
    m_updateAvailable(false),
    m_updateAvailableHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

UpdateResult& UpdateResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpdateAvailable"))
  {
    m_updateAvailable = jsonValue.GetBool("UpdateAvailable");

    m_updateAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue UpdateResult::Jsonize() const
{
  JsonValue payload;

  if(m_updateAvailableHasBeenSet)
  {
   payload.WithBool("UpdateAvailable", m_updateAvailable);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
