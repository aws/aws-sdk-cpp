/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/AwsCredentials.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ContainerIdentifier.h>
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
  class GetComputeAccessResult
  {
  public:
    AWS_GAMELIFT_API GetComputeAccessResult() = default;
    AWS_GAMELIFT_API GetComputeAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API GetComputeAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the fleet that holds the compute resource to be accessed.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    GetComputeAccessResult& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
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
    GetComputeAccessResult& WithFleetArn(FleetArnT&& value) { SetFleetArn(std::forward<FleetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the compute resource to be accessed. This value might be
     * either a compute name or an instance ID.</p>
     */
    inline const Aws::String& GetComputeName() const { return m_computeName; }
    template<typename ComputeNameT = Aws::String>
    void SetComputeName(ComputeNameT&& value) { m_computeNameHasBeenSet = true; m_computeName = std::forward<ComputeNameT>(value); }
    template<typename ComputeNameT = Aws::String>
    GetComputeAccessResult& WithComputeName(ComputeNameT&& value) { SetComputeName(std::forward<ComputeNameT>(value)); return *this;}
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
    GetComputeAccessResult& WithComputeArn(ComputeArnT&& value) { SetComputeArn(std::forward<ComputeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A set of temporary Amazon Web Services credentials for use when connecting to
     * the compute resource with Amazon EC2 Systems Manager (SSM).</p>
     */
    inline const AwsCredentials& GetCredentials() const { return m_credentials; }
    template<typename CredentialsT = AwsCredentials>
    void SetCredentials(CredentialsT&& value) { m_credentialsHasBeenSet = true; m_credentials = std::forward<CredentialsT>(value); }
    template<typename CredentialsT = AwsCredentials>
    GetComputeAccessResult& WithCredentials(CredentialsT&& value) { SetCredentials(std::forward<CredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance ID where the compute resource is running.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    GetComputeAccessResult& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a managed container fleet, a list of containers on the compute. Use the
     * container runtime ID with Docker commands to connect to a specific container.
     * </p>
     */
    inline const Aws::Vector<ContainerIdentifier>& GetContainerIdentifiers() const { return m_containerIdentifiers; }
    template<typename ContainerIdentifiersT = Aws::Vector<ContainerIdentifier>>
    void SetContainerIdentifiers(ContainerIdentifiersT&& value) { m_containerIdentifiersHasBeenSet = true; m_containerIdentifiers = std::forward<ContainerIdentifiersT>(value); }
    template<typename ContainerIdentifiersT = Aws::Vector<ContainerIdentifier>>
    GetComputeAccessResult& WithContainerIdentifiers(ContainerIdentifiersT&& value) { SetContainerIdentifiers(std::forward<ContainerIdentifiersT>(value)); return *this;}
    template<typename ContainerIdentifiersT = ContainerIdentifier>
    GetComputeAccessResult& AddContainerIdentifiers(ContainerIdentifiersT&& value) { m_containerIdentifiersHasBeenSet = true; m_containerIdentifiers.emplace_back(std::forward<ContainerIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetComputeAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    AwsCredentials m_credentials;
    bool m_credentialsHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    Aws::Vector<ContainerIdentifier> m_containerIdentifiers;
    bool m_containerIdentifiersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
