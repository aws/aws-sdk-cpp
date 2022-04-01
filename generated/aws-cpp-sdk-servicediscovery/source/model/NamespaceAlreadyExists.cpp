/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicediscovery/model/NamespaceAlreadyExists.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{

NamespaceAlreadyExists::NamespaceAlreadyExists() : 
    m_messageHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false)
{
}

NamespaceAlreadyExists::NamespaceAlreadyExists(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false)
{
  *this = jsonValue;
}

NamespaceAlreadyExists& NamespaceAlreadyExists::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NamespaceId"))
  {
    m_namespaceId = jsonValue.GetString("NamespaceId");

    m_namespaceIdHasBeenSet = true;
  }

  return *this;
}

JsonValue NamespaceAlreadyExists::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_namespaceIdHasBeenSet)
  {
   payload.WithString("NamespaceId", m_namespaceId);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
