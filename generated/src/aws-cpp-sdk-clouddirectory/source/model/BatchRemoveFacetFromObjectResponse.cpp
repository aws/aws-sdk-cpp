/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/BatchRemoveFacetFromObjectResponse.h>
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

BatchRemoveFacetFromObjectResponse::BatchRemoveFacetFromObjectResponse()
{
}

BatchRemoveFacetFromObjectResponse::BatchRemoveFacetFromObjectResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchRemoveFacetFromObjectResponse& BatchRemoveFacetFromObjectResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue BatchRemoveFacetFromObjectResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
