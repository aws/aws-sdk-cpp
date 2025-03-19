/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/OnChangeStateTemplateUpdateStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

OnChangeStateTemplateUpdateStrategy::OnChangeStateTemplateUpdateStrategy(JsonView jsonValue)
{
  *this = jsonValue;
}

OnChangeStateTemplateUpdateStrategy& OnChangeStateTemplateUpdateStrategy::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue OnChangeStateTemplateUpdateStrategy::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
