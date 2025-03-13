/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace CodeArtifact
{
namespace Model
{
  class GetPackageVersionAssetResult
  {
  public:
    AWS_CODEARTIFACT_API GetPackageVersionAssetResult() = default;
    AWS_CODEARTIFACT_API GetPackageVersionAssetResult(GetPackageVersionAssetResult&&) = default;
    AWS_CODEARTIFACT_API GetPackageVersionAssetResult& operator=(GetPackageVersionAssetResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetPackageVersionAssetResult(const GetPackageVersionAssetResult&) = delete;
    GetPackageVersionAssetResult& operator=(const GetPackageVersionAssetResult&) = delete;


    AWS_CODEARTIFACT_API GetPackageVersionAssetResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_CODEARTIFACT_API GetPackageVersionAssetResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p> The binary file, or asset, that is downloaded.</p>
     */
    inline Aws::IOStream& GetAsset() const { return m_asset.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_asset = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    /**
     * <p> The name of the asset that is downloaded. </p>
     */
    inline const Aws::String& GetAssetName() const { return m_assetName; }
    template<typename AssetNameT = Aws::String>
    void SetAssetName(AssetNameT&& value) { m_assetNameHasBeenSet = true; m_assetName = std::forward<AssetNameT>(value); }
    template<typename AssetNameT = Aws::String>
    GetPackageVersionAssetResult& WithAssetName(AssetNameT&& value) { SetAssetName(std::forward<AssetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline const Aws::String& GetPackageVersion() const { return m_packageVersion; }
    template<typename PackageVersionT = Aws::String>
    void SetPackageVersion(PackageVersionT&& value) { m_packageVersionHasBeenSet = true; m_packageVersion = std::forward<PackageVersionT>(value); }
    template<typename PackageVersionT = Aws::String>
    GetPackageVersionAssetResult& WithPackageVersion(PackageVersionT&& value) { SetPackageVersion(std::forward<PackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the package version revision that contains the downloaded asset.
     * </p>
     */
    inline const Aws::String& GetPackageVersionRevision() const { return m_packageVersionRevision; }
    template<typename PackageVersionRevisionT = Aws::String>
    void SetPackageVersionRevision(PackageVersionRevisionT&& value) { m_packageVersionRevisionHasBeenSet = true; m_packageVersionRevision = std::forward<PackageVersionRevisionT>(value); }
    template<typename PackageVersionRevisionT = Aws::String>
    GetPackageVersionAssetResult& WithPackageVersionRevision(PackageVersionRevisionT&& value) { SetPackageVersionRevision(std::forward<PackageVersionRevisionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPackageVersionAssetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_asset{};
    bool m_assetHasBeenSet = false;

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet = false;

    Aws::String m_packageVersion;
    bool m_packageVersionHasBeenSet = false;

    Aws::String m_packageVersionRevision;
    bool m_packageVersionRevisionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
