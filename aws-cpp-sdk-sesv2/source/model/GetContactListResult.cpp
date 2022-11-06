/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/GetContactListResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetContactListResult::GetContactListResult()
{
}

GetContactListResult::GetContactListResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetContactListResult& GetContactListResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ContactListName"))
  {
    m_contactListName = jsonValue.GetString("ContactListName");

  }

  if(jsonValue.ValueExists("Topics"))
  {
    Aws::Utils::Array<JsonView> topicsJsonList = jsonValue.GetArray("Topics");
    for(unsigned topicsIndex = 0; topicsIndex < topicsJsonList.GetLength(); ++topicsIndex)
    {
      m_topics.push_back(topicsJsonList[topicsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }



  return *this;
}
