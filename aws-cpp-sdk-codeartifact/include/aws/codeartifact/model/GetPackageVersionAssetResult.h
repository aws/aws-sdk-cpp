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
    AWS_CODEARTIFACT_API GetPackageVersionAssetResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_CODEARTIFACT_API GetPackageVersionAssetResult(GetPackageVersionAssetResult&&);
    AWS_CODEARTIFACT_API GetPackageVersionAssetResult& operator=(GetPackageVersionAssetResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetPackageVersionAssetResult(const GetPackageVersionAssetResult&) = delete;
    GetPackageVersionAssetResult& operator=(const GetPackageVersionAssetResult&) = delete;


    AWS_CODEARTIFACT_API GetPackageVersionAssetResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_CODEARTIFACT_API GetPackageVersionAssetResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p> The binary file, or asset, that is downloaded.</p>
     */
    inline Aws::IOStream& GetAsset() { return m_asset.GetUnderlyingStream(); }

    /**
     * <p> The binary file, or asset, that is downloaded.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_asset = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p> The name of the asset that is downloaded. </p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p> The name of the asset that is downloaded. </p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetName = value; }

    /**
     * <p> The name of the asset that is downloaded. </p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetName = std::move(value); }

    /**
     * <p> The name of the asset that is downloaded. </p>
     */
    inline void SetAssetName(const char* value) { m_assetName.assign(value); }

    /**
     * <p> The name of the asset that is downloaded. </p>
     */
    inline GetPackageVersionAssetResult& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p> The name of the asset that is downloaded. </p>
     */
    inline GetPackageVersionAssetResult& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p> The name of the asset that is downloaded. </p>
     */
    inline GetPackageVersionAssetResult& WithAssetName(const char* value) { SetAssetName(value); return *this;}


    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline const Aws::String& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline void SetPackageVersion(const Aws::String& value) { m_packageVersion = value; }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline void SetPackageVersion(Aws::String&& value) { m_packageVersion = std::move(value); }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline void SetPackageVersion(const char* value) { m_packageVersion.assign(value); }

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline GetPackageVersionAssetResult& WithPackageVersion(const Aws::String& value) { SetPackageVersion(value); return *this;}

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline GetPackageVersionAssetResult& WithPackageVersion(Aws::String&& value) { SetPackageVersion(std::move(value)); return *this;}

    /**
     * <p> A string that contains the package version (for example,
     * <code>3.5.2</code>). </p>
     */
    inline GetPackageVersionAssetResult& WithPackageVersion(const char* value) { SetPackageVersion(value); return *this;}


    /**
     * <p> The name of the package version revision that contains the downloaded asset.
     * </p>
     */
    inline const Aws::String& GetPackageVersionRevision() const{ return m_packageVersionRevision; }

    /**
     * <p> The name of the package version revision that contains the downloaded asset.
     * </p>
     */
    inline void SetPackageVersionRevision(const Aws::String& value) { m_packageVersionRevision = value; }

    /**
     * <p> The name of the package version revision that contains the downloaded asset.
     * </p>
     */
    inline void SetPackageVersionRevision(Aws::String&& value) { m_packageVersionRevision = std::move(value); }

    /**
     * <p> The name of the package version revision that contains the downloaded asset.
     * </p>
     */
    inline void SetPackageVersionRevision(const char* value) { m_packageVersionRevision.assign(value); }

    /**
     * <p> The name of the package version revision that contains the downloaded asset.
     * </p>
     */
    inline GetPackageVersionAssetResult& WithPackageVersionRevision(const Aws::String& value) { SetPackageVersionRevision(value); return *this;}

    /**
     * <p> The name of the package version revision that contains the downloaded asset.
     * </p>
     */
    inline GetPackageVersionAssetResult& WithPackageVersionRevision(Aws::String&& value) { SetPackageVersionRevision(std::move(value)); return *this;}

    /**
     * <p> The name of the package version revision that contains the downloaded asset.
     * </p>
     */
    inline GetPackageVersionAssetResult& WithPackageVersionRevision(const char* value) { SetPackageVersionRevision(value); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_asset;

    Aws::String m_assetName;

    Aws::String m_packageVersion;

    Aws::String m_packageVersionRevision;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
