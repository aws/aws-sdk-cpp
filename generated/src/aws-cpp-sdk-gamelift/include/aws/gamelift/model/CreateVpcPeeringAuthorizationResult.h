/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/VpcPeeringAuthorization.h>
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


    ///@{
    /**
     * <p>Details on the requested VPC peering authorization, including expiration.</p>
     */
    inline const VpcPeeringAuthorization& GetVpcPeeringAuthorization() const{ return m_vpcPeeringAuthorization; }
    inline void SetVpcPeeringAuthorization(const VpcPeeringAuthorization& value) { m_vpcPeeringAuthorization = value; }
    inline void SetVpcPeeringAuthorization(VpcPeeringAuthorization&& value) { m_vpcPeeringAuthorization = std::move(value); }
    inline CreateVpcPeeringAuthorizationResult& WithVpcPeeringAuthorization(const VpcPeeringAuthorization& value) { SetVpcPeeringAuthorization(value); return *this;}
    inline CreateVpcPeeringAuthorizationResult& WithVpcPeeringAuthorization(VpcPeeringAuthorization&& value) { SetVpcPeeringAuthorization(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateVpcPeeringAuthorizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateVpcPeeringAuthorizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateVpcPeeringAuthorizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    VpcPeeringAuthorization m_vpcPeeringAuthorization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
