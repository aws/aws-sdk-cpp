﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeconnections/CodeConnections_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeconnections/model/ProviderType.h>
#include <aws/codeconnections/model/ConnectionStatus.h>
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
namespace CodeConnections
{
namespace Model
{

  /**
   * <p>A resource that is used to connect third-party source providers with services
   * like CodePipeline.</p> <p>Note: A connection created through CloudFormation, the
   * CLI, or the SDK is in `PENDING` status by default. You can make its status
   * `AVAILABLE` by updating the connection in the console.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeconnections-2023-12-01/Connection">AWS
   * API Reference</a></p>
   */
  class Connection
  {
  public:
    AWS_CODECONNECTIONS_API Connection();
    AWS_CODECONNECTIONS_API Connection(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection. Connection names must be unique in an Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetConnectionName() const{ return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    inline void SetConnectionName(const Aws::String& value) { m_connectionNameHasBeenSet = true; m_connectionName = value; }
    inline void SetConnectionName(Aws::String&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::move(value); }
    inline void SetConnectionName(const char* value) { m_connectionNameHasBeenSet = true; m_connectionName.assign(value); }
    inline Connection& WithConnectionName(const Aws::String& value) { SetConnectionName(value); return *this;}
    inline Connection& WithConnectionName(Aws::String&& value) { SetConnectionName(std::move(value)); return *this;}
    inline Connection& WithConnectionName(const char* value) { SetConnectionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between Amazon Web
     * Services.</p>  <p>The ARN is never reused if the connection is
     * deleted.</p> 
     */
    inline const Aws::String& GetConnectionArn() const{ return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    inline void SetConnectionArn(const Aws::String& value) { m_connectionArnHasBeenSet = true; m_connectionArn = value; }
    inline void SetConnectionArn(Aws::String&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::move(value); }
    inline void SetConnectionArn(const char* value) { m_connectionArnHasBeenSet = true; m_connectionArn.assign(value); }
    inline Connection& WithConnectionArn(const Aws::String& value) { SetConnectionArn(value); return *this;}
    inline Connection& WithConnectionArn(Aws::String&& value) { SetConnectionArn(std::move(value)); return *this;}
    inline Connection& WithConnectionArn(const char* value) { SetConnectionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured.</p>
     */
    inline const ProviderType& GetProviderType() const{ return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(const ProviderType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline void SetProviderType(ProviderType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }
    inline Connection& WithProviderType(const ProviderType& value) { SetProviderType(value); return *this;}
    inline Connection& WithProviderType(ProviderType&& value) { SetProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the external provider where your third-party code
     * repository is configured. For Bitbucket, this is the account ID of the owner of
     * the Bitbucket repository.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline Connection& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline Connection& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline Connection& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the connection. </p>
     */
    inline const ConnectionStatus& GetConnectionStatus() const{ return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    inline void SetConnectionStatus(const ConnectionStatus& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline void SetConnectionStatus(ConnectionStatus&& value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = std::move(value); }
    inline Connection& WithConnectionStatus(const ConnectionStatus& value) { SetConnectionStatus(value); return *this;}
    inline Connection& WithConnectionStatus(ConnectionStatus&& value) { SetConnectionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the host associated with the
     * connection.</p>
     */
    inline const Aws::String& GetHostArn() const{ return m_hostArn; }
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }
    inline void SetHostArn(const Aws::String& value) { m_hostArnHasBeenSet = true; m_hostArn = value; }
    inline void SetHostArn(Aws::String&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::move(value); }
    inline void SetHostArn(const char* value) { m_hostArnHasBeenSet = true; m_hostArn.assign(value); }
    inline Connection& WithHostArn(const Aws::String& value) { SetHostArn(value); return *this;}
    inline Connection& WithHostArn(Aws::String&& value) { SetHostArn(std::move(value)); return *this;}
    inline Connection& WithHostArn(const char* value) { SetHostArn(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    ProviderType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    ConnectionStatus m_connectionStatus;
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
