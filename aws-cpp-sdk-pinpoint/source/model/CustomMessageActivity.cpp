/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/CustomMessageActivity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

CustomMessageActivity::CustomMessageActivity() : 
    m_deliveryUriHasBeenSet(false),
    m_endpointTypesHasBeenSet(false),
    m_messageConfigHasBeenSet(false),
    m_nextActivityHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateVersionHasBeenSet(false)
{
}

CustomMessageActivity::CustomMessageActivity(JsonView jsonValue) : 
    m_deliveryUriHasBeenSet(false),
    m_endpointTypesHasBeenSet(false),
    m_messageConfigHasBeenSet(false),
    m_nextActivityHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_templateVersionHasBeenSet(false)
{
  *this = jsonValue;
}

CustomMessageActivity& CustomMessageActivity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DeliveryUri"))
  {
    m_deliveryUri = jsonValue.GetString("DeliveryUri");

    m_deliveryUriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointTypes"))
  {
    Aws::Utils::Array<JsonView> endpointTypesJsonList = jsonValue.GetArray("EndpointTypes");
    for(unsigned endpointTypesIndex = 0; endpointTypesIndex < endpointTypesJsonList.GetLength(); ++endpointTypesIndex)
    {
      m_endpointTypes.push_back(__EndpointTypesElementMapper::Get__EndpointTypesElementForName(endpointTypesJsonList[endpointTypesIndex].AsString()));
    }
    m_endpointTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageConfig"))
  {
    m_messageConfig = jsonValue.GetObject("MessageConfig");

    m_messageConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NextActivity"))
  {
    m_nextActivity = jsonValue.GetString("NextActivity");

    m_nextActivityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateName"))
  {
    m_templateName = jsonValue.GetString("TemplateName");

    m_templateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TemplateVersion"))
  {
    m_templateVersion = jsonValue.GetString("TemplateVersion");

    m_templateVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomMessageActivity::Jsonize() const
{
  JsonValue payload;

  if(m_deliveryUriHasBeenSet)
  {
   payload.WithString("DeliveryUri", m_deliveryUri);

  }

  if(m_endpointTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointTypesJsonList(m_endpointTypes.size());
   for(unsigned endpointTypesIndex = 0; endpointTypesIndex < endpointTypesJsonList.GetLength(); ++endpointTypesIndex)
   {
     endpointTypesJsonList[endpointTypesIndex].AsString(__EndpointTypesElementMapper::GetNameFor__EndpointTypesElement(m_endpointTypes[endpointTypesIndex]));
   }
   payload.WithArray("EndpointTypes", std::move(endpointTypesJsonList));

  }

  if(m_messageConfigHasBeenSet)
  {
   payload.WithObject("MessageConfig", m_messageConfig.Jsonize());

  }

  if(m_nextActivityHasBeenSet)
  {
   payload.WithString("NextActivity", m_nextActivity);

  }

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("TemplateName", m_templateName);

  }

  if(m_templateVersionHasBeenSet)
  {
   payload.WithString("TemplateVersion", m_templateVersion);

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
