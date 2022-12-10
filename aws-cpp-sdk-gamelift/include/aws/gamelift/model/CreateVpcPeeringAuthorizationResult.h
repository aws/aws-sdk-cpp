/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
  class CreateVpcPeeringAuthorizationResult
  {
  public:
    AWS_GAMELIFT_API CreateVpcPeeringAuthorizationResult();
    AWS_GAMELIFT_API CreateVpcPeeringAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API CreateVpcPeeringAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details on the requested VPC peering authorization, including expiration.</p>
     */
    inline const VpcPeeringAuthorization& GetVpcPeeringAuthorization() const{ return m_vpcPeeringAuthorization; }

    /**
     * <p>Details on the requested VPC peering authorization, including expiration.</p>
     */
    inline void SetVpcPeeringAuthorization(const VpcPeeringAuthorization& value) { m_vpcPeeringAuthorization = value; }

    /**
     * <p>Details on the requested VPC peering authorization, including expiration.</p>
     */
    inline void SetVpcPeeringAuthorization(VpcPeeringAuthorization&& value) { m_vpcPeeringAuthorization = std::move(value); }

    /**
     * <p>Details on the requested VPC peering authorization, including expiration.</p>
     */
    inline CreateVpcPeeringAuthorizationResult& WithVpcPeeringAuthorization(const VpcPeeringAuthorization& value) { SetVpcPeeringAuthorization(value); return *this;}

    /**
     * <p>Details on the requested VPC peering authorization, including expiration.</p>
     */
    inline CreateVpcPeeringAuthorizationResult& WithVpcPeeringAuthorization(VpcPeeringAuthorization&& value) { SetVpcPeeringAuthorization(std::move(value)); return *this;}

  private:

    VpcPeeringAuthorization m_vpcPeeringAuthorization;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
