/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ProfileConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

ProfileConfiguration::ProfileConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProfileConfiguration& ProfileConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SessionConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> sessionConfigurationJsonMap = jsonValue.GetObject("SessionConfiguration").GetAllObjects();
    for(auto& sessionConfigurationItem : sessionConfigurationJsonMap)
    {
      m_sessionConfiguration[sessionConfigurationItem.first] = sessionConfigurationItem.second.AsObject();
    }
    m_sessionConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobConfiguration"))
  {
    Aws::Map<Aws::String, JsonView> jobConfigurationJsonMap = jsonValue.GetObject("JobConfiguration").GetAllObjects();
    for(auto& jobConfigurationItem : jobConfigurationJsonMap)
    {
      m_jobConfiguration[jobConfigurationItem.first] = jobConfigurationItem.second.AsObject();
    }
    m_jobConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ProfileConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sessionConfigurationHasBeenSet)
  {
   JsonValue sessionConfigurationJsonMap;
   for(auto& sessionConfigurationItem : m_sessionConfiguration)
   {
     sessionConfigurationJsonMap.WithObject(sessionConfigurationItem.first, sessionConfigurationItem.second.Jsonize());
   }
   payload.WithObject("SessionConfiguration", std::move(sessionConfigurationJsonMap));

  }

  if(m_jobConfigurationHasBeenSet)
  {
   JsonValue jobConfigurationJsonMap;
   for(auto& jobConfigurationItem : m_jobConfiguration)
   {
     jobConfigurationJsonMap.WithObject(jobConfigurationItem.first, jobConfigurationItem.second.Jsonize());
   }
   payload.WithObject("JobConfiguration", std::move(jobConfigurationJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
