/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FederatedResourceAlreadyExistsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

FederatedResourceAlreadyExistsException::FederatedResourceAlreadyExistsException() : 
    m_messageHasBeenSet(false),
    m_associatedGlueResourceHasBeenSet(false)
{
}

FederatedResourceAlreadyExistsException::FederatedResourceAlreadyExistsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_associatedGlueResourceHasBeenSet(false)
{
  *this = jsonValue;
}

FederatedResourceAlreadyExistsException& FederatedResourceAlreadyExistsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedGlueResource"))
  {
    m_associatedGlueResource = jsonValue.GetString("AssociatedGlueResource");

    m_associatedGlueResourceHasBeenSet = true;
  }

  return *this;
}

JsonValue FederatedResourceAlreadyExistsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_associatedGlueResourceHasBeenSet)
  {
   payload.WithString("AssociatedGlueResource", m_associatedGlueResource);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
