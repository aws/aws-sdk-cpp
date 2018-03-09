﻿/*
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
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
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
namespace KinesisVideo
{
namespace Model
{
  class AWS_KINESISVIDEO_API GetDataEndpointResult
  {
  public:
    GetDataEndpointResult();
    GetDataEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDataEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The endpoint value. To read data from the stream or to write data to it,
     * specify this endpoint in your application.</p>
     */
    inline const Aws::String& GetDataEndpoint() const{ return m_dataEndpoint; }

    /**
     * <p>The endpoint value. To read data from the stream or to write data to it,
     * specify this endpoint in your application.</p>
     */
    inline void SetDataEndpoint(const Aws::String& value) { m_dataEndpoint = value; }

    /**
     * <p>The endpoint value. To read data from the stream or to write data to it,
     * specify this endpoint in your application.</p>
     */
    inline void SetDataEndpoint(Aws::String&& value) { m_dataEndpoint = std::move(value); }

    /**
     * <p>The endpoint value. To read data from the stream or to write data to it,
     * specify this endpoint in your application.</p>
     */
    inline void SetDataEndpoint(const char* value) { m_dataEndpoint.assign(value); }

    /**
     * <p>The endpoint value. To read data from the stream or to write data to it,
     * specify this endpoint in your application.</p>
     */
    inline GetDataEndpointResult& WithDataEndpoint(const Aws::String& value) { SetDataEndpoint(value); return *this;}

    /**
     * <p>The endpoint value. To read data from the stream or to write data to it,
     * specify this endpoint in your application.</p>
     */
    inline GetDataEndpointResult& WithDataEndpoint(Aws::String&& value) { SetDataEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint value. To read data from the stream or to write data to it,
     * specify this endpoint in your application.</p>
     */
    inline GetDataEndpointResult& WithDataEndpoint(const char* value) { SetDataEndpoint(value); return *this;}

  private:

    Aws::String m_dataEndpoint;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
