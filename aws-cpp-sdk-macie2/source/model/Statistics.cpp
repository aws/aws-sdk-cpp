/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/Statistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

Statistics::Statistics() : 
    m_approximateNumberOfObjectsToProcess(0.0),
    m_approximateNumberOfObjectsToProcessHasBeenSet(false),
    m_numberOfRuns(0.0),
    m_numberOfRunsHasBeenSet(false)
{
}

Statistics::Statistics(JsonView jsonValue) : 
    m_approximateNumberOfObjectsToProcess(0.0),
    m_approximateNumberOfObjectsToProcessHasBeenSet(false),
    m_numberOfRuns(0.0),
    m_numberOfRunsHasBeenSet(false)
{
  *this = jsonValue;
}

Statistics& Statistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("approximateNumberOfObjectsToProcess"))
  {
    m_approximateNumberOfObjectsToProcess = jsonValue.GetDouble("approximateNumberOfObjectsToProcess");

    m_approximateNumberOfObjectsToProcessHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfRuns"))
  {
    m_numberOfRuns = jsonValue.GetDouble("numberOfRuns");

    m_numberOfRunsHasBeenSet = true;
  }

  return *this;
}

JsonValue Statistics::Jsonize() const
{
  JsonValue payload;

  if(m_approximateNumberOfObjectsToProcessHasBeenSet)
  {
   payload.WithDouble("approximateNumberOfObjectsToProcess", m_approximateNumberOfObjectsToProcess);

  }

  if(m_numberOfRunsHasBeenSet)
  {
   payload.WithDouble("numberOfRuns", m_numberOfRuns);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
