/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr-public/model/Registry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

Registry::Registry() : 
    m_registryIdHasBeenSet(false),
    m_registryArnHasBeenSet(false),
    m_registryUriHasBeenSet(false),
    m_verified(false),
    m_verifiedHasBeenSet(false),
    m_aliasesHasBeenSet(false)
{
}

Registry::Registry(JsonView jsonValue) : 
    m_registryIdHasBeenSet(false),
    m_registryArnHasBeenSet(false),
    m_registryUriHasBeenSet(false),
    m_verified(false),
    m_verifiedHasBeenSet(false),
    m_aliasesHasBeenSet(false)
{
  *this = jsonValue;
}

Registry& Registry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registryArn"))
  {
    m_registryArn = jsonValue.GetString("registryArn");

    m_registryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registryUri"))
  {
    m_registryUri = jsonValue.GetString("registryUri");

    m_registryUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("verified"))
  {
    m_verified = jsonValue.GetBool("verified");

    m_verifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("aliases"))
  {
    Aws::Utils::Array<JsonView> aliasesJsonList = jsonValue.GetArray("aliases");
    for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
    {
      m_aliases.push_back(aliasesJsonList[aliasesIndex].AsObject());
    }
    m_aliasesHasBeenSet = true;
  }

  return *this;
}

JsonValue Registry::Jsonize() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_registryArnHasBeenSet)
  {
   payload.WithString("registryArn", m_registryArn);

  }

  if(m_registryUriHasBeenSet)
  {
   payload.WithString("registryUri", m_registryUri);

  }

  if(m_verifiedHasBeenSet)
  {
   payload.WithBool("verified", m_verified);

  }

  if(m_aliasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> aliasesJsonList(m_aliases.size());
   for(unsigned aliasesIndex = 0; aliasesIndex < aliasesJsonList.GetLength(); ++aliasesIndex)
   {
     aliasesJsonList[aliasesIndex].AsObject(m_aliases[aliasesIndex].Jsonize());
   }
   payload.WithArray("aliases", std::move(aliasesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
