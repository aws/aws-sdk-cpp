﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Throughput.h>
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

Throughput::Throughput(JsonView jsonValue)
{
  *this = jsonValue;
}

Throughput& Throughput::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetDouble("Total");
    m_totalHasBeenSet = true;
  }
  return *this;
}

JsonValue Throughput::Jsonize() const
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

  if(m_totalHasBeenSet)
  {
   payload.WithDouble("Total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
