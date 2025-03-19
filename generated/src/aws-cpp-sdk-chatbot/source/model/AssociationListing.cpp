/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chatbot/model/AssociationListing.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace chatbot
{
namespace Model
{

AssociationListing::AssociationListing(JsonView jsonValue)
{
  *this = jsonValue;
}

AssociationListing& AssociationListing::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Resource"))
  {
    m_resource = jsonValue.GetString("Resource");
    m_resourceHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociationListing::Jsonize() const
{
  JsonValue payload;

  if(m_resourceHasBeenSet)
  {
   payload.WithString("Resource", m_resource);

  }

  return payload;
}

} // namespace Model
} // namespace chatbot
} // namespace Aws
