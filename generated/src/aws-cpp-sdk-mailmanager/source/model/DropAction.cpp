/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/DropAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MailManager
{
namespace Model
{

DropAction::DropAction(JsonView jsonValue)
{
  *this = jsonValue;
}

DropAction& DropAction::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue DropAction::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
