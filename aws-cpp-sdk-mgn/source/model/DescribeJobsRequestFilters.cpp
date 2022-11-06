/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/DescribeJobsRequestFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

DescribeJobsRequestFilters::DescribeJobsRequestFilters() : 
    m_fromDateHasBeenSet(false),
    m_jobIDsHasBeenSet(false),
    m_toDateHasBeenSet(false)
{
}

DescribeJobsRequestFilters::DescribeJobsRequestFilters(JsonView jsonValue) : 
    m_fromDateHasBeenSet(false),
    m_jobIDsHasBeenSet(false),
    m_toDateHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeJobsRequestFilters& DescribeJobsRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fromDate"))
  {
    m_fromDate = jsonValue.GetString("fromDate");

    m_fromDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("jobIDs"))
  {
    Aws::Utils::Array<JsonView> jobIDsJsonList = jsonValue.GetArray("jobIDs");
    for(unsigned jobIDsIndex = 0; jobIDsIndex < jobIDsJsonList.GetLength(); ++jobIDsIndex)
    {
      m_jobIDs.push_back(jobIDsJsonList[jobIDsIndex].AsString());
    }
    m_jobIDsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("toDate"))
  {
    m_toDate = jsonValue.GetString("toDate");

    m_toDateHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeJobsRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_fromDateHasBeenSet)
  {
   payload.WithString("fromDate", m_fromDate);

  }

  if(m_jobIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> jobIDsJsonList(m_jobIDs.size());
   for(unsigned jobIDsIndex = 0; jobIDsIndex < jobIDsJsonList.GetLength(); ++jobIDsIndex)
   {
     jobIDsJsonList[jobIDsIndex].AsString(m_jobIDs[jobIDsIndex]);
   }
   payload.WithArray("jobIDs", std::move(jobIDsJsonList));

  }

  if(m_toDateHasBeenSet)
  {
   payload.WithString("toDate", m_toDate);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
