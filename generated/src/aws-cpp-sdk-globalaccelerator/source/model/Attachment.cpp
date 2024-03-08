/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/Attachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

Attachment::Attachment() : 
    m_attachmentArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
}

Attachment::Attachment(JsonView jsonValue) : 
    m_attachmentArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_principalsHasBeenSet(false),
    m_resourcesHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Attachment& Attachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttachmentArn"))
  {
    m_attachmentArn = jsonValue.GetString("AttachmentArn");

    m_attachmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Principals"))
  {
    Aws::Utils::Array<JsonView> principalsJsonList = jsonValue.GetArray("Principals");
    for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
    {
      m_principals.push_back(principalsJsonList[principalsIndex].AsString());
    }
    m_principalsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resources"))
  {
    Aws::Utils::Array<JsonView> resourcesJsonList = jsonValue.GetArray("Resources");
    for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
    {
      m_resources.push_back(resourcesJsonList[resourcesIndex].AsObject());
    }
    m_resourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Attachment::Jsonize() const
{
  JsonValue payload;

  if(m_attachmentArnHasBeenSet)
  {
   payload.WithString("AttachmentArn", m_attachmentArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_principalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalsJsonList(m_principals.size());
   for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
   {
     principalsJsonList[principalsIndex].AsString(m_principals[principalsIndex]);
   }
   payload.WithArray("Principals", std::move(principalsJsonList));

  }

  if(m_resourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourcesJsonList(m_resources.size());
   for(unsigned resourcesIndex = 0; resourcesIndex < resourcesJsonList.GetLength(); ++resourcesIndex)
   {
     resourcesJsonList[resourcesIndex].AsObject(m_resources[resourcesIndex].Jsonize());
   }
   payload.WithArray("Resources", std::move(resourcesJsonList));

  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
