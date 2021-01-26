/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/SessionContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

SessionContext::SessionContext() : 
    m_attributesHasBeenSet(false),
    m_sessionIssuerHasBeenSet(false)
{
}

SessionContext::SessionContext(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_sessionIssuerHasBeenSet(false)
{
  *this = jsonValue;
}

SessionContext& SessionContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("attributes"))
  {
    m_attributes = jsonValue.GetObject("attributes");

    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sessionIssuer"))
  {
    m_sessionIssuer = jsonValue.GetObject("sessionIssuer");

    m_sessionIssuerHasBeenSet = true;
  }

  return *this;
}

JsonValue SessionContext::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("attributes", m_attributes.Jsonize());

  }

  if(m_sessionIssuerHasBeenSet)
  {
   payload.WithObject("sessionIssuer", m_sessionIssuer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
