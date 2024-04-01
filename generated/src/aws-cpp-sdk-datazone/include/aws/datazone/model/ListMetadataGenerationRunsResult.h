/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/MetadataGenerationRunItem.h>
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
  class ListMetadataGenerationRunsResult
  {
  public:
    AWS_DATAZONE_API ListMetadataGenerationRunsResult();
    AWS_DATAZONE_API ListMetadataGenerationRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListMetadataGenerationRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The results of the ListMetadataGenerationRuns action.</p>
     */
    inline const Aws::Vector<MetadataGenerationRunItem>& GetItems() const{ return m_items; }

    /**
     * <p>The results of the ListMetadataGenerationRuns action.</p>
     */
    inline void SetItems(const Aws::Vector<MetadataGenerationRunItem>& value) { m_items = value; }

    /**
     * <p>The results of the ListMetadataGenerationRuns action.</p>
     */
    inline void SetItems(Aws::Vector<MetadataGenerationRunItem>&& value) { m_items = std::move(value); }

    /**
     * <p>The results of the ListMetadataGenerationRuns action.</p>
     */
    inline ListMetadataGenerationRunsResult& WithItems(const Aws::Vector<MetadataGenerationRunItem>& value) { SetItems(value); return *this;}

    /**
     * <p>The results of the ListMetadataGenerationRuns action.</p>
     */
    inline ListMetadataGenerationRunsResult& WithItems(Aws::Vector<MetadataGenerationRunItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The results of the ListMetadataGenerationRuns action.</p>
     */
    inline ListMetadataGenerationRunsResult& AddItems(const MetadataGenerationRunItem& value) { m_items.push_back(value); return *this; }

    /**
     * <p>The results of the ListMetadataGenerationRuns action.</p>
     */
    inline ListMetadataGenerationRunsResult& AddItems(MetadataGenerationRunItem&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline ListMetadataGenerationRunsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline ListMetadataGenerationRunsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When the number of metadata generation runs is greater than the default value
     * for the MaxResults parameter, or if you explicitly specify a value for
     * MaxResults that is less than the number of metadata generation runs, the
     * response includes a pagination token named NextToken. You can specify this
     * NextToken value in a subsequent call to ListMetadataGenerationRuns to list the
     * next set of revisions.</p>
     */
    inline ListMetadataGenerationRunsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListMetadataGenerationRunsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListMetadataGenerationRunsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListMetadataGenerationRunsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<MetadataGenerationRunItem> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
