/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Latency.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

Latency::Latency() : 
    m_read(0.0),
    m_readHasBeenSet(false),
    m_write(0.0),
    m_writeHasBeenSet(false),
    m_other(0.0),
    m_otherHasBeenSet(false)
{
}

Latency::Latency(JsonView jsonValue) : 
    m_read(0.0),
    m_readHasBeenSet(false),
    m_write(0.0),
    m_writeHasBeenSet(false),
    m_other(0.0),
    m_otherHasBeenSet(false)
{
  *this = jsonValue;
}

Latency& Latency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Read"))
  {
    m_read = jsonValue.GetDouble("Read");

    m_readHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Write"))
  {
    m_write = jsonValue.GetDouble("Write");

    m_writeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Other"))
  {
    m_other = jsonValue.GetDouble("Other");

    m_otherHasBeenSet = true;
  }

  return *this;
}

JsonValue Latency::Jsonize() const
{
  JsonValue payload;

  if(m_readHasBeenSet)
  {
   payload.WithDouble("Read", m_read);

  }

  if(m_writeHasBeenSet)
  {
   payload.WithDouble("Write", m_write);

  }

  if(m_otherHasBeenSet)
  {
   payload.WithDouble("Other", m_other);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
