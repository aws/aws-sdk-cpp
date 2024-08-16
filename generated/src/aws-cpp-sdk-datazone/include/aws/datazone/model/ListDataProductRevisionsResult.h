/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataProductRevision.h>
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
namespace DataZone
{
namespace Model
{
  class ListDataProductRevisionsResult
  {
  public:
    AWS_DATAZONE_API ListDataProductRevisionsResult();
    AWS_DATAZONE_API ListDataProductRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListDataProductRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of the <code>ListDataProductRevisions</code> action.</p>
     */
    inline const Aws::Vector<DataProductRevision>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<DataProductRevision>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<DataProductRevision>&& value) { m_items = std::move(value); }
    inline ListDataProductRevisionsResult& WithItems(const Aws::Vector<DataProductRevision>& value) { SetItems(value); return *this;}
    inline ListDataProductRevisionsResult& WithItems(Aws::Vector<DataProductRevision>&& value) { SetItems(std::move(value)); return *this;}
    inline ListDataProductRevisionsResult& AddItems(const DataProductRevision& value) { m_items.push_back(value); return *this; }
    inline ListDataProductRevisionsResult& AddItems(DataProductRevision&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of data product revisions is greater than the default value
     * for the <code>MaxResults</code> parameter, or if you explicitly specify a value
     * for <code>MaxResults</code> that is less than the number of data product
     * revisions, the response includes a pagination token named
     * <code>NextToken</code>. You can specify this <code>NextToken</code> value in a
     * subsequent call to <code>ListDataProductRevisions</code> to list the next set of
     * data product revisions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataProductRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataProductRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataProductRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataProductRevisionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataProductRevisionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataProductRevisionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataProductRevision> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
