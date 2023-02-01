/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/Domain.h>
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
  class ListedServer
  {
  public:
    AWS_TRANSFER_API ListedServer();
    AWS_TRANSFER_API ListedServer(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ListedServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline const Domain& GetDomain() const{ return m_domain; }

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline void SetDomain(const Domain& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline void SetDomain(Domain&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline ListedServer& WithDomain(const Domain& value) { SetDomain(value); return *this;}

    /**
     * <p>Specifies the domain of the storage system that is used for file
     * transfers.</p>
     */
    inline ListedServer& WithDomain(Domain&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>The mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Directory Service for Microsoft Active Directory or Microsoft Active
     * Directory in your on-premises environment or in Amazon Web Services using AD
     * Connector. This option also requires you to provide a Directory ID by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an Amazon
     * API Gateway endpoint URL to call for authentication by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use an Lambda function as your
     * identity provider. If you choose this value, you must specify the ARN for the
     * Lambda function in the <code>Function</code> parameter or the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>The mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Directory Service for Microsoft Active Directory or Microsoft Active
     * Directory in your on-premises environment or in Amazon Web Services using AD
     * Connector. This option also requires you to provide a Directory ID by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an Amazon
     * API Gateway endpoint URL to call for authentication by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use an Lambda function as your
     * identity provider. If you choose this value, you must specify the ARN for the
     * Lambda function in the <code>Function</code> parameter or the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>The mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Directory Service for Microsoft Active Directory or Microsoft Active
     * Directory in your on-premises environment or in Amazon Web Services using AD
     * Connector. This option also requires you to provide a Directory ID by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an Amazon
     * API Gateway endpoint URL to call for authentication by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use an Lambda function as your
     * identity provider. If you choose this value, you must specify the ARN for the
     * Lambda function in the <code>Function</code> parameter or the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>The mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Directory Service for Microsoft Active Directory or Microsoft Active
     * Directory in your on-premises environment or in Amazon Web Services using AD
     * Connector. This option also requires you to provide a Directory ID by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an Amazon
     * API Gateway endpoint URL to call for authentication by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use an Lambda function as your
     * identity provider. If you choose this value, you must specify the ARN for the
     * Lambda function in the <code>Function</code> parameter or the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>The mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Directory Service for Microsoft Active Directory or Microsoft Active
     * Directory in your on-premises environment or in Amazon Web Services using AD
     * Connector. This option also requires you to provide a Directory ID by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an Amazon
     * API Gateway endpoint URL to call for authentication by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use an Lambda function as your
     * identity provider. If you choose this value, you must specify the ARN for the
     * Lambda function in the <code>Function</code> parameter or the
     * <code>IdentityProviderDetails</code> data type.</p>
     */
    inline ListedServer& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>The mode of authentication for a server. The default value is
     * <code>SERVICE_MANAGED</code>, which allows you to store and access user
     * credentials within the Transfer Family service.</p> <p>Use
     * <code>AWS_DIRECTORY_SERVICE</code> to provide access to Active Directory groups
     * in Directory Service for Microsoft Active Directory or Microsoft Active
     * Directory in your on-premises environment or in Amazon Web Services using AD
     * Connector. This option also requires you to provide a Directory ID by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>API_GATEWAY</code> value to integrate with an identity provider of your
     * choosing. The <code>API_GATEWAY</code> setting requires you to provide an Amazon
     * API Gateway endpoint URL to call for authentication by using the
     * <code>IdentityProviderDetails</code> parameter.</p> <p>Use the
     * <code>AWS_LAMBDA</code> value to directly use an Lambda function as your
     * identity provider. If you choose this value, you must specify the ARN for the
     * Lambda function in the <code>Function</code> parameter or the
     * <code>IdentityProviderDetails</code> data type.</p>
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
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline ListedServer& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline ListedServer& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFSevents. When set, you can view user activity in your CloudWatch
     * logs.</p>
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
     * <p>The condition of the server that was described. A value of
     * <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The condition of the server that was described. A value of
     * <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The condition of the server that was described. A value of
     * <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The condition of the server that was described. A value of
     * <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The condition of the server that was described. A value of
     * <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicate that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline ListedServer& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The condition of the server that was described. A value of
     * <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
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
    bool m_arnHasBeenSet = false;

    Domain m_domain;
    bool m_domainHasBeenSet = false;

    IdentityProviderType m_identityProviderType;
    bool m_identityProviderTypeHasBeenSet = false;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet = false;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    State m_state;
    bool m_stateHasBeenSet = false;

    int m_userCount;
    bool m_userCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
