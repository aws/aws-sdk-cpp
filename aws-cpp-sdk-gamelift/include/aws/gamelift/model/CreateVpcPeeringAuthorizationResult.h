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
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/CreateVpcPeeringAuthorizationOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API CreateVpcPeeringAuthorizationResult
  {
  public:
    CreateVpcPeeringAuthorizationResult();
    CreateVpcPeeringAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateVpcPeeringAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
