/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/PutProfileObjectTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutProfileObjectTypeResult::PutProfileObjectTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutProfileObjectTypeResult& PutProfileObjectTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ObjectTypeName"))
  {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");
    m_objectTypeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");
    m_templateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpirationDays"))
  {
    m_expirationDays = jsonValue.GetInteger("ExpirationDays");
    m_expirationDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("EncryptionKey");
    m_encryptionKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AllowProfileCreation"))
  {
    m_allowProfileCreation = jsonValue.GetBool("AllowProfileCreation");
    m_allowProfileCreationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceLastUpdatedTimestampFormat"))
  {
    m_sourceLastUpdatedTimestampFormat = jsonValue.GetString("SourceLastUpdatedTimestampFormat");
    m_sourceLastUpdatedTimestampFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxProfileObjectCount"))
  {
    m_maxProfileObjectCount = jsonValue.GetInteger("MaxProfileObjectCount");
    m_maxProfileObjectCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxAvailableProfileObjectCount"))
  {
    m_maxAvailableProfileObjectCount = jsonValue.GetInteger("MaxAvailableProfileObjectCount");
    m_maxAvailableProfileObjectCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Map<Aws::String, JsonView> fieldsJsonMap = jsonValue.GetObject("Fields").GetAllObjects();
    for(auto& fieldsItem : fieldsJsonMap)
    {
      m_fields[fieldsItem.first] = fieldsItem.second.AsObject();
    }
    m_fieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Keys"))
  {
    Aws::Map<Aws::String, JsonView> keysJsonMap = jsonValue.GetObject("Keys").GetAllObjects();
    for(auto& keysItem : keysJsonMap)
    {
      Aws::Utils::Array<JsonView> objectTypeKeyListJsonList = keysItem.second.AsArray();
      Aws::Vector<ObjectTypeKey> objectTypeKeyListList;
      objectTypeKeyListList.reserve((size_t)objectTypeKeyListJsonList.GetLength());
      for(unsigned objectTypeKeyListIndex = 0; objectTypeKeyListIndex < objectTypeKeyListJsonList.GetLength(); ++objectTypeKeyListIndex)
      {
        objectTypeKeyListList.push_back(objectTypeKeyListJsonList[objectTypeKeyListIndex].AsObject());
      }
      m_keys[keysItem.first] = std::move(objectTypeKeyListList);
    }
    m_keysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
