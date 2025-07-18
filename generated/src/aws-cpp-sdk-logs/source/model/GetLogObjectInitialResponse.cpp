/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/GetLogObjectInitialResponse.h>
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

GetLogObjectInitialResponse::GetLogObjectInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

GetLogObjectInitialResponse& GetLogObjectInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

GetLogObjectInitialResponse::GetLogObjectInitialResponse(const Http::HeaderValueCollection& headers) : GetLogObjectInitialResponse()
{
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue GetLogObjectInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
