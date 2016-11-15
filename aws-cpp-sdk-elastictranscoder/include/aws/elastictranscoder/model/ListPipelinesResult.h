/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Pipeline.h>

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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p>A list of the pipelines associated with the current AWS account.</p>
   */
  class AWS_ELASTICTRANSCODER_API ListPipelinesResult
  {
  public:
    ListPipelinesResult();
    ListPipelinesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPipelinesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline const Aws::Vector<Pipeline>& GetPipelines() const{ return m_pipelines; }

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline void SetPipelines(const Aws::Vector<Pipeline>& value) { m_pipelines = value; }

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline void SetPipelines(Aws::Vector<Pipeline>&& value) { m_pipelines = value; }

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline ListPipelinesResult& WithPipelines(const Aws::Vector<Pipeline>& value) { SetPipelines(value); return *this;}

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline ListPipelinesResult& WithPipelines(Aws::Vector<Pipeline>&& value) { SetPipelines(value); return *this;}

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline ListPipelinesResult& AddPipelines(const Pipeline& value) { m_pipelines.push_back(value); return *this; }

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline ListPipelinesResult& AddPipelines(Pipeline&& value) { m_pipelines.push_back(value); return *this; }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the pipelines fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the pipelines fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the pipelines fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = value; }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the pipelines fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the pipelines fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline ListPipelinesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the pipelines fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline ListPipelinesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>A value that you use to access the second and subsequent pages of results, if
     * any. When the pipelines fit on one page or when you've reached the last page of
     * results, the value of <code>NextPageToken</code> is <code>null</code>.</p>
     */
    inline ListPipelinesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:
    Aws::Vector<Pipeline> m_pipelines;
    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ElasticTranscoder
} // namespace Aws
