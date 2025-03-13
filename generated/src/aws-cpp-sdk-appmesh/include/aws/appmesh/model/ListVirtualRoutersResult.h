/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/VirtualRouterRef.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListVirtualRoutersOutput">AWS
   * API Reference</a></p>
   */
  class ListVirtualRoutersResult
  {
  public:
    AWS_APPMESH_API ListVirtualRoutersResult() = default;
    AWS_APPMESH_API ListVirtualRoutersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API ListVirtualRoutersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListVirtualRouters</code> request. When the results of a
     * <code>ListVirtualRouters</code> request exceed <code>limit</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualRoutersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of existing virtual routers for the specified service mesh.</p>
     */
    inline const Aws::Vector<VirtualRouterRef>& GetVirtualRouters() const { return m_virtualRouters; }
    template<typename VirtualRoutersT = Aws::Vector<VirtualRouterRef>>
    void SetVirtualRouters(VirtualRoutersT&& value) { m_virtualRoutersHasBeenSet = true; m_virtualRouters = std::forward<VirtualRoutersT>(value); }
    template<typename VirtualRoutersT = Aws::Vector<VirtualRouterRef>>
    ListVirtualRoutersResult& WithVirtualRouters(VirtualRoutersT&& value) { SetVirtualRouters(std::forward<VirtualRoutersT>(value)); return *this;}
    template<typename VirtualRoutersT = VirtualRouterRef>
    ListVirtualRoutersResult& AddVirtualRouters(VirtualRoutersT&& value) { m_virtualRoutersHasBeenSet = true; m_virtualRouters.emplace_back(std::forward<VirtualRoutersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVirtualRoutersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VirtualRouterRef> m_virtualRouters;
    bool m_virtualRoutersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
