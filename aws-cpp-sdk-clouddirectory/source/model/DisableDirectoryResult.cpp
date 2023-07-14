/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/DisableDirectoryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableDirectoryResult::DisableDirectoryResult()
{
}

DisableDirectoryResult::DisableDirectoryResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DisableDirectoryResult& DisableDirectoryResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryArn"))
  {
    m_directoryArn = jsonValue.GetString("DirectoryArn");

  }



  return *this;
}
