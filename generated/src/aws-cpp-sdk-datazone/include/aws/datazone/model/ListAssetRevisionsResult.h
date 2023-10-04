/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/AssetRevision.h>
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
  class ListAssetRevisionsResult
  {
  public:
    AWS_DATAZONE_API ListAssetRevisionsResult();
    AWS_DATAZONE_API ListAssetRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListAssetRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The results of the <code>ListAssetRevisions</code> action.</p>
     */
    inline const Aws::Vector<AssetRevision>& GetItems() const{ return m_items; }

    /**
     * <p>The results of the <code>ListAssetRevisions</code> action.</p>
     */
    inline void SetItems(const Aws::Vector<AssetRevision>& value) { m_items = value; }

    /**
     * <p>The results of the <code>ListAssetRevisions</code> action.</p>
     */
    inline void SetItems(Aws::Vector<AssetRevision>&& value) { m_items = std::move(value); }

    /**
     * <p>The results of the <code>ListAssetRevisions</code> action.</p>
     */
    inline ListAssetRevisionsResult& WithItems(const Aws::Vector<AssetRevision>& value) { SetItems(value); return *this;}

    /**
     * <p>The results of the <code>ListAssetRevisions</code> action.</p>
     */
    inline ListAssetRevisionsResult& WithItems(Aws::Vector<AssetRevision>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The results of the <code>ListAssetRevisions</code> action.</p>
     */
    inline ListAssetRevisionsResult& AddItems(const AssetRevision& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The results of the <code>ListAssetRevisions</code> action.</p>
     */
    inline ListAssetRevisionsResult& AddItems(AssetRevision&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>When the number of revisions is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of revisions, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetRevisions</code> to list the next set of revisions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of revisions is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of revisions, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetRevisions</code> to list the next set of revisions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the number of revisions is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of revisions, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetRevisions</code> to list the next set of revisions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the number of revisions is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of revisions, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetRevisions</code> to list the next set of revisions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the number of revisions is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of revisions, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetRevisions</code> to list the next set of revisions.</p>
     */
    inline ListAssetRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of revisions is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of revisions, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetRevisions</code> to list the next set of revisions.</p>
     */
    inline ListAssetRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of revisions is greater than the default value for the
     * <code>MaxResults</code> parameter, or if you explicitly specify a value for
     * <code>MaxResults</code> that is less than the number of revisions, the response
     * includes a pagination token named <code>NextToken</code>. You can specify this
     * <code>NextToken</code> value in a subsequent call to
     * <code>ListAssetRevisions</code> to list the next set of revisions.</p>
     */
    inline ListAssetRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAssetRevisionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAssetRevisionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAssetRevisionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AssetRevision> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
