/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/IdentityProviderType.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/awstransfer/model/State.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>Returns properties of a file transfer protocol-enabled server that was
   * specified.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedServer">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API ListedServer
  {
  public:
    ListedServer();
    ListedServer(Aws::Utils::Json::JsonView jsonValue);
    ListedServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a server to be
     * listed.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a server to be
     * listed.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a server to be
     * listed.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a server to be
     * listed.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a server to be
     * listed.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a server to be
     * listed.</p>
     */
    inline ListedServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a server to be
     * listed.</p>
     */
    inline ListedServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for a server to be
     * listed.</p>
     */
    inline ListedServer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the authentication method used to validate a user for a server that
     * was specified. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>Specifies the authentication method used to validate a user for a server that
     * was specified. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>Specifies the authentication method used to validate a user for a server that
     * was specified. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>Specifies the authentication method used to validate a user for a server that
     * was specified. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>Specifies the authentication method used to validate a user for a server that
     * was specified. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline ListedServer& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>Specifies the authentication method used to validate a user for a server that
     * was specified. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline ListedServer& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of VPC endpoint that your server is connected to. If your
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>Specifies the type of VPC endpoint that your server is connected to. If your
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>Specifies the type of VPC endpoint that your server is connected to. If your
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>Specifies the type of VPC endpoint that your server is connected to. If your
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>Specifies the type of VPC endpoint that your server is connected to. If your
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline ListedServer& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>Specifies the type of VPC endpoint that your server is connected to. If your
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline ListedServer& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>Specifies the AWS Identity and Access Management (IAM) role that allows a
     * server to turn on Amazon CloudWatch logging.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>Specifies the AWS Identity and Access Management (IAM) role that allows a
     * server to turn on Amazon CloudWatch logging.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>Specifies the AWS Identity and Access Management (IAM) role that allows a
     * server to turn on Amazon CloudWatch logging.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>Specifies the AWS Identity and Access Management (IAM) role that allows a
     * server to turn on Amazon CloudWatch logging.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>Specifies the AWS Identity and Access Management (IAM) role that allows a
     * server to turn on Amazon CloudWatch logging.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>Specifies the AWS Identity and Access Management (IAM) role that allows a
     * server to turn on Amazon CloudWatch logging.</p>
     */
    inline ListedServer& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>Specifies the AWS Identity and Access Management (IAM) role that allows a
     * server to turn on Amazon CloudWatch logging.</p>
     */
    inline ListedServer& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>Specifies the AWS Identity and Access Management (IAM) role that allows a
     * server to turn on Amazon CloudWatch logging.</p>
     */
    inline ListedServer& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>Specifies the unique system assigned identifier for the servers that were
     * listed.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>Specifies the unique system assigned identifier for the servers that were
     * listed.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>Specifies the unique system assigned identifier for the servers that were
     * listed.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>Specifies the unique system assigned identifier for the servers that were
     * listed.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>Specifies the unique system assigned identifier for the servers that were
     * listed.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>Specifies the unique system assigned identifier for the servers that were
     * listed.</p>
     */
    inline ListedServer& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>Specifies the unique system assigned identifier for the servers that were
     * listed.</p>
     */
    inline ListedServer& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique system assigned identifier for the servers that were
     * listed.</p>
     */
    inline ListedServer& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline ListedServer& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>Specifies the condition of a server for the server that was described. A
     * value of <code>ONLINE</code> indicates that the server can accept jobs and
     * transfer files. A <code>State</code> value of <code>OFFLINE</code> means that
     * the server cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline ListedServer& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Specifies the number of users that are assigned to a server you specified
     * with the <code>ServerId</code>.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }

    /**
     * <p>Specifies the number of users that are assigned to a server you specified
     * with the <code>ServerId</code>.</p>
     */
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }

    /**
     * <p>Specifies the number of users that are assigned to a server you specified
     * with the <code>ServerId</code>.</p>
     */
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }

    /**
     * <p>Specifies the number of users that are assigned to a server you specified
     * with the <code>ServerId</code>.</p>
     */
    inline ListedServer& WithUserCount(int value) { SetUserCount(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    IdentityProviderType m_identityProviderType;
    bool m_identityProviderTypeHasBeenSet;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    State m_state;
    bool m_stateHasBeenSet;

    int m_userCount;
    bool m_userCountHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
