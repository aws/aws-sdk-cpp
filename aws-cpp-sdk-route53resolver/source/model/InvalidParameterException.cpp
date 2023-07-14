/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/InvalidParameterException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

InvalidParameterException::InvalidParameterException() : 
    m_messageHasBeenSet(false),
    m_fieldNameHasBeenSet(false)
{
}

InvalidParameterException::InvalidParameterException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_fieldNameHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidParameterException& InvalidParameterException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");

    m_fieldNameHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidParameterException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  return payload;
}

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
