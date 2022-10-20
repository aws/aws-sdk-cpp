/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/RepositoryDescription.h>
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

RepositoryDescription::RepositoryDescription() : 
    m_nameHasBeenSet(false),
    m_administratorAccountHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_upstreamsHasBeenSet(false),
    m_externalConnectionsHasBeenSet(false)
{
}

RepositoryDescription::RepositoryDescription(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_administratorAccountHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_domainOwnerHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_upstreamsHasBeenSet(false),
    m_externalConnectionsHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryDescription& RepositoryDescription::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("upstreams"))
  {
    Aws::Utils::Array<JsonView> upstreamsJsonList = jsonValue.GetArray("upstreams");
    for(unsigned upstreamsIndex = 0; upstreamsIndex < upstreamsJsonList.GetLength(); ++upstreamsIndex)
    {
      m_upstreams.push_back(upstreamsJsonList[upstreamsIndex].AsObject());
    }
    m_upstreamsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalConnections"))
  {
    Aws::Utils::Array<JsonView> externalConnectionsJsonList = jsonValue.GetArray("externalConnections");
    for(unsigned externalConnectionsIndex = 0; externalConnectionsIndex < externalConnectionsJsonList.GetLength(); ++externalConnectionsIndex)
    {
      m_externalConnections.push_back(externalConnectionsJsonList[externalConnectionsIndex].AsObject());
    }
    m_externalConnectionsHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryDescription::Jsonize() const
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

  if(m_upstreamsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> upstreamsJsonList(m_upstreams.size());
   for(unsigned upstreamsIndex = 0; upstreamsIndex < upstreamsJsonList.GetLength(); ++upstreamsIndex)
   {
     upstreamsJsonList[upstreamsIndex].AsObject(m_upstreams[upstreamsIndex].Jsonize());
   }
   payload.WithArray("upstreams", std::move(upstreamsJsonList));

  }

  if(m_externalConnectionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> externalConnectionsJsonList(m_externalConnections.size());
   for(unsigned externalConnectionsIndex = 0; externalConnectionsIndex < externalConnectionsJsonList.GetLength(); ++externalConnectionsIndex)
   {
     externalConnectionsJsonList[externalConnectionsIndex].AsObject(m_externalConnections[externalConnectionsIndex].Jsonize());
   }
   payload.WithArray("externalConnections", std::move(externalConnectionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
