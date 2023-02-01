/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
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
   * <p>The output from the GetThingShadow operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/GetThingShadowResponse">AWS
   * API Reference</a></p>
   */
  class GetThingShadowResult
  {
  public:
    AWS_IOTDATAPLANE_API GetThingShadowResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_IOTDATAPLANE_API GetThingShadowResult(GetThingShadowResult&&);
    AWS_IOTDATAPLANE_API GetThingShadowResult& operator=(GetThingShadowResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetThingShadowResult(const GetThingShadowResult&) = delete;
    GetThingShadowResult& operator=(const GetThingShadowResult&) = delete;


    AWS_IOTDATAPLANE_API GetThingShadowResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_IOTDATAPLANE_API GetThingShadowResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The state information, in JSON format.</p>
     */
    inline Aws::IOStream& GetPayload() { return m_payload.GetUnderlyingStream(); }

    /**
     * <p>The state information, in JSON format.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }

  private:

  Aws::Utils::Stream::ResponseStream m_payload;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
