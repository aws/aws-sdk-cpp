/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/GetPackageVersionAssetResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeArtifact::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetPackageVersionAssetResult::GetPackageVersionAssetResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetPackageVersionAssetResult& GetPackageVersionAssetResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_asset = result.TakeOwnershipOfPayload();
  m_assetHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& assetNameIter = headers.find("x-assetname");
  if(assetNameIter != headers.end())
  {
    m_assetName = assetNameIter->second;
    m_assetNameHasBeenSet = true;
  }

  const auto& packageVersionIter = headers.find("x-packageversion");
  if(packageVersionIter != headers.end())
  {
    m_packageVersion = packageVersionIter->second;
    m_packageVersionHasBeenSet = true;
  }

  const auto& packageVersionRevisionIter = headers.find("x-packageversionrevision");
  if(packageVersionRevisionIter != headers.end())
  {
    m_packageVersionRevision = packageVersionRevisionIter->second;
    m_packageVersionRevisionHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}
