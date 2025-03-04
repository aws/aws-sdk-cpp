/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/StartLiveTailInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

StartLiveTailInitialResponse::StartLiveTailInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

StartLiveTailInitialResponse& StartLiveTailInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

StartLiveTailInitialResponse::StartLiveTailInitialResponse(const Http::HeaderValueCollection& headers) : StartLiveTailInitialResponse()
{
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue StartLiveTailInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
