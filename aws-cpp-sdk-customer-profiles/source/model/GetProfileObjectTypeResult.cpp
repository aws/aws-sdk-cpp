/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetProfileObjectTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetProfileObjectTypeResult::GetProfileObjectTypeResult() : 
    m_expirationDays(0),
    m_allowProfileCreation(false)
{
}

GetProfileObjectTypeResult::GetProfileObjectTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_expirationDays(0),
    m_allowProfileCreation(false)
{
  *this = result;
}

GetProfileObjectTypeResult& GetProfileObjectTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ObjectTypeName"))
  {
    m_objectTypeName = jsonValue.GetString("ObjectTypeName");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("TemplateId"))
  {
    m_templateId = jsonValue.GetString("TemplateId");

  }

  if(jsonValue.ValueExists("ExpirationDays"))
  {
    m_expirationDays = jsonValue.GetInteger("ExpirationDays");

  }

  if(jsonValue.ValueExists("EncryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("EncryptionKey");

  }

  if(jsonValue.ValueExists("AllowProfileCreation"))
  {
    m_allowProfileCreation = jsonValue.GetBool("AllowProfileCreation");

  }

  if(jsonValue.ValueExists("SourceLastUpdatedTimestampFormat"))
  {
    m_sourceLastUpdatedTimestampFormat = jsonValue.GetString("SourceLastUpdatedTimestampFormat");

  }

  if(jsonValue.ValueExists("Fields"))
  {
    Aws::Map<Aws::String, JsonView> fieldsJsonMap = jsonValue.GetObject("Fields").GetAllObjects();
    for(auto& fieldsItem : fieldsJsonMap)
    {
      m_fields[fieldsItem.first] = fieldsItem.second.AsObject();
    }
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
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
