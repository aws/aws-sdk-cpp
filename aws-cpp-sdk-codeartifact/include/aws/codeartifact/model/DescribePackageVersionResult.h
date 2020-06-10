/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
