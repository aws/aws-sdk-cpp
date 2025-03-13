/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/model/EndpointProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class DescribeEndpointResult
  {
  public:
    AWS_COMPREHEND_API DescribeEndpointResult() = default;
    AWS_COMPREHEND_API DescribeEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API DescribeEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Describes information associated with the specific endpoint.</p>
     */
    inline const EndpointProperties& GetEndpointProperties() const { return m_endpointProperties; }
    template<typename EndpointPropertiesT = EndpointProperties>
    void SetEndpointProperties(EndpointPropertiesT&& value) { m_endpointPropertiesHasBeenSet = true; m_endpointProperties = std::forward<EndpointPropertiesT>(value); }
    template<typename EndpointPropertiesT = EndpointProperties>
    DescribeEndpointResult& WithEndpointProperties(EndpointPropertiesT&& value) { SetEndpointProperties(std::forward<EndpointPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EndpointProperties m_endpointProperties;
    bool m_endpointPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
