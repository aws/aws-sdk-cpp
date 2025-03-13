/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingListener.h>
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
  class DescribeCustomRoutingListenerResult
  {
  public:
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingListenerResult() = default;
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API DescribeCustomRoutingListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The description of a listener for a custom routing accelerator.</p>
     */
    inline const CustomRoutingListener& GetListener() const { return m_listener; }
    template<typename ListenerT = CustomRoutingListener>
    void SetListener(ListenerT&& value) { m_listenerHasBeenSet = true; m_listener = std::forward<ListenerT>(value); }
    template<typename ListenerT = CustomRoutingListener>
    DescribeCustomRoutingListenerResult& WithListener(ListenerT&& value) { SetListener(std::forward<ListenerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeCustomRoutingListenerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    CustomRoutingListener m_listener;
    bool m_listenerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
