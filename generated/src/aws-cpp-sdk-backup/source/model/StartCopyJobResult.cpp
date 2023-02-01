/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/StartCopyJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartCopyJobResult::StartCopyJobResult() : 
    m_isParent(false)
{
}

StartCopyJobResult::StartCopyJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isParent(false)
{
  *this = result;
}

StartCopyJobResult& StartCopyJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CopyJobId"))
  {
    m_copyJobId = jsonValue.GetString("CopyJobId");

  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

  }

  if(jsonValue.ValueExists("IsParent"))
  {
    m_isParent = jsonValue.GetBool("IsParent");

  }



  return *this;
}
