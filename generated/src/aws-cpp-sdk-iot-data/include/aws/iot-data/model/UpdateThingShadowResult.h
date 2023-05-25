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
    AWS_IOTDATAPLANE_API UpdateThingShadowResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_IOTDATAPLANE_API UpdateThingShadowResult(UpdateThingShadowResult&&);
    AWS_IOTDATAPLANE_API UpdateThingShadowResult& operator=(UpdateThingShadowResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    UpdateThingShadowResult(const UpdateThingShadowResult&) = delete;
    UpdateThingShadowResult& operator=(const UpdateThingShadowResult&) = delete;


    AWS_IOTDATAPLANE_API UpdateThingShadowResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_IOTDATAPLANE_API UpdateThingShadowResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The state information, in JSON format.</p>
     */
    inline Aws::IOStream& GetPayload() const { return m_payload.GetUnderlyingStream(); }

    /**
     * <p>The state information, in JSON format.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_payload = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateThingShadowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateThingShadowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateThingShadowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
