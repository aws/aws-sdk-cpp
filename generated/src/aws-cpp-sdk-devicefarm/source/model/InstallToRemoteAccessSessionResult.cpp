/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/InstallToRemoteAccessSessionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InstallToRemoteAccessSessionResult::InstallToRemoteAccessSessionResult()
{
}

InstallToRemoteAccessSessionResult::InstallToRemoteAccessSessionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

InstallToRemoteAccessSessionResult& InstallToRemoteAccessSessionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("appUpload"))
  {
    m_appUpload = jsonValue.GetObject("appUpload");

  }



  return *this;
}
