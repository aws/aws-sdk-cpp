/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar/model/GitHubCodeDestination.h>
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

GitHubCodeDestination::GitHubCodeDestination() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_privateRepository(false),
    m_privateRepositoryHasBeenSet(false),
    m_issuesEnabled(false),
    m_issuesEnabledHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

GitHubCodeDestination::GitHubCodeDestination(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_privateRepository(false),
    m_privateRepositoryHasBeenSet(false),
    m_issuesEnabled(false),
    m_issuesEnabledHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
  *this = jsonValue;
}

GitHubCodeDestination& GitHubCodeDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = jsonValue.GetString("type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateRepository"))
  {
    m_privateRepository = jsonValue.GetBool("privateRepository");

    m_privateRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("issuesEnabled"))
  {
    m_issuesEnabled = jsonValue.GetBool("issuesEnabled");

    m_issuesEnabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("token"))
  {
    m_token = jsonValue.GetString("token");

    m_tokenHasBeenSet = true;
  }

  return *this;
}

JsonValue GitHubCodeDestination::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", m_type);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_privateRepositoryHasBeenSet)
  {
   payload.WithBool("privateRepository", m_privateRepository);

  }

  if(m_issuesEnabledHasBeenSet)
  {
   payload.WithBool("issuesEnabled", m_issuesEnabled);

  }

  if(m_tokenHasBeenSet)
  {
   payload.WithString("token", m_token);

  }

  return payload;
}

} // namespace Model
} // namespace CodeStar
} // namespace Aws
