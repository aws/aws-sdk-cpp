/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterface.h>
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
  class CreateBGPPeerResult
  {
  public:
    AWS_DIRECTCONNECT_API CreateBGPPeerResult() = default;
    AWS_DIRECTCONNECT_API CreateBGPPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateBGPPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The virtual interface.</p>
     */
    inline const VirtualInterface& GetVirtualInterface() const { return m_virtualInterface; }
    template<typename VirtualInterfaceT = VirtualInterface>
    void SetVirtualInterface(VirtualInterfaceT&& value) { m_virtualInterfaceHasBeenSet = true; m_virtualInterface = std::forward<VirtualInterfaceT>(value); }
    template<typename VirtualInterfaceT = VirtualInterface>
    CreateBGPPeerResult& WithVirtualInterface(VirtualInterfaceT&& value) { SetVirtualInterface(std::forward<VirtualInterfaceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBGPPeerResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VirtualInterface m_virtualInterface;
    bool m_virtualInterfaceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
