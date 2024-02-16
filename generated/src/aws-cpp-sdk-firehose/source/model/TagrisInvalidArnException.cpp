/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/TagrisInvalidArnException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

TagrisInvalidArnException::TagrisInvalidArnException() : 
    m_messageHasBeenSet(false),
    m_sweepListItemHasBeenSet(false)
{
}

TagrisInvalidArnException::TagrisInvalidArnException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_sweepListItemHasBeenSet(false)
{
  *this = jsonValue;
}

TagrisInvalidArnException& TagrisInvalidArnException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sweepListItem"))
  {
    m_sweepListItem = jsonValue.GetObject("sweepListItem");

    m_sweepListItemHasBeenSet = true;
  }

  return *this;
}

JsonValue TagrisInvalidArnException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_sweepListItemHasBeenSet)
  {
   payload.WithObject("sweepListItem", m_sweepListItem.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
