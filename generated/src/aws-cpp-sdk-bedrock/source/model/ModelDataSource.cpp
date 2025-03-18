/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ModelDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

ModelDataSource::ModelDataSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ModelDataSource& ModelDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("s3DataSource");
    m_s3DataSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ModelDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataSourceHasBeenSet)
  {
   payload.WithObject("s3DataSource", m_s3DataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
