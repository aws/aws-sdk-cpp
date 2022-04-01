/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Assessment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

Assessment::Assessment() : 
    m_arnHasBeenSet(false),
    m_awsAccountHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Assessment::Assessment(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_awsAccountHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

Assessment& Assessment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("awsAccount"))
  {
    m_awsAccount = jsonValue.GetObject("awsAccount");

    m_awsAccountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("metadata"))
  {
    m_metadata = jsonValue.GetObject("metadata");

    m_metadataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("framework"))
  {
    m_framework = jsonValue.GetObject("framework");

    m_frameworkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue Assessment::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_awsAccountHasBeenSet)
  {
   payload.WithObject("awsAccount", m_awsAccount.Jsonize());

  }

  if(m_metadataHasBeenSet)
  {
   payload.WithObject("metadata", m_metadata.Jsonize());

  }

  if(m_frameworkHasBeenSet)
  {
   payload.WithObject("framework", m_framework.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
