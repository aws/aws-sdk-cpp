/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ListPackageVersionDependenciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPackageVersionDependenciesResult::ListPackageVersionDependenciesResult() : 
    m_format(PackageFormat::NOT_SET)
{
}

ListPackageVersionDependenciesResult::ListPackageVersionDependenciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_format(PackageFormat::NOT_SET)
{
  *this = result;
}

ListPackageVersionDependenciesResult& ListPackageVersionDependenciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("dependencies"))
  {
    Aws::Utils::Array<JsonView> dependenciesJsonList = jsonValue.GetArray("dependencies");
    for(unsigned dependenciesIndex = 0; dependenciesIndex < dependenciesJsonList.GetLength(); ++dependenciesIndex)
    {
      m_dependencies.push_back(dependenciesJsonList[dependenciesIndex].AsObject());
    }
  }



  return *this;
}
