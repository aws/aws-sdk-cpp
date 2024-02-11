/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscribedProjectInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

SubscribedProjectInput::SubscribedProjectInput() : 
    m_identifierHasBeenSet(false)
{
}

SubscribedProjectInput::SubscribedProjectInput(JsonView jsonValue) : 
    m_identifierHasBeenSet(false)
{
  *this = jsonValue;
}

SubscribedProjectInput& SubscribedProjectInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");

    m_identifierHasBeenSet = true;
  }

  return *this;
}

JsonValue SubscribedProjectInput::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
