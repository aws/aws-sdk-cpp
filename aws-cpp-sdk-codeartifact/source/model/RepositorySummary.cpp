/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/RepositorySummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

RepositorySummary::RepositorySummary() : 
    m_nameHasBeenSet(false),
    m_administratorAccountHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

RepositorySummary::RepositorySummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_administratorAccountHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

RepositorySummary& RepositorySummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("administratorAccount"))
  {
    m_administratorAccount = jsonValue.GetString("administratorAccount");

    m_administratorAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domainOwner"))
  {
    m_domainOwner = jsonValue.GetString("domainOwner");

    m_domainOwnerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositorySummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_administratorAccountHasBeenSet)
  {
   payload.WithString("administratorAccount", m_administratorAccount);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("domainName", m_domainName);

  }

  if(m_domainOwnerHasBeenSet)
  {
   payload.WithString("domainOwner", m_domainOwner);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
