/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/InvocationOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

InvocationOutput::InvocationOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

InvocationOutput& InvocationOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("citations"))
  {
    Aws::Utils::Array<JsonView> citationsJsonList = jsonValue.GetArray("citations");
    for(unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex)
    {
      m_citations.push_back(citationsJsonList[citationsIndex].AsObject());
    }
    m_citationsHasBeenSet = true;
  }
  return *this;
}

JsonValue InvocationOutput::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_citationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> citationsJsonList(m_citations.size());
   for(unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex)
   {
     citationsJsonList[citationsIndex].AsObject(m_citations[citationsIndex].Jsonize());
   }
   payload.WithArray("citations", std::move(citationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
