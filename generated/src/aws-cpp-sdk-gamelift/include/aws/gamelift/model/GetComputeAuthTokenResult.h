/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class GetComputeAuthTokenResult
  {
  public:
    AWS_GAMELIFT_API GetComputeAuthTokenResult() = default;
    AWS_GAMELIFT_API GetComputeAuthTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API GetComputeAuthTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A unique identifier for the fleet that the compute is registered to.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    GetComputeAuthTokenResult& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to a Amazon GameLift Servers fleet resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::fleet/fleet-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetFleetArn() const { return m_fleetArn; }
    template<typename FleetArnT = Aws::String>
    void SetFleetArn(FleetArnT&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::forward<FleetArnT>(value); }
    template<typename FleetArnT = Aws::String>
    GetComputeAuthTokenResult& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the compute resource that the authentication token is issued
     * to.</p>
     */
    inline const Aws::String& GetComputeName() const { return m_computeName; }
    template<typename ComputeNameT = Aws::String>
    void SetComputeName(ComputeNameT&& value) { m_computeNameHasBeenSet = true; m_computeName = std::forward<ComputeNameT>(value); }
    template<typename ComputeNameT = Aws::String>
    GetComputeAuthTokenResult& WithComputeName(ComputeNameT&& value) { SetComputeName(std::forward<ComputeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (<a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/s3-arn-format.html">ARN</a>)
     * that is assigned to an Amazon GameLift Servers compute resource and uniquely
     * identifies it. ARNs are unique across all Regions. Format is
     * <code>arn:aws:gamelift:&lt;region&gt;::compute/compute-a1234567-b8c9-0d1e-2fa3-b45c6d7e8912</code>.</p>
     */
    inline const Aws::String& GetComputeArn() const { return m_computeArn; }
    template<typename ComputeArnT = Aws::String>
    void SetComputeArn(ComputeArnT&& value) { m_computeArnHasBeenSet = true; m_computeArn = std::forward<ComputeArnT>(value); }
    template<typename ComputeArnT = Aws::String>
    GetComputeAuthTokenResult& WithComputeArn(ComputeArnT&& value) { SetComputeArn(std::forward<ComputeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid temporary authentication token.</p>
     */
    inline const Aws::String& GetAuthToken() const { return m_authToken; }
    template<typename AuthTokenT = Aws::String>
    void SetAuthToken(AuthTokenT&& value) { m_authTokenHasBeenSet = true; m_authToken = std::forward<AuthTokenT>(value); }
    template<typename AuthTokenT = Aws::String>
    GetComputeAuthTokenResult& WithAuthToken(AuthTokenT&& value) { SetAuthToken(std::forward<AuthTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time until the authentication token is no longer valid.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTimestamp() const { return m_expirationTimestamp; }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    void SetExpirationTimestamp(ExpirationTimestampT&& value) { m_expirationTimestampHasBeenSet = true; m_expirationTimestamp = std::forward<ExpirationTimestampT>(value); }
    template<typename ExpirationTimestampT = Aws::Utils::DateTime>
    GetComputeAuthTokenResult& WithExpirationTimestamp(ExpirationTimestampT&& value) { SetExpirationTimestamp(std::forward<ExpirationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComputeAuthTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet = false;

    Aws::String m_computeName;
    bool m_computeNameHasBeenSet = false;

    Aws::String m_computeArn;
    bool m_computeArnHasBeenSet = false;

    Aws::String m_authToken;
    bool m_authTokenHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTimestamp{};
    bool m_expirationTimestampHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
