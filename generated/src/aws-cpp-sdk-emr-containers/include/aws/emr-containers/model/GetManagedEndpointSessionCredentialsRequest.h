﻿/**
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
    AWS_EMRCONTAINERS_API GetManagedEndpointSessionCredentialsRequest();

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
    inline const Aws::String& GetEndpointIdentifier() const{ return m_endpointIdentifier; }
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }
    inline void SetEndpointIdentifier(const Aws::String& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }
    inline void SetEndpointIdentifier(Aws::String&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::move(value); }
    inline void SetEndpointIdentifier(const char* value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier.assign(value); }
    inline GetManagedEndpointSessionCredentialsRequest& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Virtual Cluster which the Managed Endpoint belongs to. </p>
     */
    inline const Aws::String& GetVirtualClusterIdentifier() const{ return m_virtualClusterIdentifier; }
    inline bool VirtualClusterIdentifierHasBeenSet() const { return m_virtualClusterIdentifierHasBeenSet; }
    inline void SetVirtualClusterIdentifier(const Aws::String& value) { m_virtualClusterIdentifierHasBeenSet = true; m_virtualClusterIdentifier = value; }
    inline void SetVirtualClusterIdentifier(Aws::String&& value) { m_virtualClusterIdentifierHasBeenSet = true; m_virtualClusterIdentifier = std::move(value); }
    inline void SetVirtualClusterIdentifier(const char* value) { m_virtualClusterIdentifierHasBeenSet = true; m_virtualClusterIdentifier.assign(value); }
    inline GetManagedEndpointSessionCredentialsRequest& WithVirtualClusterIdentifier(const Aws::String& value) { SetVirtualClusterIdentifier(value); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithVirtualClusterIdentifier(Aws::String&& value) { SetVirtualClusterIdentifier(std::move(value)); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithVirtualClusterIdentifier(const char* value) { SetVirtualClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Execution Role ARN that will be used by the job run. </p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArnHasBeenSet = true; m_executionRoleArn.assign(value); }
    inline GetManagedEndpointSessionCredentialsRequest& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Type of the token requested. Currently supported and default value of this
     * field is ���TOKEN.”</p>
     */
    inline const Aws::String& GetCredentialType() const{ return m_credentialType; }
    inline bool CredentialTypeHasBeenSet() const { return m_credentialTypeHasBeenSet; }
    inline void SetCredentialType(const Aws::String& value) { m_credentialTypeHasBeenSet = true; m_credentialType = value; }
    inline void SetCredentialType(Aws::String&& value) { m_credentialTypeHasBeenSet = true; m_credentialType = std::move(value); }
    inline void SetCredentialType(const char* value) { m_credentialTypeHasBeenSet = true; m_credentialType.assign(value); }
    inline GetManagedEndpointSessionCredentialsRequest& WithCredentialType(const Aws::String& value) { SetCredentialType(value); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithCredentialType(Aws::String&& value) { SetCredentialType(std::move(value)); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithCredentialType(const char* value) { SetCredentialType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Duration in seconds for which the session token is valid. The default
     * duration is 15 minutes and the maximum is 12 hours.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(int value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline GetManagedEndpointSessionCredentialsRequest& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String identifier used to separate sections of the execution logs uploaded to
     * S3.</p>
     */
    inline const Aws::String& GetLogContext() const{ return m_logContext; }
    inline bool LogContextHasBeenSet() const { return m_logContextHasBeenSet; }
    inline void SetLogContext(const Aws::String& value) { m_logContextHasBeenSet = true; m_logContext = value; }
    inline void SetLogContext(Aws::String&& value) { m_logContextHasBeenSet = true; m_logContext = std::move(value); }
    inline void SetLogContext(const char* value) { m_logContextHasBeenSet = true; m_logContext.assign(value); }
    inline GetManagedEndpointSessionCredentialsRequest& WithLogContext(const Aws::String& value) { SetLogContext(value); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithLogContext(Aws::String&& value) { SetLogContext(std::move(value)); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithLogContext(const char* value) { SetLogContext(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client idempotency token of the job run request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline GetManagedEndpointSessionCredentialsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline GetManagedEndpointSessionCredentialsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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

    int m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    Aws::String m_logContext;
    bool m_logContextHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
