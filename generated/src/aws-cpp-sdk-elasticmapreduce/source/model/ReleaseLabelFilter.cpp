/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/ReleaseLabelFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

ReleaseLabelFilter::ReleaseLabelFilter() : 
    m_prefixHasBeenSet(false),
    m_applicationHasBeenSet(false)
{
}

ReleaseLabelFilter::ReleaseLabelFilter(JsonView jsonValue) : 
    m_prefixHasBeenSet(false),
    m_applicationHasBeenSet(false)
{
  *this = jsonValue;
}

ReleaseLabelFilter& ReleaseLabelFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Prefix"))
  {
    m_prefix = jsonValue.GetString("Prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Application"))
  {
    m_application = jsonValue.GetString("Application");

    m_applicationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReleaseLabelFilter::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("Prefix", m_prefix);

  }

  if(m_applicationHasBeenSet)
  {
   payload.WithString("Application", m_application);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
