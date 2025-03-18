/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/InferenceProfileModelSource.h>
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

InferenceProfileModelSource::InferenceProfileModelSource(JsonView jsonValue)
{
  *this = jsonValue;
}

InferenceProfileModelSource& InferenceProfileModelSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("copyFrom"))
  {
    m_copyFrom = jsonValue.GetString("copyFrom");
    m_copyFromHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceProfileModelSource::Jsonize() const
{
  JsonValue payload;

  if(m_copyFromHasBeenSet)
  {
   payload.WithString("copyFrom", m_copyFrom);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
