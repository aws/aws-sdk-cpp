/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DescribeSourceServersRequestFilters.h>
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

DescribeSourceServersRequestFilters::DescribeSourceServersRequestFilters() : 
    m_hardwareIdHasBeenSet(false),
    m_sourceServerIDsHasBeenSet(false),
    m_stagingAccountIDsHasBeenSet(false)
{
}

DescribeSourceServersRequestFilters::DescribeSourceServersRequestFilters(JsonView jsonValue) : 
    m_hardwareIdHasBeenSet(false),
    m_sourceServerIDsHasBeenSet(false),
    m_stagingAccountIDsHasBeenSet(false)
{
  *this = jsonValue;
}

DescribeSourceServersRequestFilters& DescribeSourceServersRequestFilters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hardwareId"))
  {
    m_hardwareId = jsonValue.GetString("hardwareId");

    m_hardwareIdHasBeenSet = true;
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

  if(jsonValue.ValueExists("stagingAccountIDs"))
  {
    Aws::Utils::Array<JsonView> stagingAccountIDsJsonList = jsonValue.GetArray("stagingAccountIDs");
    for(unsigned stagingAccountIDsIndex = 0; stagingAccountIDsIndex < stagingAccountIDsJsonList.GetLength(); ++stagingAccountIDsIndex)
    {
      m_stagingAccountIDs.push_back(stagingAccountIDsJsonList[stagingAccountIDsIndex].AsString());
    }
    m_stagingAccountIDsHasBeenSet = true;
  }

  return *this;
}

JsonValue DescribeSourceServersRequestFilters::Jsonize() const
{
  JsonValue payload;

  if(m_hardwareIdHasBeenSet)
  {
   payload.WithString("hardwareId", m_hardwareId);

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

  if(m_stagingAccountIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stagingAccountIDsJsonList(m_stagingAccountIDs.size());
   for(unsigned stagingAccountIDsIndex = 0; stagingAccountIDsIndex < stagingAccountIDsJsonList.GetLength(); ++stagingAccountIDsIndex)
   {
     stagingAccountIDsJsonList[stagingAccountIDsIndex].AsString(m_stagingAccountIDs[stagingAccountIDsIndex]);
   }
   payload.WithArray("stagingAccountIDs", std::move(stagingAccountIDsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
