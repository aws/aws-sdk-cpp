/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PublishPackageVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PublishPackageVersionResult::PublishPackageVersionResult() : 
    m_format(PackageFormat::NOT_SET),
    m_status(PackageVersionStatus::NOT_SET)
{
}

PublishPackageVersionResult::PublishPackageVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_format(PackageFormat::NOT_SET),
    m_status(PackageVersionStatus::NOT_SET)
{
  *this = result;
}

PublishPackageVersionResult& PublishPackageVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = PackageVersionStatusMapper::GetPackageVersionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("asset"))
  {
    m_asset = jsonValue.GetObject("asset");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
