/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetFolderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFolderResult::GetFolderResult()
{
}

GetFolderResult::GetFolderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetFolderResult& GetFolderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

  }

  if(jsonValue.ValueExists("folderPath"))
  {
    m_folderPath = jsonValue.GetString("folderPath");

  }

  if(jsonValue.ValueExists("treeId"))
  {
    m_treeId = jsonValue.GetString("treeId");

  }

  if(jsonValue.ValueExists("subFolders"))
  {
    Aws::Utils::Array<JsonView> subFoldersJsonList = jsonValue.GetArray("subFolders");
    for(unsigned subFoldersIndex = 0; subFoldersIndex < subFoldersJsonList.GetLength(); ++subFoldersIndex)
    {
      m_subFolders.push_back(subFoldersJsonList[subFoldersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("files"))
  {
    Aws::Utils::Array<JsonView> filesJsonList = jsonValue.GetArray("files");
    for(unsigned filesIndex = 0; filesIndex < filesJsonList.GetLength(); ++filesIndex)
    {
      m_files.push_back(filesJsonList[filesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("symbolicLinks"))
  {
    Aws::Utils::Array<JsonView> symbolicLinksJsonList = jsonValue.GetArray("symbolicLinks");
    for(unsigned symbolicLinksIndex = 0; symbolicLinksIndex < symbolicLinksJsonList.GetLength(); ++symbolicLinksIndex)
    {
      m_symbolicLinks.push_back(symbolicLinksJsonList[symbolicLinksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("subModules"))
  {
    Aws::Utils::Array<JsonView> subModulesJsonList = jsonValue.GetArray("subModules");
    for(unsigned subModulesIndex = 0; subModulesIndex < subModulesJsonList.GetLength(); ++subModulesIndex)
    {
      m_subModules.push_back(subModulesJsonList[subModulesIndex].AsObject());
    }
  }



  return *this;
}
