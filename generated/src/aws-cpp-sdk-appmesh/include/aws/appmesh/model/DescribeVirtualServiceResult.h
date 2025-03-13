/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/model/VirtualServiceData.h>
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
namespace AppMesh
{
namespace Model
{
  /**
   * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DescribeVirtualServiceOutput">AWS
   * API Reference</a></p>
   */
  class DescribeVirtualServiceResult
  {
  public:
    AWS_APPMESH_API DescribeVirtualServiceResult() = default;
    AWS_APPMESH_API DescribeVirtualServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPMESH_API DescribeVirtualServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The full description of your virtual service.</p>
     */
    inline const VirtualServiceData& GetVirtualService() const { return m_virtualService; }
    template<typename VirtualServiceT = VirtualServiceData>
    void SetVirtualService(VirtualServiceT&& value) { m_virtualServiceHasBeenSet = true; m_virtualService = std::forward<VirtualServiceT>(value); }
    template<typename VirtualServiceT = VirtualServiceData>
    DescribeVirtualServiceResult& WithVirtualService(VirtualServiceT&& value) { SetVirtualService(std::forward<VirtualServiceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVirtualServiceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VirtualServiceData m_virtualService;
    bool m_virtualServiceHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
