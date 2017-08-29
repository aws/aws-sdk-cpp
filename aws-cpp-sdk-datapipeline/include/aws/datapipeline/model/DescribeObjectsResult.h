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
#include <aws/datapipeline/model/PipelineObject.h>
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
   * <p>Contains the output of DescribeObjects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/DescribeObjectsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API DescribeObjectsResult
  {
  public:
    DescribeObjectsResult();
    DescribeObjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeObjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of object definitions.</p>
     */
    inline const Aws::Vector<PipelineObject>& GetPipelineObjects() const{ return m_pipelineObjects; }

    /**
     * <p>An array of object definitions.</p>
     */
    inline void SetPipelineObjects(const Aws::Vector<PipelineObject>& value) { m_pipelineObjects = value; }

    /**
     * <p>An array of object definitions.</p>
     */
    inline void SetPipelineObjects(Aws::Vector<PipelineObject>&& value) { m_pipelineObjects = std::move(value); }

    /**
     * <p>An array of object definitions.</p>
     */
    inline DescribeObjectsResult& WithPipelineObjects(const Aws::Vector<PipelineObject>& value) { SetPipelineObjects(value); return *this;}

    /**
     * <p>An array of object definitions.</p>
     */
    inline DescribeObjectsResult& WithPipelineObjects(Aws::Vector<PipelineObject>&& value) { SetPipelineObjects(std::move(value)); return *this;}

    /**
     * <p>An array of object definitions.</p>
     */
    inline DescribeObjectsResult& AddPipelineObjects(const PipelineObject& value) { m_pipelineObjects.push_back(value); return *this; }

    /**
     * <p>An array of object definitions.</p>
     */
    inline DescribeObjectsResult& AddPipelineObjects(PipelineObject&& value) { m_pipelineObjects.push_back(std::move(value)); return *this; }


    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline DescribeObjectsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline DescribeObjectsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The starting point for the next page of results. To view the next page of
     * results, call <code>DescribeObjects</code> again with this marker value. If the
     * value is null, there are no more results.</p>
     */
    inline DescribeObjectsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>Indicates whether there are more results to return.</p>
     */
    inline bool GetHasMoreResults() const{ return m_hasMoreResults; }

    /**
     * <p>Indicates whether there are more results to return.</p>
     */
    inline void SetHasMoreResults(bool value) { m_hasMoreResults = value; }

    /**
     * <p>Indicates whether there are more results to return.</p>
     */
    inline DescribeObjectsResult& WithHasMoreResults(bool value) { SetHasMoreResults(value); return *this;}

  private:

    Aws::Vector<PipelineObject> m_pipelineObjects;

    Aws::String m_marker;

    bool m_hasMoreResults;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
