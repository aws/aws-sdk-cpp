/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/DataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

DataSource::DataSource() : 
    m_s3DataSourceHasBeenSet(false)
{
}

DataSource::DataSource(JsonView jsonValue) : 
    m_s3DataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("s3DataSource");

    m_s3DataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataSourceHasBeenSet)
  {
   payload.WithObject("s3DataSource", m_s3DataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
