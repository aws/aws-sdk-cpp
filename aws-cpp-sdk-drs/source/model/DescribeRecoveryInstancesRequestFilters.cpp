/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DescribeRecoveryInstancesRequestFilters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

DescribeRecoveryInstancesRequestFilters::DescribeRecoveryInstancesRequestFilters() : 
    m_recoveryInstanceIDsHasBeenSet(false),
    m_sourceServerIDsHasBeenSet(false)
{
}

DescribeRecoveryInstancesRequestFilters::DescribeRecoveryInstancesRequestFilters(JsonView jsonValue) : 
    m_recoveryInstanceIDsHasBeenSet(false),
    m_sourceServerIDsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeRecoveryInstancesRequestFilters& DescribeRecoveryInstancesRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recoveryInstanceIDs"))
  {
    Aws::Utils::Array<JsonView> recoveryInstanceIDsJsonList = jsonValue.GetArray("recoveryInstanceIDs");
    for(unsigned recoveryInstanceIDsIndex = 0; recoveryInstanceIDsIndex < recoveryInstanceIDsJsonList.GetLength(); ++recoveryInstanceIDsIndex)
    {
      m_recoveryInstanceIDs.push_back(recoveryInstanceIDsJsonList[recoveryInstanceIDsIndex].AsString());
    }
    m_recoveryInstanceIDsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceServerIDs"))
  {
    Aws::Utils::Array<JsonView> sourceServerIDsJsonList = jsonValue.GetArray("sourceServerIDs");
    for(unsigned sourceServerIDsIndex = 0; sourceServerIDsIndex < sourceServerIDsJsonList.GetLength(); ++sourceServerIDsIndex)
    {
      m_sourceServerIDs.push_back(sourceServerIDsJsonList[sourceServerIDsIndex].AsString());
    }
    m_sourceServerIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeRecoveryInstancesRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryInstanceIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recoveryInstanceIDsJsonList(m_recoveryInstanceIDs.size());
   for(unsigned recoveryInstanceIDsIndex = 0; recoveryInstanceIDsIndex < recoveryInstanceIDsJsonList.GetLength(); ++recoveryInstanceIDsIndex)
   {
     recoveryInstanceIDsJsonList[recoveryInstanceIDsIndex].AsString(m_recoveryInstanceIDs[recoveryInstanceIDsIndex]);
   }
   payload.WithArray("recoveryInstanceIDs", std::move(recoveryInstanceIDsJsonList));

  }

  if(m_sourceServerIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourceServerIDsJsonList(m_sourceServerIDs.size());
   for(unsigned sourceServerIDsIndex = 0; sourceServerIDsIndex < sourceServerIDsJsonList.GetLength(); ++sourceServerIDsIndex)
   {
     sourceServerIDsJsonList[sourceServerIDsIndex].AsString(m_sourceServerIDs[sourceServerIDsIndex]);
   }
   payload.WithArray("sourceServerIDs", std::move(sourceServerIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
