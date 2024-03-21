/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeartifact/model/AssociatedPackage.h>
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
  class ListAssociatedPackagesResult
  {
  public:
    AWS_CODEARTIFACT_API ListAssociatedPackagesResult();
    AWS_CODEARTIFACT_API ListAssociatedPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API ListAssociatedPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The list of packages associated with the requested package group. </p>
     */
    inline const Aws::Vector<AssociatedPackage>& GetPackages() const{ return m_packages; }

    /**
     * <p> The list of packages associated with the requested package group. </p>
     */
    inline void SetPackages(const Aws::Vector<AssociatedPackage>& value) { m_packages = value; }

    /**
     * <p> The list of packages associated with the requested package group. </p>
     */
    inline void SetPackages(Aws::Vector<AssociatedPackage>&& value) { m_packages = std::move(value); }

    /**
     * <p> The list of packages associated with the requested package group. </p>
     */
    inline ListAssociatedPackagesResult& WithPackages(const Aws::Vector<AssociatedPackage>& value) { SetPackages(value); return *this;}

    /**
     * <p> The list of packages associated with the requested package group. </p>
     */
    inline ListAssociatedPackagesResult& WithPackages(Aws::Vector<AssociatedPackage>&& value) { SetPackages(std::move(value)); return *this;}

    /**
     * <p> The list of packages associated with the requested package group. </p>
     */
    inline ListAssociatedPackagesResult& AddPackages(const AssociatedPackage& value) { m_packages.push_back(value); return *this; }

    /**
     * <p> The list of packages associated with the requested package group. </p>
     */
    inline ListAssociatedPackagesResult& AddPackages(AssociatedPackage&& value) { m_packages.push_back(std::move(value)); return *this; }


    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListAssociatedPackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListAssociatedPackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of results. Use the value returned in the
     * previous response in the next request to retrieve the next set of results. </p>
     */
    inline ListAssociatedPackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAssociatedPackagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAssociatedPackagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAssociatedPackagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AssociatedPackage> m_packages;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
