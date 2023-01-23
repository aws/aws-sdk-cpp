/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/MediaCapturePipeline.h>
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
namespace Chime
{
namespace Model
{
  class ListMediaCapturePipelinesResult
  {
  public:
    AWS_CHIME_API ListMediaCapturePipelinesResult();
    AWS_CHIME_API ListMediaCapturePipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API ListMediaCapturePipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The media capture pipeline objects in the list.</p>
     */
    inline const Aws::Vector<MediaCapturePipeline>& GetMediaCapturePipelines() const{ return m_mediaCapturePipelines; }

    /**
     * <p>The media capture pipeline objects in the list.</p>
     */
    inline void SetMediaCapturePipelines(const Aws::Vector<MediaCapturePipeline>& value) { m_mediaCapturePipelines = value; }

    /**
     * <p>The media capture pipeline objects in the list.</p>
     */
    inline void SetMediaCapturePipelines(Aws::Vector<MediaCapturePipeline>&& value) { m_mediaCapturePipelines = std::move(value); }

    /**
     * <p>The media capture pipeline objects in the list.</p>
     */
    inline ListMediaCapturePipelinesResult& WithMediaCapturePipelines(const Aws::Vector<MediaCapturePipeline>& value) { SetMediaCapturePipelines(value); return *this;}

    /**
     * <p>The media capture pipeline objects in the list.</p>
     */
    inline ListMediaCapturePipelinesResult& WithMediaCapturePipelines(Aws::Vector<MediaCapturePipeline>&& value) { SetMediaCapturePipelines(std::move(value)); return *this;}

    /**
     * <p>The media capture pipeline objects in the list.</p>
     */
    inline ListMediaCapturePipelinesResult& AddMediaCapturePipelines(const MediaCapturePipeline& value) { m_mediaCapturePipelines.push_back(value); return *this; }

    /**
     * <p>The media capture pipeline objects in the list.</p>
     */
    inline ListMediaCapturePipelinesResult& AddMediaCapturePipelines(MediaCapturePipeline&& value) { m_mediaCapturePipelines.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline ListMediaCapturePipelinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline ListMediaCapturePipelinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of results. </p>
     */
    inline ListMediaCapturePipelinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MediaCapturePipeline> m_mediaCapturePipelines;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
