/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/EntityNotFoundException.h>
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

EntityNotFoundException::EntityNotFoundException() : 
    m_messageHasBeenSet(false),
    m_fromFederationSource(false),
    m_fromFederationSourceHasBeenSet(false)
{
}

EntityNotFoundException::EntityNotFoundException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_fromFederationSource(false),
    m_fromFederationSourceHasBeenSet(false)
{
  *this = jsonValue;
}

EntityNotFoundException& EntityNotFoundException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FromFederationSource"))
  {
    m_fromFederationSource = jsonValue.GetBool("FromFederationSource");

    m_fromFederationSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityNotFoundException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_fromFederationSourceHasBeenSet)
  {
   payload.WithBool("FromFederationSource", m_fromFederationSource);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
