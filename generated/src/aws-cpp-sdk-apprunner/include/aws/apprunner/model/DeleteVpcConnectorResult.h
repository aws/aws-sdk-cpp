/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/VpcConnector.h>
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
  class DeleteVpcConnectorResult
  {
  public:
    AWS_APPRUNNER_API DeleteVpcConnectorResult() = default;
    AWS_APPRUNNER_API DeleteVpcConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API DeleteVpcConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the App Runner VPC connector that this request just
     * deleted.</p>
     */
    inline const VpcConnector& GetVpcConnector() const { return m_vpcConnector; }
    template<typename VpcConnectorT = VpcConnector>
    void SetVpcConnector(VpcConnectorT&& value) { m_vpcConnectorHasBeenSet = true; m_vpcConnector = std::forward<VpcConnectorT>(value); }
    template<typename VpcConnectorT = VpcConnector>
    DeleteVpcConnectorResult& WithVpcConnector(VpcConnectorT&& value) { SetVpcConnector(std::forward<VpcConnectorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVpcConnectorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VpcConnector m_vpcConnector;
    bool m_vpcConnectorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
