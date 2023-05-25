/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchDetachTypedLinkResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudDirectory
{
namespace Model
{

BatchDetachTypedLinkResponse::BatchDetachTypedLinkResponse()
{
}

BatchDetachTypedLinkResponse::BatchDetachTypedLinkResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchDetachTypedLinkResponse& BatchDetachTypedLinkResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue BatchDetachTypedLinkResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
