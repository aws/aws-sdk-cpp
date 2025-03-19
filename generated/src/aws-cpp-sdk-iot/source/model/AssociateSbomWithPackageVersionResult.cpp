/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AssociateSbomWithPackageVersionResult.h>
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

AssociateSbomWithPackageVersionResult::AssociateSbomWithPackageVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateSbomWithPackageVersionResult& AssociateSbomWithPackageVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("packageName"))
  {
    m_packageName = jsonValue.GetString("packageName");
    m_packageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("versionName"))
  {
    m_versionName = jsonValue.GetString("versionName");
    m_versionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sbom"))
  {
    m_sbom = jsonValue.GetObject("sbom");
    m_sbomHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sbomValidationStatus"))
  {
    m_sbomValidationStatus = SbomValidationStatusMapper::GetSbomValidationStatusForName(jsonValue.GetString("sbomValidationStatus"));
    m_sbomValidationStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
