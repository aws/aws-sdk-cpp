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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/StreamProcessor.h>
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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API ListStreamProcessorsResult
  {
  public:
    ListStreamProcessorsResult();
    ListStreamProcessorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListStreamProcessorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of stream
     * processors. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of stream
     * processors. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of stream
     * processors. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of stream
     * processors. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of stream
     * processors. </p>
     */
    inline ListStreamProcessorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of stream
     * processors. </p>
     */
    inline ListStreamProcessorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon Rekognition Video returns this token
     * that you can use in the subsequent request to retrieve the next set of stream
     * processors. </p>
     */
    inline ListStreamProcessorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of stream processors that you have created.</p>
     */
    inline const Aws::Vector<StreamProcessor>& GetStreamProcessors() const{ return m_streamProcessors; }

    /**
     * <p>List of stream processors that you have created.</p>
     */
    inline void SetStreamProcessors(const Aws::Vector<StreamProcessor>& value) { m_streamProcessors = value; }

    /**
     * <p>List of stream processors that you have created.</p>
     */
    inline void SetStreamProcessors(Aws::Vector<StreamProcessor>&& value) { m_streamProcessors = std::move(value); }

    /**
     * <p>List of stream processors that you have created.</p>
     */
    inline ListStreamProcessorsResult& WithStreamProcessors(const Aws::Vector<StreamProcessor>& value) { SetStreamProcessors(value); return *this;}

    /**
     * <p>List of stream processors that you have created.</p>
     */
    inline ListStreamProcessorsResult& WithStreamProcessors(Aws::Vector<StreamProcessor>&& value) { SetStreamProcessors(std::move(value)); return *this;}

    /**
     * <p>List of stream processors that you have created.</p>
     */
    inline ListStreamProcessorsResult& AddStreamProcessors(const StreamProcessor& value) { m_streamProcessors.push_back(value); return *this; }

    /**
     * <p>List of stream processors that you have created.</p>
     */
    inline ListStreamProcessorsResult& AddStreamProcessors(StreamProcessor&& value) { m_streamProcessors.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<StreamProcessor> m_streamProcessors;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
