/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ListPackageVersionAssetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPackageVersionAssetsResult::ListPackageVersionAssetsResult() : 
    m_format(PackageFormat::NOT_SET)
{
}

ListPackageVersionAssetsResult::ListPackageVersionAssetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_format(PackageFormat::NOT_SET)
{
  *this = result;
}

ListPackageVersionAssetsResult& ListPackageVersionAssetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("format"))
  {
    m_format = PackageFormatMapper::GetPackageFormatForName(jsonValue.GetString("format"));

  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

  }

  if(jsonValue.ValueExists("package"))
  {
    m_package = jsonValue.GetString("package");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("versionRevision"))
  {
    m_versionRevision = jsonValue.GetString("versionRevision");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("assets"))
  {
    Aws::Utils::Array<JsonView> assetsJsonList = jsonValue.GetArray("assets");
    for(unsigned assetsIndex = 0; assetsIndex < assetsJsonList.GetLength(); ++assetsIndex)
    {
      m_assets.push_back(assetsJsonList[assetsIndex].AsObject());
    }
  }



  return *this;
}
