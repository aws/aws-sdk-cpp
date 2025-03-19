/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedJobDirectAnalysisConfigurationDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedJobDirectAnalysisConfigurationDetails::ProtectedJobDirectAnalysisConfigurationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtectedJobDirectAnalysisConfigurationDetails& ProtectedJobDirectAnalysisConfigurationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("receiverAccountIds"))
  {
    Aws::Utils::Array<JsonView> receiverAccountIdsJsonList = jsonValue.GetArray("receiverAccountIds");
    for(unsigned receiverAccountIdsIndex = 0; receiverAccountIdsIndex < receiverAccountIdsJsonList.GetLength(); ++receiverAccountIdsIndex)
    {
      m_receiverAccountIds.push_back(receiverAccountIdsJsonList[receiverAccountIdsIndex].AsString());
    }
    m_receiverAccountIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtectedJobDirectAnalysisConfigurationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_receiverAccountIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> receiverAccountIdsJsonList(m_receiverAccountIds.size());
   for(unsigned receiverAccountIdsIndex = 0; receiverAccountIdsIndex < receiverAccountIdsJsonList.GetLength(); ++receiverAccountIdsIndex)
   {
     receiverAccountIdsJsonList[receiverAccountIdsIndex].AsString(m_receiverAccountIds[receiverAccountIdsIndex]);
   }
   payload.WithArray("receiverAccountIds", std::move(receiverAccountIdsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
