/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DescribeFolderContentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFolderContentsResult::DescribeFolderContentsResult()
{
}

DescribeFolderContentsResult::DescribeFolderContentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFolderContentsResult& DescribeFolderContentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Folders"))
  {
    Aws::Utils::Array<JsonView> foldersJsonList = jsonValue.GetArray("Folders");
    for(unsigned foldersIndex = 0; foldersIndex < foldersJsonList.GetLength(); ++foldersIndex)
    {
      m_folders.push_back(foldersJsonList[foldersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Documents"))
  {
    Aws::Utils::Array<JsonView> documentsJsonList = jsonValue.GetArray("Documents");
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
