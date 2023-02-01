/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/finspace-data/model/DataViewSummary.h>
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
namespace FinSpaceData
{
namespace Model
{
  class ListDataViewsResult
  {
  public:
    AWS_FINSPACEDATA_API ListDataViewsResult();
    AWS_FINSPACEDATA_API ListDataViewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACEDATA_API ListDataViewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListDataViewsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListDataViewsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListDataViewsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of Dataviews.</p>
     */
    inline const Aws::Vector<DataViewSummary>& GetDataViews() const{ return m_dataViews; }

    /**
     * <p>A list of Dataviews.</p>
     */
    inline void SetDataViews(const Aws::Vector<DataViewSummary>& value) { m_dataViews = value; }

    /**
     * <p>A list of Dataviews.</p>
     */
    inline void SetDataViews(Aws::Vector<DataViewSummary>&& value) { m_dataViews = std::move(value); }

    /**
     * <p>A list of Dataviews.</p>
     */
    inline ListDataViewsResult& WithDataViews(const Aws::Vector<DataViewSummary>& value) { SetDataViews(value); return *this;}

    /**
     * <p>A list of Dataviews.</p>
     */
    inline ListDataViewsResult& WithDataViews(Aws::Vector<DataViewSummary>&& value) { SetDataViews(std::move(value)); return *this;}

    /**
     * <p>A list of Dataviews.</p>
     */
    inline ListDataViewsResult& AddDataViews(const DataViewSummary& value) { m_dataViews.push_back(value); return *this; }

    /**
     * <p>A list of Dataviews.</p>
     */
    inline ListDataViewsResult& AddDataViews(DataViewSummary&& value) { m_dataViews.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<DataViewSummary> m_dataViews;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
