/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsIamAccessKeySessionContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsIamAccessKeySessionContext::AwsIamAccessKeySessionContext() : 
    m_attributesHasBeenSet(false),
    m_sessionIssuerHasBeenSet(false)
{
}

AwsIamAccessKeySessionContext::AwsIamAccessKeySessionContext(JsonView jsonValue) : 
    m_attributesHasBeenSet(false),
    m_sessionIssuerHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamAccessKeySessionContext& AwsIamAccessKeySessionContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Attributes"))
  {
    m_attributes = jsonValue.GetObject("Attributes");

    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionIssuer"))
  {
    m_sessionIssuer = jsonValue.GetObject("SessionIssuer");

    m_sessionIssuerHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamAccessKeySessionContext::Jsonize() const
{
  JsonValue payload;

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("Attributes", m_attributes.Jsonize());

  }

  if(m_sessionIssuerHasBeenSet)
  {
   payload.WithObject("SessionIssuer", m_sessionIssuer.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
