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
#include <aws/awstransfer/model/EndpointDetails.h>
#include <aws/awstransfer/model/EndpointType.h>
#include <aws/awstransfer/model/IdentityProviderDetails.h>
#include <aws/awstransfer/model/IdentityProviderType.h>
#include <aws/awstransfer/model/State.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
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
   * <p>Describe the properties of the server that was specified. Information
   * returned includes: the server Amazon Resource Name (ARN), the authentication
   * configuration and type, the logging role, server Id and state, and assigned tags
   * or metadata. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedServer">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API DescribedServer
  {
  public:
    DescribedServer();
    DescribedServer(Aws::Utils::Json::JsonView jsonValue);
    DescribedServer& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the server to be
     * described.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the server to be
     * described.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the server to be
     * described.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the server to be
     * described.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the server to be
     * described.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the server to be
     * described.</p>
     */
    inline DescribedServer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the server to be
     * described.</p>
     */
    inline DescribedServer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the server to be
     * described.</p>
     */
    inline DescribedServer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your SFTP server.</p>
     */
    inline const EndpointDetails& GetEndpointDetails() const{ return m_endpointDetails; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your SFTP server.</p>
     */
    inline bool EndpointDetailsHasBeenSet() const { return m_endpointDetailsHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your SFTP server.</p>
     */
    inline void SetEndpointDetails(const EndpointDetails& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = value; }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your SFTP server.</p>
     */
    inline void SetEndpointDetails(EndpointDetails&& value) { m_endpointDetailsHasBeenSet = true; m_endpointDetails = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your SFTP server.</p>
     */
    inline DescribedServer& WithEndpointDetails(const EndpointDetails& value) { SetEndpointDetails(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) endpoint settings that you configured for
     * your SFTP server.</p>
     */
    inline DescribedServer& WithEndpointDetails(EndpointDetails&& value) { SetEndpointDetails(std::move(value)); return *this;}


    /**
     * <p>The type of endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline const EndpointType& GetEndpointType() const{ return m_endpointType; }

    /**
     * <p>The type of endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline bool EndpointTypeHasBeenSet() const { return m_endpointTypeHasBeenSet; }

    /**
     * <p>The type of endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline void SetEndpointType(const EndpointType& value) { m_endpointTypeHasBeenSet = true; m_endpointType = value; }

    /**
     * <p>The type of endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline void SetEndpointType(EndpointType&& value) { m_endpointTypeHasBeenSet = true; m_endpointType = std::move(value); }

    /**
     * <p>The type of endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline DescribedServer& WithEndpointType(const EndpointType& value) { SetEndpointType(value); return *this;}

    /**
     * <p>The type of endpoint that your SFTP server is connected to. If your SFTP
     * server is connected to a VPC endpoint, your server isn't accessible over the
     * public internet.</p>
     */
    inline DescribedServer& WithEndpointType(EndpointType&& value) { SetEndpointType(std::move(value)); return *this;}


    /**
     * <p>This value contains the Message-Digest Algorithm (MD5) hash of the server's
     * host key. This value is equivalent to the output of <code>ssh-keygen -l -E md5
     * -f my-new-server-key</code> command.</p>
     */
    inline const Aws::String& GetHostKeyFingerprint() const{ return m_hostKeyFingerprint; }

    /**
     * <p>This value contains the Message-Digest Algorithm (MD5) hash of the server's
     * host key. This value is equivalent to the output of <code>ssh-keygen -l -E md5
     * -f my-new-server-key</code> command.</p>
     */
    inline bool HostKeyFingerprintHasBeenSet() const { return m_hostKeyFingerprintHasBeenSet; }

    /**
     * <p>This value contains the Message-Digest Algorithm (MD5) hash of the server's
     * host key. This value is equivalent to the output of <code>ssh-keygen -l -E md5
     * -f my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(const Aws::String& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = value; }

    /**
     * <p>This value contains the Message-Digest Algorithm (MD5) hash of the server's
     * host key. This value is equivalent to the output of <code>ssh-keygen -l -E md5
     * -f my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(Aws::String&& value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint = std::move(value); }

    /**
     * <p>This value contains the Message-Digest Algorithm (MD5) hash of the server's
     * host key. This value is equivalent to the output of <code>ssh-keygen -l -E md5
     * -f my-new-server-key</code> command.</p>
     */
    inline void SetHostKeyFingerprint(const char* value) { m_hostKeyFingerprintHasBeenSet = true; m_hostKeyFingerprint.assign(value); }

    /**
     * <p>This value contains the Message-Digest Algorithm (MD5) hash of the server's
     * host key. This value is equivalent to the output of <code>ssh-keygen -l -E md5
     * -f my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(const Aws::String& value) { SetHostKeyFingerprint(value); return *this;}

    /**
     * <p>This value contains the Message-Digest Algorithm (MD5) hash of the server's
     * host key. This value is equivalent to the output of <code>ssh-keygen -l -E md5
     * -f my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(Aws::String&& value) { SetHostKeyFingerprint(std::move(value)); return *this;}

    /**
     * <p>This value contains the Message-Digest Algorithm (MD5) hash of the server's
     * host key. This value is equivalent to the output of <code>ssh-keygen -l -E md5
     * -f my-new-server-key</code> command.</p>
     */
    inline DescribedServer& WithHostKeyFingerprint(const char* value) { SetHostKeyFingerprint(value); return *this;}


    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of the server
     * is <code>SERVICE_MANAGED</code>&gt;.</p>
     */
    inline const IdentityProviderDetails& GetIdentityProviderDetails() const{ return m_identityProviderDetails; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of the server
     * is <code>SERVICE_MANAGED</code>&gt;.</p>
     */
    inline bool IdentityProviderDetailsHasBeenSet() const { return m_identityProviderDetailsHasBeenSet; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of the server
     * is <code>SERVICE_MANAGED</code>&gt;.</p>
     */
    inline void SetIdentityProviderDetails(const IdentityProviderDetails& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = value; }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of the server
     * is <code>SERVICE_MANAGED</code>&gt;.</p>
     */
    inline void SetIdentityProviderDetails(IdentityProviderDetails&& value) { m_identityProviderDetailsHasBeenSet = true; m_identityProviderDetails = std::move(value); }

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of the server
     * is <code>SERVICE_MANAGED</code>&gt;.</p>
     */
    inline DescribedServer& WithIdentityProviderDetails(const IdentityProviderDetails& value) { SetIdentityProviderDetails(value); return *this;}

    /**
     * <p>Specifies information to call a customer-supplied authentication API. This
     * field is not populated when the <code>IdentityProviderType</code> of the server
     * is <code>SERVICE_MANAGED</code>&gt;.</p>
     */
    inline DescribedServer& WithIdentityProviderDetails(IdentityProviderDetails&& value) { SetIdentityProviderDetails(std::move(value)); return *this;}


    /**
     * <p>This property defines the mode of authentication method enabled for this
     * service. A value of <code>SERVICE_MANAGED</code>, means that you are using this
     * Server to store and access SFTP user credentials within the service. A value of
     * <code>API_GATEWAY</code> indicates that you have integrated an API Gateway
     * endpoint that will be invoked for authenticating your user into the service.</p>
     */
    inline const IdentityProviderType& GetIdentityProviderType() const{ return m_identityProviderType; }

    /**
     * <p>This property defines the mode of authentication method enabled for this
     * service. A value of <code>SERVICE_MANAGED</code>, means that you are using this
     * Server to store and access SFTP user credentials within the service. A value of
     * <code>API_GATEWAY</code> indicates that you have integrated an API Gateway
     * endpoint that will be invoked for authenticating your user into the service.</p>
     */
    inline bool IdentityProviderTypeHasBeenSet() const { return m_identityProviderTypeHasBeenSet; }

    /**
     * <p>This property defines the mode of authentication method enabled for this
     * service. A value of <code>SERVICE_MANAGED</code>, means that you are using this
     * Server to store and access SFTP user credentials within the service. A value of
     * <code>API_GATEWAY</code> indicates that you have integrated an API Gateway
     * endpoint that will be invoked for authenticating your user into the service.</p>
     */
    inline void SetIdentityProviderType(const IdentityProviderType& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = value; }

    /**
     * <p>This property defines the mode of authentication method enabled for this
     * service. A value of <code>SERVICE_MANAGED</code>, means that you are using this
     * Server to store and access SFTP user credentials within the service. A value of
     * <code>API_GATEWAY</code> indicates that you have integrated an API Gateway
     * endpoint that will be invoked for authenticating your user into the service.</p>
     */
    inline void SetIdentityProviderType(IdentityProviderType&& value) { m_identityProviderTypeHasBeenSet = true; m_identityProviderType = std::move(value); }

    /**
     * <p>This property defines the mode of authentication method enabled for this
     * service. A value of <code>SERVICE_MANAGED</code>, means that you are using this
     * Server to store and access SFTP user credentials within the service. A value of
     * <code>API_GATEWAY</code> indicates that you have integrated an API Gateway
     * endpoint that will be invoked for authenticating your user into the service.</p>
     */
    inline DescribedServer& WithIdentityProviderType(const IdentityProviderType& value) { SetIdentityProviderType(value); return *this;}

    /**
     * <p>This property defines the mode of authentication method enabled for this
     * service. A value of <code>SERVICE_MANAGED</code>, means that you are using this
     * Server to store and access SFTP user credentials within the service. A value of
     * <code>API_GATEWAY</code> indicates that you have integrated an API Gateway
     * endpoint that will be invoked for authenticating your user into the service.</p>
     */
    inline DescribedServer& WithIdentityProviderType(IdentityProviderType&& value) { SetIdentityProviderType(std::move(value)); return *this;}


    /**
     * <p>This property is an AWS Identity and Access Management (IAM) entity that
     * allows the server to turn on Amazon CloudWatch logging for Amazon S3 events.
     * When set, user activity can be view in your CloudWatch logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>This property is an AWS Identity and Access Management (IAM) entity that
     * allows the server to turn on Amazon CloudWatch logging for Amazon S3 events.
     * When set, user activity can be view in your CloudWatch logs.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>This property is an AWS Identity and Access Management (IAM) entity that
     * allows the server to turn on Amazon CloudWatch logging for Amazon S3 events.
     * When set, user activity can be view in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>This property is an AWS Identity and Access Management (IAM) entity that
     * allows the server to turn on Amazon CloudWatch logging for Amazon S3 events.
     * When set, user activity can be view in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>This property is an AWS Identity and Access Management (IAM) entity that
     * allows the server to turn on Amazon CloudWatch logging for Amazon S3 events.
     * When set, user activity can be view in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>This property is an AWS Identity and Access Management (IAM) entity that
     * allows the server to turn on Amazon CloudWatch logging for Amazon S3 events.
     * When set, user activity can be view in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>This property is an AWS Identity and Access Management (IAM) entity that
     * allows the server to turn on Amazon CloudWatch logging for Amazon S3 events.
     * When set, user activity can be view in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>This property is an AWS Identity and Access Management (IAM) entity that
     * allows the server to turn on Amazon CloudWatch logging for Amazon S3 events.
     * When set, user activity can be view in your CloudWatch logs.</p>
     */
    inline DescribedServer& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>This property is a unique system assigned identifier for the SFTP server that
     * you instantiate.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>This property is a unique system assigned identifier for the SFTP server that
     * you instantiate.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>This property is a unique system assigned identifier for the SFTP server that
     * you instantiate.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>This property is a unique system assigned identifier for the SFTP server that
     * you instantiate.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>This property is a unique system assigned identifier for the SFTP server that
     * you instantiate.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>This property is a unique system assigned identifier for the SFTP server that
     * you instantiate.</p>
     */
    inline DescribedServer& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>This property is a unique system assigned identifier for the SFTP server that
     * you instantiate.</p>
     */
    inline DescribedServer& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>This property is a unique system assigned identifier for the SFTP server that
     * you instantiate.</p>
     */
    inline DescribedServer& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The condition of the SFTP server for the server that was described. A value
     * of <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicated that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The condition of the SFTP server for the server that was described. A value
     * of <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicated that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The condition of the SFTP server for the server that was described. A value
     * of <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicated that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The condition of the SFTP server for the server that was described. A value
     * of <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicated that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The condition of the SFTP server for the server that was described. A value
     * of <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicated that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline DescribedServer& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The condition of the SFTP server for the server that was described. A value
     * of <code>ONLINE</code> indicates that the server can accept jobs and transfer
     * files. A <code>State</code> value of <code>OFFLINE</code> means that the server
     * cannot perform file transfer operations.</p> <p>The states of
     * <code>STARTING</code> and <code>STOPPING</code> indicated that the server is in
     * an intermediate state, either not fully able to respond, or not fully offline.
     * The values of <code>START_FAILED</code> or <code>STOP_FAILED</code> can indicate
     * an error condition.</p>
     */
    inline DescribedServer& WithState(State&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>This property contains the key-value pairs that you can use to search for and
     * group servers that were assigned to the server that was described.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>This property contains the key-value pairs that you can use to search for and
     * group servers that were assigned to the server that was described.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>This property contains the key-value pairs that you can use to search for and
     * group servers that were assigned to the server that was described.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>This property contains the key-value pairs that you can use to search for and
     * group servers that were assigned to the server that was described.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>This property contains the key-value pairs that you can use to search for and
     * group servers that were assigned to the server that was described.</p>
     */
    inline DescribedServer& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>This property contains the key-value pairs that you can use to search for and
     * group servers that were assigned to the server that was described.</p>
     */
    inline DescribedServer& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>This property contains the key-value pairs that you can use to search for and
     * group servers that were assigned to the server that was described.</p>
     */
    inline DescribedServer& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>This property contains the key-value pairs that you can use to search for and
     * group servers that were assigned to the server that was described.</p>
     */
    inline DescribedServer& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of users that are assigned to the SFTP server you specified with
     * the <code>ServerId</code>.</p>
     */
    inline int GetUserCount() const{ return m_userCount; }

    /**
     * <p>The number of users that are assigned to the SFTP server you specified with
     * the <code>ServerId</code>.</p>
     */
    inline bool UserCountHasBeenSet() const { return m_userCountHasBeenSet; }

    /**
     * <p>The number of users that are assigned to the SFTP server you specified with
     * the <code>ServerId</code>.</p>
     */
    inline void SetUserCount(int value) { m_userCountHasBeenSet = true; m_userCount = value; }

    /**
     * <p>The number of users that are assigned to the SFTP server you specified with
     * the <code>ServerId</code>.</p>
     */
    inline DescribedServer& WithUserCount(int value) { SetUserCount(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    EndpointDetails m_endpointDetails;
    bool m_endpointDetailsHasBeenSet;

    EndpointType m_endpointType;
    bool m_endpointTypeHasBeenSet;

    Aws::String m_hostKeyFingerprint;
    bool m_hostKeyFingerprintHasBeenSet;

    IdentityProviderDetails m_identityProviderDetails;
    bool m_identityProviderDetailsHasBeenSet;

    IdentityProviderType m_identityProviderType;
    bool m_identityProviderTypeHasBeenSet;

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    State m_state;
    bool m_stateHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    int m_userCount;
    bool m_userCountHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
