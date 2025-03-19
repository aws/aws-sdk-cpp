/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/SmsChannelSubtypeParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaignsV2
{
namespace Model
{

SmsChannelSubtypeParameters::SmsChannelSubtypeParameters(JsonView jsonValue)
{
  *this = jsonValue;
}

SmsChannelSubtypeParameters& SmsChannelSubtypeParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationPhoneNumber"))
  {
    m_destinationPhoneNumber = jsonValue.GetString("destinationPhoneNumber");
    m_destinationPhoneNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectSourcePhoneNumberArn"))
  {
    m_connectSourcePhoneNumberArn = jsonValue.GetString("connectSourcePhoneNumberArn");
    m_connectSourcePhoneNumberArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateArn"))
  {
    m_templateArn = jsonValue.GetString("templateArn");
    m_templateArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateParameters"))
  {
    Aws::Map<Aws::String, JsonView> templateParametersJsonMap = jsonValue.GetObject("templateParameters").GetAllObjects();
    for(auto& templateParametersItem : templateParametersJsonMap)
    {
      m_templateParameters[templateParametersItem.first] = templateParametersItem.second.AsString();
    }
    m_templateParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue SmsChannelSubtypeParameters::Jsonize() const
{
  JsonValue payload;

  if(m_destinationPhoneNumberHasBeenSet)
  {
   payload.WithString("destinationPhoneNumber", m_destinationPhoneNumber);

  }

  if(m_connectSourcePhoneNumberArnHasBeenSet)
  {
   payload.WithString("connectSourcePhoneNumberArn", m_connectSourcePhoneNumberArn);

  }

  if(m_templateArnHasBeenSet)
  {
   payload.WithString("templateArn", m_templateArn);

  }

  if(m_templateParametersHasBeenSet)
  {
   JsonValue templateParametersJsonMap;
   for(auto& templateParametersItem : m_templateParameters)
   {
     templateParametersJsonMap.WithString(templateParametersItem.first, templateParametersItem.second);
   }
   payload.WithObject("templateParameters", std::move(templateParametersJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
