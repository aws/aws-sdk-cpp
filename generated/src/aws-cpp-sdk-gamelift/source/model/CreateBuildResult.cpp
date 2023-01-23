/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateBuildResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateBuildResult::CreateBuildResult()
{
}

CreateBuildResult::CreateBuildResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateBuildResult& CreateBuildResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Build"))
  {
    m_build = jsonValue.GetObject("Build");

  }

  if(jsonValue.ValueExists("UploadCredentials"))
  {
    m_uploadCredentials = jsonValue.GetObject("UploadCredentials");

  }

  if(jsonValue.ValueExists("StorageLocation"))
  {
    m_storageLocation = jsonValue.GetObject("StorageLocation");

  }



  return *this;
}
