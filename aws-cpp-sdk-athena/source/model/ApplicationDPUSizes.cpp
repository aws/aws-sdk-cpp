/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/ApplicationDPUSizes.h>
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

ApplicationDPUSizes::ApplicationDPUSizes() : 
    m_applicationRuntimeIdHasBeenSet(false),
    m_supportedDPUSizesHasBeenSet(false)
{
}

ApplicationDPUSizes::ApplicationDPUSizes(JsonView jsonValue) : 
    m_applicationRuntimeIdHasBeenSet(false),
    m_supportedDPUSizesHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationDPUSizes& ApplicationDPUSizes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationRuntimeId"))
  {
    m_applicationRuntimeId = jsonValue.GetString("ApplicationRuntimeId");

    m_applicationRuntimeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SupportedDPUSizes"))
  {
    Aws::Utils::Array<JsonView> supportedDPUSizesJsonList = jsonValue.GetArray("SupportedDPUSizes");
    for(unsigned supportedDPUSizesIndex = 0; supportedDPUSizesIndex < supportedDPUSizesJsonList.GetLength(); ++supportedDPUSizesIndex)
    {
      m_supportedDPUSizes.push_back(supportedDPUSizesJsonList[supportedDPUSizesIndex].AsInteger());
    }
    m_supportedDPUSizesHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationDPUSizes::Jsonize() const
{
  JsonValue payload;

  if(m_applicationRuntimeIdHasBeenSet)
  {
   payload.WithString("ApplicationRuntimeId", m_applicationRuntimeId);

  }

  if(m_supportedDPUSizesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedDPUSizesJsonList(m_supportedDPUSizes.size());
   for(unsigned supportedDPUSizesIndex = 0; supportedDPUSizesIndex < supportedDPUSizesJsonList.GetLength(); ++supportedDPUSizesIndex)
   {
     supportedDPUSizesJsonList[supportedDPUSizesIndex].AsInteger(m_supportedDPUSizes[supportedDPUSizesIndex]);
   }
   payload.WithArray("SupportedDPUSizes", std::move(supportedDPUSizesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Athena
} // namespace Aws
