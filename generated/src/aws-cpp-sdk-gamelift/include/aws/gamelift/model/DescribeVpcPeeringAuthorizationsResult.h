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
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult();
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects that describe all valid VPC peering operations for
     * the current Amazon Web Services account.</p>
     */
    inline const Aws::Vector<VpcPeeringAuthorization>& GetVpcPeeringAuthorizations() const{ return m_vpcPeeringAuthorizations; }
    inline void SetVpcPeeringAuthorizations(const Aws::Vector<VpcPeeringAuthorization>& value) { m_vpcPeeringAuthorizations = value; }
    inline void SetVpcPeeringAuthorizations(Aws::Vector<VpcPeeringAuthorization>&& value) { m_vpcPeeringAuthorizations = std::move(value); }
    inline DescribeVpcPeeringAuthorizationsResult& WithVpcPeeringAuthorizations(const Aws::Vector<VpcPeeringAuthorization>& value) { SetVpcPeeringAuthorizations(value); return *this;}
    inline DescribeVpcPeeringAuthorizationsResult& WithVpcPeeringAuthorizations(Aws::Vector<VpcPeeringAuthorization>&& value) { SetVpcPeeringAuthorizations(std::move(value)); return *this;}
    inline DescribeVpcPeeringAuthorizationsResult& AddVpcPeeringAuthorizations(const VpcPeeringAuthorization& value) { m_vpcPeeringAuthorizations.push_back(value); return *this; }
    inline DescribeVpcPeeringAuthorizationsResult& AddVpcPeeringAuthorizations(VpcPeeringAuthorization&& value) { m_vpcPeeringAuthorizations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeVpcPeeringAuthorizationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeVpcPeeringAuthorizationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeVpcPeeringAuthorizationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<VpcPeeringAuthorization> m_vpcPeeringAuthorizations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
