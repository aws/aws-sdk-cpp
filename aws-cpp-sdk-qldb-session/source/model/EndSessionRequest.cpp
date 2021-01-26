/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qldb-session/model/EndSessionRequest.h>
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

EndSessionRequest::EndSessionRequest()
{
}

EndSessionRequest::EndSessionRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

EndSessionRequest& EndSessionRequest::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue EndSessionRequest::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace QLDBSession
} // namespace Aws
