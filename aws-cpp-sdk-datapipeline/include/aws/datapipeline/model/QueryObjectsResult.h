/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DataPipeline
{
namespace Model
{
  /**
   * <p>Contains the output of QueryObjects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/QueryObjectsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API QueryObjectsResult
  {
  public:
    QueryObjectsResult();
    QueryObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    QueryObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_ids = value; }

    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_ids = std::move(value); }

    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline QueryObjectsResult& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline QueryObjectsResult& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline QueryObjectsResult& AddIds(const Aws::String& value) { m_ids.push_back(value); return *this; }

    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline QueryObjectsResult& AddIds(Aws::String&& value) { m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers that match the query selectors.</p>
     */
    inline QueryObjectsResult& AddIds(const char* value) { m_ids.push_back(value); return *this; }


    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>QueryObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>QueryObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>QueryObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>QueryObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>QueryObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline QueryObjectsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>QueryObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline QueryObjectsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>QueryObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline QueryObjectsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Indicates whether there are more results that can be obtained by a subsequent
     * call.</p>
     */
    inline bool GetHasMoreResults() const{ return m_hasMoreResults; }

    /**
     * <p>Indicates whether there are more results that can be obtained by a subsequent
     * call.</p>
     */
    inline void SetHasMoreResults(bool value) { m_hasMoreResults = value; }

    /**
     * <p>Indicates whether there are more results that can be obtained by a subsequent
     * call.</p>
     */
    inline QueryObjectsResult& WithHasMoreResults(bool value) { SetHasMoreResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_ids;

    Aws::String m_marker;

    bool m_hasMoreResults;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
