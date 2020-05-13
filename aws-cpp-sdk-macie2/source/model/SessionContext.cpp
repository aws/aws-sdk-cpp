/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
