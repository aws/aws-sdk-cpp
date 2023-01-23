/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/PackageDescription.h>
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
  class DescribePackageResult
  {
  public:
    AWS_CODEARTIFACT_API DescribePackageResult();
    AWS_CODEARTIFACT_API DescribePackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API DescribePackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDescription.html">PackageDescription</a>
     * object that contains information about the requested package.</p>
     */
    inline const PackageDescription& GetPackage() const{ return m_package; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDescription.html">PackageDescription</a>
     * object that contains information about the requested package.</p>
     */
    inline void SetPackage(const PackageDescription& value) { m_package = value; }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDescription.html">PackageDescription</a>
     * object that contains information about the requested package.</p>
     */
    inline void SetPackage(PackageDescription&& value) { m_package = std::move(value); }

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDescription.html">PackageDescription</a>
     * object that contains information about the requested package.</p>
     */
    inline DescribePackageResult& WithPackage(const PackageDescription& value) { SetPackage(value); return *this;}

    /**
     * <p>A <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageDescription.html">PackageDescription</a>
     * object that contains information about the requested package.</p>
     */
    inline DescribePackageResult& WithPackage(PackageDescription&& value) { SetPackage(std::move(value)); return *this;}

  private:

    PackageDescription m_package;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
