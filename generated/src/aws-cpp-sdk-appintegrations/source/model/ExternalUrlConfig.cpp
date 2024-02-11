/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/model/ExternalUrlConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

ExternalUrlConfig::ExternalUrlConfig() : 
    m_accessUrlHasBeenSet(false),
    m_approvedOriginsHasBeenSet(false)
{
}

ExternalUrlConfig::ExternalUrlConfig(JsonView jsonValue) : 
    m_accessUrlHasBeenSet(false),
    m_approvedOriginsHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalUrlConfig& ExternalUrlConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessUrl"))
  {
    m_accessUrl = jsonValue.GetString("AccessUrl");

    m_accessUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApprovedOrigins"))
  {
    Aws::Utils::Array<JsonView> approvedOriginsJsonList = jsonValue.GetArray("ApprovedOrigins");
    for(unsigned approvedOriginsIndex = 0; approvedOriginsIndex < approvedOriginsJsonList.GetLength(); ++approvedOriginsIndex)
    {
      m_approvedOrigins.push_back(approvedOriginsJsonList[approvedOriginsIndex].AsString());
    }
    m_approvedOriginsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalUrlConfig::Jsonize() const
{
  JsonValue payload;

  if(m_accessUrlHasBeenSet)
  {
   payload.WithString("AccessUrl", m_accessUrl);

  }

  if(m_approvedOriginsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> approvedOriginsJsonList(m_approvedOrigins.size());
   for(unsigned approvedOriginsIndex = 0; approvedOriginsIndex < approvedOriginsJsonList.GetLength(); ++approvedOriginsIndex)
   {
     approvedOriginsJsonList[approvedOriginsIndex].AsString(m_approvedOrigins[approvedOriginsIndex]);
   }
   payload.WithArray("ApprovedOrigins", std::move(approvedOriginsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
