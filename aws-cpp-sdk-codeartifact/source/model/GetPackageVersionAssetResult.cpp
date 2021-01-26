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

GetPackageVersionAssetResult::GetPackageVersionAssetResult()
{
}

GetPackageVersionAssetResult::GetPackageVersionAssetResult(GetPackageVersionAssetResult&& toMove) : 
    m_asset(std::move(toMove.m_asset)),
    m_assetName(std::move(toMove.m_assetName)),
    m_packageVersion(std::move(toMove.m_packageVersion)),
    m_packageVersionRevision(std::move(toMove.m_packageVersionRevision))
{
}

GetPackageVersionAssetResult& GetPackageVersionAssetResult::operator=(GetPackageVersionAssetResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_asset = std::move(toMove.m_asset);
   m_assetName = std::move(toMove.m_assetName);
   m_packageVersion = std::move(toMove.m_packageVersion);
   m_packageVersionRevision = std::move(toMove.m_packageVersionRevision);

   return *this;
}

GetPackageVersionAssetResult::GetPackageVersionAssetResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetPackageVersionAssetResult& GetPackageVersionAssetResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_asset = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& assetNameIter = headers.find("x-assetname");
  if(assetNameIter != headers.end())
  {
    m_assetName = assetNameIter->second;
  }

  const auto& packageVersionIter = headers.find("x-packageversion");
  if(packageVersionIter != headers.end())
  {
    m_packageVersion = packageVersionIter->second;
  }

  const auto& packageVersionRevisionIter = headers.find("x-packageversionrevision");
  if(packageVersionRevisionIter != headers.end())
  {
    m_packageVersionRevision = packageVersionRevisionIter->second;
  }

   return *this;
}
