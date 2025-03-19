/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2NonManagedApplicationStepOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

M2NonManagedApplicationStepOutput::M2NonManagedApplicationStepOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

M2NonManagedApplicationStepOutput& M2NonManagedApplicationStepOutput::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue M2NonManagedApplicationStepOutput::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
