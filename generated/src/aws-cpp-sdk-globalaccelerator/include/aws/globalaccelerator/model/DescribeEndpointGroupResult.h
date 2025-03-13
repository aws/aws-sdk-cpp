/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/EndpointGroup.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class DescribeEndpointGroupResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeEndpointGroupResult() = default;
    AWS_GLOBALACCELERATOR_API DescribeEndpointGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeEndpointGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of an endpoint group.</p>
     */
    inline const EndpointGroup& GetEndpointGroup() const { return m_endpointGroup; }
    template<typename EndpointGroupT = EndpointGroup>
    void SetEndpointGroup(EndpointGroupT&& value) { m_endpointGroupHasBeenSet = true; m_endpointGroup = std::forward<EndpointGroupT>(value); }
    template<typename EndpointGroupT = EndpointGroup>
    DescribeEndpointGroupResult& WithEndpointGroup(EndpointGroupT&& value) { SetEndpointGroup(std::forward<EndpointGroupT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEndpointGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EndpointGroup m_endpointGroup;
    bool m_endpointGroupHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
