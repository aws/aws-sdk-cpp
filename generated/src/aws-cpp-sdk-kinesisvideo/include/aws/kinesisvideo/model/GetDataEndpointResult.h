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
    AWS_KINESISVIDEO_API GetDataEndpointResult() = default;
    AWS_KINESISVIDEO_API GetDataEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API GetDataEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint value. To read data from the stream or to write data to it,
     * specify this endpoint in your application.</p>
     */
    inline const Aws::String& GetDataEndpoint() const { return m_dataEndpoint; }
    template<typename DataEndpointT = Aws::String>
    void SetDataEndpoint(DataEndpointT&& value) { m_dataEndpointHasBeenSet = true; m_dataEndpoint = std::forward<DataEndpointT>(value); }
    template<typename DataEndpointT = Aws::String>
    GetDataEndpointResult& WithDataEndpoint(DataEndpointT&& value) { SetDataEndpoint(std::forward<DataEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataEndpoint;
    bool m_dataEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
