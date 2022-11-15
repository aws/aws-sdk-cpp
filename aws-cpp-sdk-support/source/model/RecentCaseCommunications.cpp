/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support/model/RecentCaseCommunications.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Support
{
namespace Model
{

RecentCaseCommunications::RecentCaseCommunications() : 
    m_communicationsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

RecentCaseCommunications::RecentCaseCommunications(JsonView jsonValue) : 
    m_communicationsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
  *this = jsonValue;
}

RecentCaseCommunications& RecentCaseCommunications::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("communications"))
  {
    Aws::Utils::Array<JsonView> communicationsJsonList = jsonValue.GetArray("communications");
    for(unsigned communicationsIndex = 0; communicationsIndex < communicationsJsonList.GetLength(); ++communicationsIndex)
    {
      m_communications.push_back(communicationsJsonList[communicationsIndex].AsObject());
    }
    m_communicationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

    m_nextTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue RecentCaseCommunications::Jsonize() const
{
  JsonValue payload;

  if(m_communicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> communicationsJsonList(m_communications.size());
   for(unsigned communicationsIndex = 0; communicationsIndex < communicationsJsonList.GetLength(); ++communicationsIndex)
   {
     communicationsJsonList[communicationsIndex].AsObject(m_communications[communicationsIndex].Jsonize());
   }
   payload.WithArray("communications", std::move(communicationsJsonList));

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload;
}

} // namespace Model
} // namespace Support
} // namespace Aws
