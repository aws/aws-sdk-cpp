/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/VpcIngressConnection.h>
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
namespace AppRunner
{
namespace Model
{
  class DeleteVpcIngressConnectionResult
  {
  public:
    AWS_APPRUNNER_API DeleteVpcIngressConnectionResult() = default;
    AWS_APPRUNNER_API DeleteVpcIngressConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DeleteVpcIngressConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the App Runner VPC Ingress Connection that this request just
     * deleted.</p>
     */
    inline const VpcIngressConnection& GetVpcIngressConnection() const { return m_vpcIngressConnection; }
    template<typename VpcIngressConnectionT = VpcIngressConnection>
    void SetVpcIngressConnection(VpcIngressConnectionT&& value) { m_vpcIngressConnectionHasBeenSet = true; m_vpcIngressConnection = std::forward<VpcIngressConnectionT>(value); }
    template<typename VpcIngressConnectionT = VpcIngressConnection>
    DeleteVpcIngressConnectionResult& WithVpcIngressConnection(VpcIngressConnectionT&& value) { SetVpcIngressConnection(std::forward<VpcIngressConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVpcIngressConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VpcIngressConnection m_vpcIngressConnection;
    bool m_vpcIngressConnectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
