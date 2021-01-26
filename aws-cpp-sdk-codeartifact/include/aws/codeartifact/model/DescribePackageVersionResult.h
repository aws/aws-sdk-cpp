/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageVersionDescription.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeArtifact
{
namespace Model
{
  class AWS_CODEARTIFACT_API DescribePackageVersionResult
  {
  public:
    DescribePackageVersionResult();
    DescribePackageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribePackageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A <code> <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
     * </code> object that contains information about the requested package version.
     * </p>
     */
    inline const PackageVersionDescription& GetPackageVersion() const{ return m_packageVersion; }

    /**
     * <p> A <code> <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
     * </code> object that contains information about the requested package version.
     * </p>
     */
    inline void SetPackageVersion(const PackageVersionDescription& value) { m_packageVersion = value; }

    /**
     * <p> A <code> <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
     * </code> object that contains information about the requested package version.
     * </p>
     */
    inline void SetPackageVersion(PackageVersionDescription&& value) { m_packageVersion = std::move(value); }

    /**
     * <p> A <code> <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
     * </code> object that contains information about the requested package version.
     * </p>
     */
    inline DescribePackageVersionResult& WithPackageVersion(const PackageVersionDescription& value) { SetPackageVersion(value); return *this;}

    /**
     * <p> A <code> <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageVersionDescription.html">PackageVersionDescription</a>
     * </code> object that contains information about the requested package version.
     * </p>
     */
    inline DescribePackageVersionResult& WithPackageVersion(PackageVersionDescription&& value) { SetPackageVersion(std::move(value)); return *this;}

  private:

    PackageVersionDescription m_packageVersion;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
