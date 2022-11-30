/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CalculationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

CalculationResult::CalculationResult() : 
    m_stdOutS3UriHasBeenSet(false),
    m_stdErrorS3UriHasBeenSet(false),
    m_resultS3UriHasBeenSet(false),
    m_resultTypeHasBeenSet(false)
{
}

CalculationResult::CalculationResult(JsonView jsonValue) : 
    m_stdOutS3UriHasBeenSet(false),
    m_stdErrorS3UriHasBeenSet(false),
    m_resultS3UriHasBeenSet(false),
    m_resultTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CalculationResult& CalculationResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StdOutS3Uri"))
  {
    m_stdOutS3Uri = jsonValue.GetString("StdOutS3Uri");

    m_stdOutS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StdErrorS3Uri"))
  {
    m_stdErrorS3Uri = jsonValue.GetString("StdErrorS3Uri");

    m_stdErrorS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultS3Uri"))
  {
    m_resultS3Uri = jsonValue.GetString("ResultS3Uri");

    m_resultS3UriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultType"))
  {
    m_resultType = jsonValue.GetString("ResultType");

    m_resultTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CalculationResult::Jsonize() const
{
  JsonValue payload;

  if(m_stdOutS3UriHasBeenSet)
  {
   payload.WithString("StdOutS3Uri", m_stdOutS3Uri);

  }

  if(m_stdErrorS3UriHasBeenSet)
  {
   payload.WithString("StdErrorS3Uri", m_stdErrorS3Uri);

  }

  if(m_resultS3UriHasBeenSet)
  {
   payload.WithString("ResultS3Uri", m_resultS3Uri);

  }

  if(m_resultTypeHasBeenSet)
  {
   payload.WithString("ResultType", m_resultType);

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
