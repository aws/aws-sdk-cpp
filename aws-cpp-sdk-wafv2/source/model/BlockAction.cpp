/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/BlockAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

BlockAction::BlockAction()
{
}

BlockAction::BlockAction(JsonView jsonValue)
{
  *this = jsonValue;
}

BlockAction& BlockAction::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue BlockAction::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
