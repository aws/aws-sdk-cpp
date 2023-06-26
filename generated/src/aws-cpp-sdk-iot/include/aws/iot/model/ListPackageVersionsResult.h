/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PackageVersionSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListPackageVersionsResult
  {
  public:
    AWS_IOT_API ListPackageVersionsResult();
    AWS_IOT_API ListPackageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPackageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists the package versions associated to the package.</p>
     */
    inline const Aws::Vector<PackageVersionSummary>& GetPackageVersionSummaries() const{ return m_packageVersionSummaries; }

    /**
     * <p>Lists the package versions associated to the package.</p>
     */
    inline void SetPackageVersionSummaries(const Aws::Vector<PackageVersionSummary>& value) { m_packageVersionSummaries = value; }

    /**
     * <p>Lists the package versions associated to the package.</p>
     */
    inline void SetPackageVersionSummaries(Aws::Vector<PackageVersionSummary>&& value) { m_packageVersionSummaries = std::move(value); }

    /**
     * <p>Lists the package versions associated to the package.</p>
     */
    inline ListPackageVersionsResult& WithPackageVersionSummaries(const Aws::Vector<PackageVersionSummary>& value) { SetPackageVersionSummaries(value); return *this;}

    /**
     * <p>Lists the package versions associated to the package.</p>
     */
    inline ListPackageVersionsResult& WithPackageVersionSummaries(Aws::Vector<PackageVersionSummary>&& value) { SetPackageVersionSummaries(std::move(value)); return *this;}

    /**
     * <p>Lists the package versions associated to the package.</p>
     */
    inline ListPackageVersionsResult& AddPackageVersionSummaries(const PackageVersionSummary& value) { m_packageVersionSummaries.push_back(value); return *this; }

    /**
     * <p>Lists the package versions associated to the package.</p>
     */
    inline ListPackageVersionsResult& AddPackageVersionSummaries(PackageVersionSummary&& value) { m_packageVersionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListPackageVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListPackageVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListPackageVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPackageVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPackageVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPackageVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PackageVersionSummary> m_packageVersionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
