/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace IoTDataPlane
{
namespace Model
{
  /**
   * <p>The output from the UpdateThingShadow operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/UpdateThingShadowResponse">AWS
   * API Reference</a></p>
   */
  class UpdateThingShadowResult
  {
  public:
    AWS_IOTDATAPLANE_API UpdateThingShadowResult() = default;
    AWS_IOTDATAPLANE_API UpdateThingShadowResult(UpdateThingShadowResult&&) = default;
    AWS_IOTDATAPLANE_API UpdateThingShadowResult& operator=(UpdateThingShadowResult&&) = default;
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    UpdateThingShadowResult(const UpdateThingShadowResult&) = delete;
    UpdateThingShadowResult& operator=(const UpdateThingShadowResult&) = delete;


    AWS_IOTDATAPLANE_API UpdateThingShadowResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_IOTDATAPLANE_API UpdateThingShadowResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    ///@{
    /**
     * <p>The state information, in JSON format.</p>
     */
    inline Aws::IOStream& GetPayload() const { return m_payload.GetUnderlyingStream(); }
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateThingShadowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Stream::ResponseStream m_payload{};
    bool m_payloadHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
