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
   * <p>Returns properties of the server that was specified.</p><p><h3>See Also:</h3>
   * <a
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
     * <p>The unique Amazon Resource Name (ARN) for the server to be listed.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the server to be listed.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the server to be listed.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the server to be listed.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the server to be listed.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) for the server to be listed.</p>
     */
    inline ListedServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the server to be listed.</p>
     */
    inline ListedServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) for the server to be listed.</p>
     */
    inline ListedServer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The authentication method used to validate a user for the server that was
     * specified. listed. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>The authentication method used to validate a user for the server that was
     * specified. listed. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>The authentication method used to validate a user for the server that was
     * specified. listed. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>The authentication method used to validate a user for the server that was
     * specified. listed. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>The authentication method used to validate a user for the server that was
     * specified. listed. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline ListedServer& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>The authentication method used to validate a user for the server that was
     * specified. listed. This can include Secure Shell (SSH), user name and password
     * combinations, or your own custom authentication method. Valid values include
     * <code>SERVICE_MANAGED</code> or <code>API_GATEWAY</code>.</p>
     */
    inline ListedServer& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>The type of VPC endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of VPC endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of VPC endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of VPC endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of VPC endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline ListedServer& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of VPC endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline ListedServer& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>The AWS Identity and Access Management entity that allows the server to turn
     * on Amazon CloudWatch logging.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>The AWS Identity and Access Management entity that allows the server to turn
     * on Amazon CloudWatch logging.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>The AWS Identity and Access Management entity that allows the server to turn
     * on Amazon CloudWatch logging.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>The AWS Identity and Access Management entity that allows the server to turn
     * on Amazon CloudWatch logging.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>The AWS Identity and Access Management entity that allows the server to turn
     * on Amazon CloudWatch logging.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>The AWS Identity and Access Management entity that allows the server to turn
     * on Amazon CloudWatch logging.</p>
     */
    inline ListedServer& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>The AWS Identity and Access Management entity that allows the server to turn
     * on Amazon CloudWatch logging.</p>
     */
    inline ListedServer& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>The AWS Identity and Access Management entity that allows the server to turn
     * on Amazon CloudWatch logging.</p>
     */
    inline ListedServer& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>This value is the unique system assigned identifier for the SFTP servers that
     * were listed.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>This value is the unique system assigned identifier for the SFTP servers that
     * were listed.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>This value is the unique system assigned identifier for the SFTP servers that
     * were listed.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>This value is the unique system assigned identifier for the SFTP servers that
     * were listed.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>This value is the unique system assigned identifier for the SFTP servers that
     * were listed.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>This value is the unique system assigned identifier for the SFTP servers that
     * were listed.</p>
     */
    inline ListedServer& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>This value is the unique system assigned identifier for the SFTP servers that
     * were listed.</p>
     */
    inline ListedServer& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>This value is the unique system assigned identifier for the SFTP servers that
     * were listed.</p>
     */
    inline ListedServer& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>This property describes the condition of the SFTP server for the server that
     * was described. A value of <code>ONLINE</code>&gt; indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicated that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>This property describes the condition of the SFTP server for the server that
     * was described. A value of <code>ONLINE</code>&gt; indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicated that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>This property describes the condition of the SFTP server for the server that
     * was described. A value of <code>ONLINE</code>&gt; indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicated that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>This property describes the condition of the SFTP server for the server that
     * was described. A value of <code>ONLINE</code>&gt; indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicated that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>This property describes the condition of the SFTP server for the server that
     * was described. A value of <code>ONLINE</code>&gt; indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicated that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline ListedServer& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>This property describes the condition of the SFTP server for the server that
     * was described. A value of <code>ONLINE</code>&gt; indicates that the server can
     * accept jobs and transfer files. A <code>State</code> value of
     * <code>OFFLINE</code> means that the server cannot perform file transfer
     * operations.</p> <p>The states of <code>STARTING</code> and <code>STOPPING</code>
     * indicated that the server is in an intermediate state, either not fully able to
     * respond, or not fully offline. The values of <code>START_FAILED</code> or
     * <code>STOP_FAILED</code> can indicate an error condition.</p>
     */
    inline ListedServer& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>This property is a numeric value that indicates the number of users that are
     * assigned to the SFTP server you specified with the <code>ServerId</code>.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }

    /**
     * <p>This property is a numeric value that indicates the number of users that are
     * assigned to the SFTP server you specified with the <code>ServerId</code>.</p>
     */
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }

    /**
     * <p>This property is a numeric value that indicates the number of users that are
     * assigned to the SFTP server you specified with the <code>ServerId</code>.</p>
     */
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }

    /**
     * <p>This property is a numeric value that indicates the number of users that are
     * assigned to the SFTP server you specified with the <code>ServerId</code>.</p>
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
