/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ResultsSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ResultsSummary::ResultsSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ResultsSummary& ResultsSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UpdatedRecords"))
  {
    m_updatedRecords = jsonValue.GetInt64("UpdatedRecords");
    m_updatedRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedRecords"))
  {
    m_createdRecords = jsonValue.GetInt64("CreatedRecords");
    m_createdRecordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedRecords"))
  {
    m_failedRecords = jsonValue.GetInt64("FailedRecords");
    m_failedRecordsHasBeenSet = true;
  }
  return *this;
}

JsonValue ResultsSummary::Jsonize() const
{
  JsonValue payload;

  if(m_updatedRecordsHasBeenSet)
  {
   payload.WithInt64("UpdatedRecords", m_updatedRecords);

  }

  if(m_createdRecordsHasBeenSet)
  {
   payload.WithInt64("CreatedRecords", m_createdRecords);

  }

  if(m_failedRecordsHasBeenSet)
  {
   payload.WithInt64("FailedRecords", m_failedRecords);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
