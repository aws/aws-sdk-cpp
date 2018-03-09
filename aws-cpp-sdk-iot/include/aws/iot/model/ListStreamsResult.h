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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/StreamSummary.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API ListStreamsResult
  {
  public:
    ListStreamsResult();
    ListStreamsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListStreamsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of streams.</p>
     */
    inline const Aws::Vector<StreamSummary>& GetStreams() const{ return m_streams; }

    /**
     * <p>A list of streams.</p>
     */
    inline void SetStreams(const Aws::Vector<StreamSummary>& value) { m_streams = value; }

    /**
     * <p>A list of streams.</p>
     */
    inline void SetStreams(Aws::Vector<StreamSummary>&& value) { m_streams = std::move(value); }

    /**
     * <p>A list of streams.</p>
     */
    inline ListStreamsResult& WithStreams(const Aws::Vector<StreamSummary>& value) { SetStreams(value); return *this;}

    /**
     * <p>A list of streams.</p>
     */
    inline ListStreamsResult& WithStreams(Aws::Vector<StreamSummary>&& value) { SetStreams(std::move(value)); return *this;}

    /**
     * <p>A list of streams.</p>
     */
    inline ListStreamsResult& AddStreams(const StreamSummary& value) { m_streams.push_back(value); return *this; }

    /**
     * <p>A list of streams.</p>
     */
    inline ListStreamsResult& AddStreams(StreamSummary&& value) { m_streams.push_back(std::move(value)); return *this; }


    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListStreamsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListStreamsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used to get the next set of results.</p>
     */
    inline ListStreamsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<StreamSummary> m_streams;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
