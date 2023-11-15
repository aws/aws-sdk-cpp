/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/WorkflowRunSortCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

WorkflowRunSortCriteria::WorkflowRunSortCriteria()
{
}

WorkflowRunSortCriteria::WorkflowRunSortCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkflowRunSortCriteria& WorkflowRunSortCriteria::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue WorkflowRunSortCriteria::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
