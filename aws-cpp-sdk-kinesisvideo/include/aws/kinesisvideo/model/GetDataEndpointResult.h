/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetDataEndpointResult
  {
  public:
    AWS_KINESISVIDEO_API GetDataEndpointResult();
    AWS_KINESISVIDEO_API GetDataEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API GetDataEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
