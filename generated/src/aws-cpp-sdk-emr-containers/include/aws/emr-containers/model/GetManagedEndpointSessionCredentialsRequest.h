/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class GetManagedEndpointSessionCredentialsRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API GetManagedEndpointSessionCredentialsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetManagedEndpointSessionCredentials"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the managed endpoint for which the request is submitted. </p>
     */
    inline const Aws::String& GetEndpointIdentifier() const { return m_endpointIdentifier; }
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }
    template<typename EndpointIdentifierT = Aws::String>
    void SetEndpointIdentifier(EndpointIdentifierT&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::forward<EndpointIdentifierT>(value); }
    template<typename EndpointIdentifierT = Aws::String>
    GetManagedEndpointSessionCredentialsRequest& WithEndpointIdentifier(EndpointIdentifierT&& value) { SetEndpointIdentifier(std::forward<EndpointIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Virtual Cluster which the Managed Endpoint belongs to. </p>
     */
    inline const Aws::String& GetVirtualClusterIdentifier() const { return m_virtualClusterIdentifier; }
    inline bool VirtualClusterIdentifierHasBeenSet() const { return m_virtualClusterIdentifierHasBeenSet; }
    template<typename VirtualClusterIdentifierT = Aws::String>
    void SetVirtualClusterIdentifier(VirtualClusterIdentifierT&& value) { m_virtualClusterIdentifierHasBeenSet = true; m_virtualClusterIdentifier = std::forward<VirtualClusterIdentifierT>(value); }
    template<typename VirtualClusterIdentifierT = Aws::String>
    GetManagedEndpointSessionCredentialsRequest& WithVirtualClusterIdentifier(VirtualClusterIdentifierT&& value) { SetVirtualClusterIdentifier(std::forward<VirtualClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Execution Role ARN that will be used by the job run. </p>
     */
    inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    template<typename ExecutionRoleArnT = Aws::String>
    void SetExecutionRoleArn(ExecutionRoleArnT&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::forward<ExecutionRoleArnT>(value); }
    template<typename ExecutionRoleArnT = Aws::String>
    GetManagedEndpointSessionCredentialsRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) { SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the token requested. Currently supported and default value of this
     * field is “TOKEN.”</p>
     */
    inline const Aws::String& GetCredentialType() const { return m_credentialType; }
    inline bool CredentialTypeHasBeenSet() const { return m_credentialTypeHasBeenSet; }
    template<typename CredentialTypeT = Aws::String>
    void SetCredentialType(CredentialTypeT&& value) { m_credentialTypeHasBeenSet = true; m_credentialType = std::forward<CredentialTypeT>(value); }
    template<typename CredentialTypeT = Aws::String>
    GetManagedEndpointSessionCredentialsRequest& WithCredentialType(CredentialTypeT&& value) { SetCredentialType(std::forward<CredentialTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration in seconds for which the session token is valid. The default
     * duration is 15 minutes and the maximum is 12 hours.</p>
     */
    inline int GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline GetManagedEndpointSessionCredentialsRequest& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String identifier used to separate sections of the execution logs uploaded to
     * S3.</p>
     */
    inline const Aws::String& GetLogContext() const { return m_logContext; }
    inline bool LogContextHasBeenSet() const { return m_logContextHasBeenSet; }
    template<typename LogContextT = Aws::String>
    void SetLogContext(LogContextT&& value) { m_logContextHasBeenSet = true; m_logContext = std::forward<LogContextT>(value); }
    template<typename LogContextT = Aws::String>
    GetManagedEndpointSessionCredentialsRequest& WithLogContext(LogContextT&& value) { SetLogContext(std::forward<LogContextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client idempotency token of the job run request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    GetManagedEndpointSessionCredentialsRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet = false;

    Aws::String m_virtualClusterIdentifier;
    bool m_virtualClusterIdentifierHasBeenSet = false;

    Aws::String m_executionRoleArn;
    bool m_executionRoleArnHasBeenSet = false;

    Aws::String m_credentialType;
    bool m_credentialTypeHasBeenSet = false;

    int m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;

    Aws::String m_logContext;
    bool m_logContextHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
