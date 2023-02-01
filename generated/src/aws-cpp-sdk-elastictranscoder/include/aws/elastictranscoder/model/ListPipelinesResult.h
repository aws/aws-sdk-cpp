/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elastictranscoder/ElasticTranscoder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elastictranscoder/model/Pipeline.h>
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
namespace ElasticTranscoder
{
namespace Model
{
  /**
   * <p>A list of the pipelines associated with the current AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elastictranscoder-2012-09-25/ListPipelinesResponse">AWS
   * API Reference</a></p>
   */
  class ListPipelinesResult
  {
  public:
    AWS_ELASTICTRANSCODER_API ListPipelinesResult();
    AWS_ELASTICTRANSCODER_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICTRANSCODER_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetPipelines(Aws::Vector<Pipeline>&& value) { m_pipelines = std::move(value); }

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline ListPipelinesResult& WithPipelines(const Aws::Vector<Pipeline>& value) { SetPipelines(value); return *this;}

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline ListPipelinesResult& WithPipelines(Aws::Vector<Pipeline>&& value) { SetPipelines(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline ListPipelinesResult& AddPipelines(const Pipeline& value) { m_pipelines.push_back(value); return *this; }

    /**
     * <p>An array of <code>Pipeline</code> objects.</p>
     */
    inline ListPipelinesResult& AddPipelines(Pipeline&& value) { m_pipelines.push_back(std::move(value)); return *this; }


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
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

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
    inline ListPipelinesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

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
