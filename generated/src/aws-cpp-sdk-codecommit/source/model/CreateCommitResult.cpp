/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/CreateCommitResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateCommitResult::CreateCommitResult()
{
}

CreateCommitResult::CreateCommitResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateCommitResult& CreateCommitResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

  }

  if(jsonValue.ValueExists("treeId"))
  {
    m_treeId = jsonValue.GetString("treeId");

  }

  if(jsonValue.ValueExists("filesAdded"))
  {
    Aws::Utils::Array<JsonView> filesAddedJsonList = jsonValue.GetArray("filesAdded");
    for(unsigned filesAddedIndex = 0; filesAddedIndex < filesAddedJsonList.GetLength(); ++filesAddedIndex)
    {
      m_filesAdded.push_back(filesAddedJsonList[filesAddedIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("filesUpdated"))
  {
    Aws::Utils::Array<JsonView> filesUpdatedJsonList = jsonValue.GetArray("filesUpdated");
    for(unsigned filesUpdatedIndex = 0; filesUpdatedIndex < filesUpdatedJsonList.GetLength(); ++filesUpdatedIndex)
    {
      m_filesUpdated.push_back(filesUpdatedJsonList[filesUpdatedIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("filesDeleted"))
  {
    Aws::Utils::Array<JsonView> filesDeletedJsonList = jsonValue.GetArray("filesDeleted");
    for(unsigned filesDeletedIndex = 0; filesDeletedIndex < filesDeletedJsonList.GetLength(); ++filesDeletedIndex)
    {
      m_filesDeleted.push_back(filesDeletedJsonList[filesDeletedIndex].AsObject());
    }
  }



  return *this;
}
