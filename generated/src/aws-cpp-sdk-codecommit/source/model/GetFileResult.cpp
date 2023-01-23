/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetFileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFileResult::GetFileResult() : 
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileSize(0)
{
}

GetFileResult::GetFileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileSize(0)
{
  *this = result;
}

GetFileResult& GetFileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commitId"))
  {
    m_commitId = jsonValue.GetString("commitId");

  }

  if(jsonValue.ValueExists("blobId"))
  {
    m_blobId = jsonValue.GetString("blobId");

  }

  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

  }

  if(jsonValue.ValueExists("fileMode"))
  {
    m_fileMode = FileModeTypeEnumMapper::GetFileModeTypeEnumForName(jsonValue.GetString("fileMode"));

  }

  if(jsonValue.ValueExists("fileSize"))
  {
    m_fileSize = jsonValue.GetInt64("fileSize");

  }

  if(jsonValue.ValueExists("fileContent"))
  {
    m_fileContent = HashingUtils::Base64Decode(jsonValue.GetString("fileContent"));
  }



  return *this;
}
