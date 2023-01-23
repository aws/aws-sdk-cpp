/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/PayloadTooLargeException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppConfig
{
namespace Model
{

PayloadTooLargeException::PayloadTooLargeException() : 
    m_messageHasBeenSet(false),
    m_measure(BytesMeasure::NOT_SET),
    m_measureHasBeenSet(false),
    m_limit(0.0),
    m_limitHasBeenSet(false),
    m_size(0.0),
    m_sizeHasBeenSet(false)
{
}

PayloadTooLargeException::PayloadTooLargeException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_measure(BytesMeasure::NOT_SET),
    m_measureHasBeenSet(false),
    m_limit(0.0),
    m_limitHasBeenSet(false),
    m_size(0.0),
    m_sizeHasBeenSet(false)
{
  *this = jsonValue;
}

PayloadTooLargeException& PayloadTooLargeException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Measure"))
  {
    m_measure = BytesMeasureMapper::GetBytesMeasureForName(jsonValue.GetString("Measure"));

    m_measureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Limit"))
  {
    m_limit = jsonValue.GetDouble("Limit");

    m_limitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetDouble("Size");

    m_sizeHasBeenSet = true;
  }

  return *this;
}

JsonValue PayloadTooLargeException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_measureHasBeenSet)
  {
   payload.WithString("Measure", BytesMeasureMapper::GetNameForBytesMeasure(m_measure));
  }

  if(m_limitHasBeenSet)
  {
   payload.WithDouble("Limit", m_limit);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithDouble("Size", m_size);

  }

  return payload;
}

} // namespace Model
} // namespace AppConfig
} // namespace Aws
