/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/Message.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Message::Message() : 
    m_subjectHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
}

Message::Message(JsonView jsonValue) : 
    m_subjectHasBeenSet(false),
    m_bodyHasBeenSet(false)
{
  *this = jsonValue;
}

Message& Message::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetObject("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Body"))
  {
    m_body = jsonValue.GetObject("Body");

    m_bodyHasBeenSet = true;
  }

  return *this;
}

JsonValue Message::Jsonize() const
{
  JsonValue payload;

  if(m_subjectHasBeenSet)
  {
   payload.WithObject("Subject", m_subject.Jsonize());

  }

  if(m_bodyHasBeenSet)
  {
   payload.WithObject("Body", m_body.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
