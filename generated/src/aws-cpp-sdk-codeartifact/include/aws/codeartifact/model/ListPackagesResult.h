/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/PackageSummary.h>
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
  class ListPackagesResult
  {
  public:
    AWS_CODEARTIFACT_API ListPackagesResult();
    AWS_CODEARTIFACT_API ListPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of returned <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a>
     * objects. </p>
     */
    inline const Aws::Vector<PackageSummary>& GetPackages() const{ return m_packages; }

    /**
     * <p> The list of returned <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a>
     * objects. </p>
     */
    inline void SetPackages(const Aws::Vector<PackageSummary>& value) { m_packages = value; }

    /**
     * <p> The list of returned <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a>
     * objects. </p>
     */
    inline void SetPackages(Aws::Vector<PackageSummary>&& value) { m_packages = std::move(value); }

    /**
     * <p> The list of returned <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a>
     * objects. </p>
     */
    inline ListPackagesResult& WithPackages(const Aws::Vector<PackageSummary>& value) { SetPackages(value); return *this;}

    /**
     * <p> The list of returned <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a>
     * objects. </p>
     */
    inline ListPackagesResult& WithPackages(Aws::Vector<PackageSummary>&& value) { SetPackages(std::move(value)); return *this;}

    /**
     * <p> The list of returned <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a>
     * objects. </p>
     */
    inline ListPackagesResult& AddPackages(const PackageSummary& value) { m_packages.push_back(value); return *this; }

    /**
     * <p> The list of returned <a
     * href="https://docs.aws.amazon.com/codeartifact/latest/APIReference/API_PackageSummary.html">PackageSummary</a>
     * objects. </p>
     */
    inline ListPackagesResult& AddPackages(PackageSummary&& value) { m_packages.push_back(std::move(value)); return *this; }


    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListPackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListPackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> If there are additional results, this is the token for the next set of
     * results. </p>
     */
    inline ListPackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PackageSummary> m_packages;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
