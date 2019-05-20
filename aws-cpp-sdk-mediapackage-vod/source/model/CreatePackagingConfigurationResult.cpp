/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/mediapackage-vod/model/CreatePackagingConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MediaPackageVod::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreatePackagingConfigurationResult::CreatePackagingConfigurationResult()
{
}

CreatePackagingConfigurationResult::CreatePackagingConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreatePackagingConfigurationResult& CreatePackagingConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("cmafPackage"))
  {
    m_cmafPackage = jsonValue.GetObject("cmafPackage");

  }

  if(jsonValue.ValueExists("dashPackage"))
  {
    m_dashPackage = jsonValue.GetObject("dashPackage");

  }

  if(jsonValue.ValueExists("hlsPackage"))
  {
    m_hlsPackage = jsonValue.GetObject("hlsPackage");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("mssPackage"))
  {
    m_mssPackage = jsonValue.GetObject("mssPackage");

  }

  if(jsonValue.ValueExists("packagingGroupId"))
  {
    m_packagingGroupId = jsonValue.GetString("packagingGroupId");

  }



  return *this;
}
