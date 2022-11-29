/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineCustomLabelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ReferenceLineCustomLabelConfiguration::ReferenceLineCustomLabelConfiguration() : 
    m_customLabelHasBeenSet(false)
{
}

ReferenceLineCustomLabelConfiguration::ReferenceLineCustomLabelConfiguration(JsonView jsonValue) : 
    m_customLabelHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceLineCustomLabelConfiguration& ReferenceLineCustomLabelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomLabel"))
  {
    m_customLabel = jsonValue.GetString("CustomLabel");

    m_customLabelHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceLineCustomLabelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customLabelHasBeenSet)
  {
   payload.WithString("CustomLabel", m_customLabel);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
