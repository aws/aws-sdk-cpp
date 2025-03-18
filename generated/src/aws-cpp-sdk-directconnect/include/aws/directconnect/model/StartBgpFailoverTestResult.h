/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterfaceTestHistory.h>
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
namespace DirectConnect
{
namespace Model
{
  class StartBgpFailoverTestResult
  {
  public:
    AWS_DIRECTCONNECT_API StartBgpFailoverTestResult() = default;
    AWS_DIRECTCONNECT_API StartBgpFailoverTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API StartBgpFailoverTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the virtual interface failover test.</p>
     */
    inline const VirtualInterfaceTestHistory& GetVirtualInterfaceTest() const { return m_virtualInterfaceTest; }
    template<typename VirtualInterfaceTestT = VirtualInterfaceTestHistory>
    void SetVirtualInterfaceTest(VirtualInterfaceTestT&& value) { m_virtualInterfaceTestHasBeenSet = true; m_virtualInterfaceTest = std::forward<VirtualInterfaceTestT>(value); }
    template<typename VirtualInterfaceTestT = VirtualInterfaceTestHistory>
    StartBgpFailoverTestResult& WithVirtualInterfaceTest(VirtualInterfaceTestT&& value) { SetVirtualInterfaceTest(std::forward<VirtualInterfaceTestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartBgpFailoverTestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VirtualInterfaceTestHistory m_virtualInterfaceTest;
    bool m_virtualInterfaceTestHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
