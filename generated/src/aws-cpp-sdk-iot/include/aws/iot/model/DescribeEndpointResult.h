/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  /**
   * <p>The output from the DescribeEndpoint operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEndpointResponse">AWS
   * API Reference</a></p>
   */
  class DescribeEndpointResult
  {
  public:
    AWS_IOT_API DescribeEndpointResult() = default;
    AWS_IOT_API DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The endpoint. The format of the endpoint is as follows:
     * <i>identifier</i>.iot.<i>region</i>.amazonaws.com.</p>
     */
    inline const Aws::String& GetEndpointAddress() const { return m_endpointAddress; }
    template<typename EndpointAddressT = Aws::String>
    void SetEndpointAddress(EndpointAddressT&& value) { m_endpointAddressHasBeenSet = true; m_endpointAddress = std::forward<EndpointAddressT>(value); }
    template<typename EndpointAddressT = Aws::String>
    DescribeEndpointResult& WithEndpointAddress(EndpointAddressT&& value) { SetEndpointAddress(std::forward<EndpointAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointAddress;
    bool m_endpointAddressHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
