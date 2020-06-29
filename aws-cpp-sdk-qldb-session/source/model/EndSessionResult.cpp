/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/EndSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QLDBSession
{
namespace Model
{

EndSessionResult::EndSessionResult()
{
}

EndSessionResult::EndSessionResult(JsonView jsonValue)
{
  *this = jsonValue;
}

EndSessionResult& EndSessionResult::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue EndSessionResult::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
