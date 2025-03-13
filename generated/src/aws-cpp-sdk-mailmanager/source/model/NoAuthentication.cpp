/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/NoAuthentication.h>
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

NoAuthentication::NoAuthentication(JsonView jsonValue)
{
  *this = jsonValue;
}

NoAuthentication& NoAuthentication::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue NoAuthentication::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MailManager
} // namespace Aws
