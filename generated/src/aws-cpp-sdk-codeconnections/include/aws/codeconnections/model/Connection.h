/**
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
    AWS_CODECONNECTIONS_API Connection() = default;
    AWS_CODECONNECTIONS_API Connection(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECONNECTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection. Connection names must be unique in an Amazon Web
     * Services account.</p>
     */
    inline const Aws::String& GetConnectionName() const { return m_connectionName; }
    inline bool ConnectionNameHasBeenSet() const { return m_connectionNameHasBeenSet; }
    template<typename ConnectionNameT = Aws::String>
    void SetConnectionName(ConnectionNameT&& value) { m_connectionNameHasBeenSet = true; m_connectionName = std::forward<ConnectionNameT>(value); }
    template<typename ConnectionNameT = Aws::String>
    Connection& WithConnectionName(ConnectionNameT&& value) { SetConnectionName(std::forward<ConnectionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection. The ARN is used as the
     * connection reference when the connection is shared between Amazon Web Services
     * services.</p>  <p>The ARN is never reused if the connection is
     * deleted.</p> 
     */
    inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
    inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
    template<typename ConnectionArnT = Aws::String>
    void SetConnectionArn(ConnectionArnT&& value) { m_connectionArnHasBeenSet = true; m_connectionArn = std::forward<ConnectionArnT>(value); }
    template<typename ConnectionArnT = Aws::String>
    Connection& WithConnectionArn(ConnectionArnT&& value) { SetConnectionArn(std::forward<ConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the external provider where your third-party code repository is
     * configured.</p>
     */
    inline ProviderType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(ProviderType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline Connection& WithProviderType(ProviderType value) { SetProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the external provider where your third-party code
     * repository is configured. For Bitbucket, this is the account ID of the owner of
     * the Bitbucket repository.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    Connection& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the connection. </p>
     */
    inline ConnectionStatus GetConnectionStatus() const { return m_connectionStatus; }
    inline bool ConnectionStatusHasBeenSet() const { return m_connectionStatusHasBeenSet; }
    inline void SetConnectionStatus(ConnectionStatus value) { m_connectionStatusHasBeenSet = true; m_connectionStatus = value; }
    inline Connection& WithConnectionStatus(ConnectionStatus value) { SetConnectionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the host associated with the
     * connection.</p>
     */
    inline const Aws::String& GetHostArn() const { return m_hostArn; }
    inline bool HostArnHasBeenSet() const { return m_hostArnHasBeenSet; }
    template<typename HostArnT = Aws::String>
    void SetHostArn(HostArnT&& value) { m_hostArnHasBeenSet = true; m_hostArn = std::forward<HostArnT>(value); }
    template<typename HostArnT = Aws::String>
    Connection& WithHostArn(HostArnT&& value) { SetHostArn(std::forward<HostArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionName;
    bool m_connectionNameHasBeenSet = false;

    Aws::String m_connectionArn;
    bool m_connectionArnHasBeenSet = false;

    ProviderType m_providerType{ProviderType::NOT_SET};
    bool m_providerTypeHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    ConnectionStatus m_connectionStatus{ConnectionStatus::NOT_SET};
    bool m_connectionStatusHasBeenSet = false;

    Aws::String m_hostArn;
    bool m_hostArnHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeConnections
} // namespace Aws
