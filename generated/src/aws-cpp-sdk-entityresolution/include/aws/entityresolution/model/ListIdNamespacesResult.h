/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IdNamespaceSummary.h>
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
namespace EntityResolution
{
namespace Model
{
  class ListIdNamespacesResult
  {
  public:
    AWS_ENTITYRESOLUTION_API ListIdNamespacesResult();
    AWS_ENTITYRESOLUTION_API ListIdNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API ListIdNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>IdNamespaceSummaries</code> objects.</p>
     */
    inline const Aws::Vector<IdNamespaceSummary>& GetIdNamespaceSummaries() const{ return m_idNamespaceSummaries; }

    /**
     * <p>A list of <code>IdNamespaceSummaries</code> objects.</p>
     */
    inline void SetIdNamespaceSummaries(const Aws::Vector<IdNamespaceSummary>& value) { m_idNamespaceSummaries = value; }

    /**
     * <p>A list of <code>IdNamespaceSummaries</code> objects.</p>
     */
    inline void SetIdNamespaceSummaries(Aws::Vector<IdNamespaceSummary>&& value) { m_idNamespaceSummaries = std::move(value); }

    /**
     * <p>A list of <code>IdNamespaceSummaries</code> objects.</p>
     */
    inline ListIdNamespacesResult& WithIdNamespaceSummaries(const Aws::Vector<IdNamespaceSummary>& value) { SetIdNamespaceSummaries(value); return *this;}

    /**
     * <p>A list of <code>IdNamespaceSummaries</code> objects.</p>
     */
    inline ListIdNamespacesResult& WithIdNamespaceSummaries(Aws::Vector<IdNamespaceSummary>&& value) { SetIdNamespaceSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of <code>IdNamespaceSummaries</code> objects.</p>
     */
    inline ListIdNamespacesResult& AddIdNamespaceSummaries(const IdNamespaceSummary& value) { m_idNamespaceSummaries.push_back(value); return *this; }

    /**
     * <p>A list of <code>IdNamespaceSummaries</code> objects.</p>
     */
    inline ListIdNamespacesResult& AddIdNamespaceSummaries(IdNamespaceSummary&& value) { m_idNamespaceSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListIdNamespacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListIdNamespacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous API call.</p>
     */
    inline ListIdNamespacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIdNamespacesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIdNamespacesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIdNamespacesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<IdNamespaceSummary> m_idNamespaceSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
