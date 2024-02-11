/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/WorkflowRunStatusReason.h>
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

WorkflowRunStatusReason::WorkflowRunStatusReason()
{
}

WorkflowRunStatusReason::WorkflowRunStatusReason(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkflowRunStatusReason& WorkflowRunStatusReason::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue WorkflowRunStatusReason::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
