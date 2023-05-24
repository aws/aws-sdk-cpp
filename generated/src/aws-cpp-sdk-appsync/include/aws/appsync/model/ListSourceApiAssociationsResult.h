/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/SourceApiAssociationSummary.h>
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
namespace AppSync
{
namespace Model
{
  class ListSourceApiAssociationsResult
  {
  public:
    AWS_APPSYNC_API ListSourceApiAssociationsResult();
    AWS_APPSYNC_API ListSourceApiAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API ListSourceApiAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>SourceApiAssociationSummary</code> object data.</p>
     */
    inline const Aws::Vector<SourceApiAssociationSummary>& GetSourceApiAssociationSummaries() const{ return m_sourceApiAssociationSummaries; }

    /**
     * <p>The <code>SourceApiAssociationSummary</code> object data.</p>
     */
    inline void SetSourceApiAssociationSummaries(const Aws::Vector<SourceApiAssociationSummary>& value) { m_sourceApiAssociationSummaries = value; }

    /**
     * <p>The <code>SourceApiAssociationSummary</code> object data.</p>
     */
    inline void SetSourceApiAssociationSummaries(Aws::Vector<SourceApiAssociationSummary>&& value) { m_sourceApiAssociationSummaries = std::move(value); }

    /**
     * <p>The <code>SourceApiAssociationSummary</code> object data.</p>
     */
    inline ListSourceApiAssociationsResult& WithSourceApiAssociationSummaries(const Aws::Vector<SourceApiAssociationSummary>& value) { SetSourceApiAssociationSummaries(value); return *this;}

    /**
     * <p>The <code>SourceApiAssociationSummary</code> object data.</p>
     */
    inline ListSourceApiAssociationsResult& WithSourceApiAssociationSummaries(Aws::Vector<SourceApiAssociationSummary>&& value) { SetSourceApiAssociationSummaries(std::move(value)); return *this;}

    /**
     * <p>The <code>SourceApiAssociationSummary</code> object data.</p>
     */
    inline ListSourceApiAssociationsResult& AddSourceApiAssociationSummaries(const SourceApiAssociationSummary& value) { m_sourceApiAssociationSummaries.push_back(value); return *this; }

    /**
     * <p>The <code>SourceApiAssociationSummary</code> object data.</p>
     */
    inline ListSourceApiAssociationsResult& AddSourceApiAssociationSummaries(SourceApiAssociationSummary&& value) { m_sourceApiAssociationSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListSourceApiAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListSourceApiAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which you can use to return the next set of items in the list.</p>
     */
    inline ListSourceApiAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListSourceApiAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListSourceApiAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListSourceApiAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SourceApiAssociationSummary> m_sourceApiAssociationSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
