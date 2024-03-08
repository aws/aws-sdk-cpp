/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/StartLiveTailInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

StartLiveTailInitialResponse::StartLiveTailInitialResponse()
{
}

StartLiveTailInitialResponse::StartLiveTailInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

StartLiveTailInitialResponse& StartLiveTailInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue StartLiveTailInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
