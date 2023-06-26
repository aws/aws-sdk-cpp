/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ErrorDetails.h>
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

ErrorDetails::ErrorDetails() : 
    m_code(ErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

ErrorDetails::ErrorDetails(JsonView jsonValue) : 
    m_code(ErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorDetails& ErrorDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("details"))
  {
    Aws::Utils::Array<JsonView> detailsJsonList = jsonValue.GetArray("details");
    for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
    {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorDetails::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", ErrorCodeMapper::GetNameForErrorCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_detailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> detailsJsonList(m_details.size());
   for(unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex)
   {
     detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
   }
   payload.WithArray("details", std::move(detailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
