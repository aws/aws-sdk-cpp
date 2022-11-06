/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ListPackageVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPackageVersionsResult::ListPackageVersionsResult() : 
    m_format(PackageFormat::NOT_SET)
{
}

ListPackageVersionsResult::ListPackageVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_format(PackageFormat::NOT_SET)
{
  *this = result;
}

ListPackageVersionsResult& ListPackageVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("defaultDisplayVersion"))
  {
    m_defaultDisplayVersion = jsonValue.GetString("defaultDisplayVersion");

  }

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

  if(jsonValue.ValueExists("versions"))
  {
    Aws::Utils::Array<JsonView> versionsJsonList = jsonValue.GetArray("versions");
    for(unsigned versionsIndex = 0; versionsIndex < versionsJsonList.GetLength(); ++versionsIndex)
    {
      m_versions.push_back(versionsJsonList[versionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
