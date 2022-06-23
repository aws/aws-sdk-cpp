/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/BatchSegmentJobInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

BatchSegmentJobInput::BatchSegmentJobInput() : 
    m_s3DataSourceHasBeenSet(false)
{
}

BatchSegmentJobInput::BatchSegmentJobInput(JsonView jsonValue) : 
    m_s3DataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

BatchSegmentJobInput& BatchSegmentJobInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3DataSource"))
  {
    m_s3DataSource = jsonValue.GetObject("s3DataSource");

    m_s3DataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchSegmentJobInput::Jsonize() const
{
  JsonValue payload;

  if(m_s3DataSourceHasBeenSet)
  {
   payload.WithObject("s3DataSource", m_s3DataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
