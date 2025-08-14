/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/VirtualInterface.h>
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
  class DescribeVirtualInterfacesResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeVirtualInterfacesResult() = default;
    AWS_DIRECTCONNECT_API DescribeVirtualInterfacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeVirtualInterfacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The virtual interfaces</p>
     */
    inline const Aws::Vector<VirtualInterface>& GetVirtualInterfaces() const { return m_virtualInterfaces; }
    template<typename VirtualInterfacesT = Aws::Vector<VirtualInterface>>
    void SetVirtualInterfaces(VirtualInterfacesT&& value) { m_virtualInterfacesHasBeenSet = true; m_virtualInterfaces = std::forward<VirtualInterfacesT>(value); }
    template<typename VirtualInterfacesT = Aws::Vector<VirtualInterface>>
    DescribeVirtualInterfacesResult& WithVirtualInterfaces(VirtualInterfacesT&& value) { SetVirtualInterfaces(std::forward<VirtualInterfacesT>(value)); return *this;}
    template<typename VirtualInterfacesT = VirtualInterface>
    DescribeVirtualInterfacesResult& AddVirtualInterfaces(VirtualInterfacesT&& value) { m_virtualInterfacesHasBeenSet = true; m_virtualInterfaces.emplace_back(std::forward<VirtualInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVirtualInterfacesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVirtualInterfacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VirtualInterface> m_virtualInterfaces;
    bool m_virtualInterfacesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
