/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/JsonOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

JsonOptions::JsonOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

JsonOptions& JsonOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MultiLine"))
  {
    m_multiLine = jsonValue.GetBool("MultiLine");
    m_multiLineHasBeenSet = true;
  }
  return *this;
}

JsonValue JsonOptions::Jsonize() const
{
  JsonValue payload;

  if(m_multiLineHasBeenSet)
  {
   payload.WithBool("MultiLine", m_multiLine);

  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
