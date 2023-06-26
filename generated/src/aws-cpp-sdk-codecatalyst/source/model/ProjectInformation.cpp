/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/ProjectInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

ProjectInformation::ProjectInformation() : 
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

ProjectInformation::ProjectInformation(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectInformation& ProjectInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectId"))
  {
    m_projectId = jsonValue.GetString("projectId");

    m_projectIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectInformation::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_projectIdHasBeenSet)
  {
   payload.WithString("projectId", m_projectId);

  }

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
