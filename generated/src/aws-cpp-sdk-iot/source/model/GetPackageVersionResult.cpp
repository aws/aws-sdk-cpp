/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetPackageVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPackageVersionResult::GetPackageVersionResult() : 
    m_status(PackageVersionStatus::NOT_SET),
    m_sbomValidationStatus(SbomValidationStatus::NOT_SET)
{
}

GetPackageVersionResult::GetPackageVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetPackageVersionResult()
{
  *this = result;
}

GetPackageVersionResult& GetPackageVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("packageVersionArn"))
  {
    m_packageVersionArn = jsonValue.GetString("packageVersionArn");

  }

  if(jsonValue.ValueExists("packageName"))
  {
    m_packageName = jsonValue.GetString("packageName");

  }

  if(jsonValue.ValueExists("versionName"))
  {
    m_versionName = jsonValue.GetString("versionName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("artifact"))
  {
    m_artifact = jsonValue.GetObject("artifact");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PackageVersionStatusMapper::GetPackageVersionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("errorReason"))
  {
    m_errorReason = jsonValue.GetString("errorReason");

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }

  if(jsonValue.ValueExists("sbom"))
  {
    m_sbom = jsonValue.GetObject("sbom");

  }

  if(jsonValue.ValueExists("sbomValidationStatus"))
  {
    m_sbomValidationStatus = SbomValidationStatusMapper::GetSbomValidationStatusForName(jsonValue.GetString("sbomValidationStatus"));

  }

  if(jsonValue.ValueExists("recipe"))
  {
    m_recipe = jsonValue.GetString("recipe");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
