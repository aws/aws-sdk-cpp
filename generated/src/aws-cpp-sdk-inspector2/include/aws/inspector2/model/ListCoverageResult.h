﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/CoveredResource.h>
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
namespace Inspector2
{
namespace Model
{
  class ListCoverageResult
  {
  public:
    AWS_INSPECTOR2_API ListCoverageResult();
    AWS_INSPECTOR2_API ListCoverageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_INSPECTOR2_API ListCoverageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object that contains details on the covered resources in your
     * environment.</p>
     */
    inline const Aws::Vector<CoveredResource>& GetCoveredResources() const{ return m_coveredResources; }
    inline void SetCoveredResources(const Aws::Vector<CoveredResource>& value) { m_coveredResources = value; }
    inline void SetCoveredResources(Aws::Vector<CoveredResource>&& value) { m_coveredResources = std::move(value); }
    inline ListCoverageResult& WithCoveredResources(const Aws::Vector<CoveredResource>& value) { SetCoveredResources(value); return *this;}
    inline ListCoverageResult& WithCoveredResources(Aws::Vector<CoveredResource>&& value) { SetCoveredResources(std::move(value)); return *this;}
    inline ListCoverageResult& AddCoveredResources(const CoveredResource& value) { m_coveredResources.push_back(value); return *this; }
    inline ListCoverageResult& AddCoveredResources(CoveredResource&& value) { m_coveredResources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request to a list action. For
     * subsequent calls, use the <code>NextToken</code> value returned from the
     * previous request to continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCoverageResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCoverageResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCoverageResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCoverageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCoverageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCoverageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CoveredResource> m_coveredResources;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
