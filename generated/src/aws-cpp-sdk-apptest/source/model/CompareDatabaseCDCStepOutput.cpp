/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CompareDatabaseCDCStepOutput.h>
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

CompareDatabaseCDCStepOutput::CompareDatabaseCDCStepOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

CompareDatabaseCDCStepOutput& CompareDatabaseCDCStepOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("comparisonOutputLocation"))
  {
    m_comparisonOutputLocation = jsonValue.GetString("comparisonOutputLocation");
    m_comparisonOutputLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("comparisonStatus"))
  {
    m_comparisonStatus = ComparisonStatusEnumMapper::GetComparisonStatusEnumForName(jsonValue.GetString("comparisonStatus"));
    m_comparisonStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue CompareDatabaseCDCStepOutput::Jsonize() const
{
  JsonValue payload;

  if(m_comparisonOutputLocationHasBeenSet)
  {
   payload.WithString("comparisonOutputLocation", m_comparisonOutputLocation);

  }

  if(m_comparisonStatusHasBeenSet)
  {
   payload.WithString("comparisonStatus", ComparisonStatusEnumMapper::GetNameForComparisonStatusEnum(m_comparisonStatus));
  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
