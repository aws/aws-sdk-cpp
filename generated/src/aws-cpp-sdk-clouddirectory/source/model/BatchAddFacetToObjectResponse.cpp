/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchAddFacetToObjectResponse.h>
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

BatchAddFacetToObjectResponse::BatchAddFacetToObjectResponse()
{
}

BatchAddFacetToObjectResponse::BatchAddFacetToObjectResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchAddFacetToObjectResponse& BatchAddFacetToObjectResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue BatchAddFacetToObjectResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
