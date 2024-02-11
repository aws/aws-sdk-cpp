/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/PackageSummary.h>
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
  class ListPackagesResult
  {
  public:
    AWS_IOT_API ListPackagesResult();
    AWS_IOT_API ListPackagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListPackagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The software package summary.</p>
     */
    inline const Aws::Vector<PackageSummary>& GetPackageSummaries() const{ return m_packageSummaries; }

    /**
     * <p>The software package summary.</p>
     */
    inline void SetPackageSummaries(const Aws::Vector<PackageSummary>& value) { m_packageSummaries = value; }

    /**
     * <p>The software package summary.</p>
     */
    inline void SetPackageSummaries(Aws::Vector<PackageSummary>&& value) { m_packageSummaries = std::move(value); }

    /**
     * <p>The software package summary.</p>
     */
    inline ListPackagesResult& WithPackageSummaries(const Aws::Vector<PackageSummary>& value) { SetPackageSummaries(value); return *this;}

    /**
     * <p>The software package summary.</p>
     */
    inline ListPackagesResult& WithPackageSummaries(Aws::Vector<PackageSummary>&& value) { SetPackageSummaries(std::move(value)); return *this;}

    /**
     * <p>The software package summary.</p>
     */
    inline ListPackagesResult& AddPackageSummaries(const PackageSummary& value) { m_packageSummaries.push_back(value); return *this; }

    /**
     * <p>The software package summary.</p>
     */
    inline ListPackagesResult& AddPackageSummaries(PackageSummary&& value) { m_packageSummaries.push_back(std::move(value)); return *this; }


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
    inline ListPackagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListPackagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListPackagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPackagesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPackagesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPackagesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PackageSummary> m_packageSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
