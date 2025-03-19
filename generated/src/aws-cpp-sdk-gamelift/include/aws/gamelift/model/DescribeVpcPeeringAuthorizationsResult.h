/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/VpcPeeringAuthorization.h>
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
namespace GameLift
{
namespace Model
{
  class DescribeVpcPeeringAuthorizationsResult
  {
  public:
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult() = default;
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<VpcPeeringAuthorization>& GetVpcPeeringAuthorizations() const { return m_vpcPeeringAuthorizations; }
    template<typename VpcPeeringAuthorizationsT = Aws::Vector<VpcPeeringAuthorization>>
    void SetVpcPeeringAuthorizations(VpcPeeringAuthorizationsT&& value) { m_vpcPeeringAuthorizationsHasBeenSet = true; m_vpcPeeringAuthorizations = std::forward<VpcPeeringAuthorizationsT>(value); }
    template<typename VpcPeeringAuthorizationsT = Aws::Vector<VpcPeeringAuthorization>>
    DescribeVpcPeeringAuthorizationsResult& WithVpcPeeringAuthorizations(VpcPeeringAuthorizationsT&& value) { SetVpcPeeringAuthorizations(std::forward<VpcPeeringAuthorizationsT>(value)); return *this;}
    template<typename VpcPeeringAuthorizationsT = VpcPeeringAuthorization>
    DescribeVpcPeeringAuthorizationsResult& AddVpcPeeringAuthorizations(VpcPeeringAuthorizationsT&& value) { m_vpcPeeringAuthorizationsHasBeenSet = true; m_vpcPeeringAuthorizations.emplace_back(std::forward<VpcPeeringAuthorizationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeVpcPeeringAuthorizationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcPeeringAuthorization> m_vpcPeeringAuthorizations;
    bool m_vpcPeeringAuthorizationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
