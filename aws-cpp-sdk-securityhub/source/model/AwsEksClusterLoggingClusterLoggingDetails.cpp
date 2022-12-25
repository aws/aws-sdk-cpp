/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEksClusterLoggingClusterLoggingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEksClusterLoggingClusterLoggingDetails::AwsEksClusterLoggingClusterLoggingDetails() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_typesHasBeenSet(false)
{
}

AwsEksClusterLoggingClusterLoggingDetails::AwsEksClusterLoggingClusterLoggingDetails(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_typesHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEksClusterLoggingClusterLoggingDetails& AwsEksClusterLoggingClusterLoggingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Types"))
  {
    Aws::Utils::Array<JsonView> typesJsonList = jsonValue.GetArray("Types");
    for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
    {
      m_types.push_back(typesJsonList[typesIndex].AsString());
    }
    m_typesHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEksClusterLoggingClusterLoggingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_typesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> typesJsonList(m_types.size());
   for(unsigned typesIndex = 0; typesIndex < typesJsonList.GetLength(); ++typesIndex)
   {
     typesJsonList[typesIndex].AsString(m_types[typesIndex]);
   }
   payload.WithArray("Types", std::move(typesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
