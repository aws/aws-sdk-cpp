/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaignsv2/model/EmailChannelSubtypeParameters.h>
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

EmailChannelSubtypeParameters::EmailChannelSubtypeParameters() : 
    m_destinationEmailAddressHasBeenSet(false),
    m_connectSourceEmailAddressHasBeenSet(false),
    m_templateArnHasBeenSet(false),
    m_templateParametersHasBeenSet(false)
{
}

EmailChannelSubtypeParameters::EmailChannelSubtypeParameters(JsonView jsonValue)
  : EmailChannelSubtypeParameters()
{
  *this = jsonValue;
}

EmailChannelSubtypeParameters& EmailChannelSubtypeParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationEmailAddress"))
  {
    m_destinationEmailAddress = jsonValue.GetString("destinationEmailAddress");

    m_destinationEmailAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectSourceEmailAddress"))
  {
    m_connectSourceEmailAddress = jsonValue.GetString("connectSourceEmailAddress");

    m_connectSourceEmailAddressHasBeenSet = true;
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

JsonValue EmailChannelSubtypeParameters::Jsonize() const
{
  JsonValue payload;

  if(m_destinationEmailAddressHasBeenSet)
  {
   payload.WithString("destinationEmailAddress", m_destinationEmailAddress);

  }

  if(m_connectSourceEmailAddressHasBeenSet)
  {
   payload.WithString("connectSourceEmailAddress", m_connectSourceEmailAddress);

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
