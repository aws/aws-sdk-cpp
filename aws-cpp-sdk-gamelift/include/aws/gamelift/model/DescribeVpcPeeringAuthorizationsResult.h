/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_GAMELIFT_API DescribeVpcPeeringAuthorizationsResult
  {
  public:
    DescribeVpcPeeringAuthorizationsResult();
    DescribeVpcPeeringAuthorizationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeVpcPeeringAuthorizationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Collection of objects that describe all valid VPC peering operations for the
     * current AWS account.</p>
     */
    inline const Aws::Vector<VpcPeeringAuthorization>& GetVpcPeeringAuthorizations() const{ return m_vpcPeeringAuthorizations; }

    /**
     * <p>Collection of objects that describe all valid VPC peering operations for the
     * current AWS account.</p>
     */
    inline void SetVpcPeeringAuthorizations(const Aws::Vector<VpcPeeringAuthorization>& value) { m_vpcPeeringAuthorizations = value; }

    /**
     * <p>Collection of objects that describe all valid VPC peering operations for the
     * current AWS account.</p>
     */
    inline void SetVpcPeeringAuthorizations(Aws::Vector<VpcPeeringAuthorization>&& value) { m_vpcPeeringAuthorizations = std::move(value); }

    /**
     * <p>Collection of objects that describe all valid VPC peering operations for the
     * current AWS account.</p>
     */
    inline DescribeVpcPeeringAuthorizationsResult& WithVpcPeeringAuthorizations(const Aws::Vector<VpcPeeringAuthorization>& value) { SetVpcPeeringAuthorizations(value); return *this;}

    /**
     * <p>Collection of objects that describe all valid VPC peering operations for the
     * current AWS account.</p>
     */
    inline DescribeVpcPeeringAuthorizationsResult& WithVpcPeeringAuthorizations(Aws::Vector<VpcPeeringAuthorization>&& value) { SetVpcPeeringAuthorizations(std::move(value)); return *this;}

    /**
     * <p>Collection of objects that describe all valid VPC peering operations for the
     * current AWS account.</p>
     */
    inline DescribeVpcPeeringAuthorizationsResult& AddVpcPeeringAuthorizations(const VpcPeeringAuthorization& value) { m_vpcPeeringAuthorizations.push_back(value); return *this; }

    /**
     * <p>Collection of objects that describe all valid VPC peering operations for the
     * current AWS account.</p>
     */
    inline DescribeVpcPeeringAuthorizationsResult& AddVpcPeeringAuthorizations(VpcPeeringAuthorization&& value) { m_vpcPeeringAuthorizations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VpcPeeringAuthorization> m_vpcPeeringAuthorizations;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
