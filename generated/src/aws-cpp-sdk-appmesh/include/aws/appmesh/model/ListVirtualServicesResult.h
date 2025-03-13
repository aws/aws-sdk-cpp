/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualServiceRef.h>
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
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualServicesOutput">AWS
   * API Reference</a></p>
   */
  class ListVirtualServicesResult
  {
  public:
    AWS_APPMESH_API ListVirtualServicesResult() = default;
    AWS_APPMESH_API ListVirtualServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListVirtualServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualServices</code> request. When the results of a
     * <code>ListVirtualServices</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualServicesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of existing virtual services for the specified service mesh.</p>
     */
    inline const Aws::Vector<VirtualServiceRef>& GetVirtualServices() const { return m_virtualServices; }
    template<typename VirtualServicesT = Aws::Vector<VirtualServiceRef>>
    void SetVirtualServices(VirtualServicesT&& value) { m_virtualServicesHasBeenSet = true; m_virtualServices = std::forward<VirtualServicesT>(value); }
    template<typename VirtualServicesT = Aws::Vector<VirtualServiceRef>>
    ListVirtualServicesResult& WithVirtualServices(VirtualServicesT&& value) { SetVirtualServices(std::forward<VirtualServicesT>(value)); return *this;}
    template<typename VirtualServicesT = VirtualServiceRef>
    ListVirtualServicesResult& AddVirtualServices(VirtualServicesT&& value) { m_virtualServicesHasBeenSet = true; m_virtualServices.emplace_back(std::forward<VirtualServicesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVirtualServicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VirtualServiceRef> m_virtualServices;
    bool m_virtualServicesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
