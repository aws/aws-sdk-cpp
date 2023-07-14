﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/GetResourcesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourcesResult::GetResourcesResult()
{
}

GetResourcesResult::GetResourcesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourcesResult& GetResourcesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Folders"))
  {
    Array<JsonView> foldersJsonList = jsonValue.GetArray("Folders");
    for(unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex)
    {
      m_folders.push_back(foldersJsonList[foldersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Documents"))
  {
    Array<JsonView> documentsJsonList = jsonValue.GetArray("Documents");
    for(unsigned documentsIndex = 0; documentsIndex < documentsJsonList.GetLength(); ++documentsIndex)
    {
      m_documents.push_back(documentsJsonList[documentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
