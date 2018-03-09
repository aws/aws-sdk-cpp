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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API CreateStreamResult
  {
  public:
    CreateStreamResult();
    CreateStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The stream ID.</p>
     */
    inline const Aws::String& GetStreamId() const{ return m_streamId; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const Aws::String& value) { m_streamId = value; }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(Aws::String&& value) { m_streamId = std::move(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline void SetStreamId(const char* value) { m_streamId.assign(value); }

    /**
     * <p>The stream ID.</p>
     */
    inline CreateStreamResult& WithStreamId(const Aws::String& value) { SetStreamId(value); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline CreateStreamResult& WithStreamId(Aws::String&& value) { SetStreamId(std::move(value)); return *this;}

    /**
     * <p>The stream ID.</p>
     */
    inline CreateStreamResult& WithStreamId(const char* value) { SetStreamId(value); return *this;}


    /**
     * <p>The stream ARN.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArn = value; }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArn = std::move(value); }

    /**
     * <p>The stream ARN.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArn.assign(value); }

    /**
     * <p>The stream ARN.</p>
     */
    inline CreateStreamResult& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The stream ARN.</p>
     */
    inline CreateStreamResult& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The stream ARN.</p>
     */
    inline CreateStreamResult& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>A description of the stream.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the stream.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the stream.</p>
     */
    inline CreateStreamResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the stream.</p>
     */
    inline CreateStreamResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the stream.</p>
     */
    inline CreateStreamResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version of the stream.</p>
     */
    inline int GetStreamVersion() const{ return m_streamVersion; }

    /**
     * <p>The version of the stream.</p>
     */
    inline void SetStreamVersion(int value) { m_streamVersion = value; }

    /**
     * <p>The version of the stream.</p>
     */
    inline CreateStreamResult& WithStreamVersion(int value) { SetStreamVersion(value); return *this;}

  private:

    Aws::String m_streamId;

    Aws::String m_streamArn;

    Aws::String m_description;

    int m_streamVersion;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
