/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/FailureConditions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

FailureConditions::FailureConditions() : 
    m_result(Result::NOT_SET),
    m_resultHasBeenSet(false)
{
}

FailureConditions::FailureConditions(JsonView jsonValue) : 
    m_result(Result::NOT_SET),
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

FailureConditions& FailureConditions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("result"))
  {
    m_result = ResultMapper::GetResultForName(jsonValue.GetString("result"));

    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue FailureConditions::Jsonize() const
{
  JsonValue payload;

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", ResultMapper::GetNameForResult(m_result));
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
