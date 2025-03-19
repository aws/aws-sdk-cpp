/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Status of the connection between an endpoint and a replication instance,
   * including Amazon Resource Names (ARNs) and the last error message
   * issued.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Connection">AWS API
   * Reference</a></p>
   */
  class Connection
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API Connection() = default;
    AWS_DATABASEMIGRATIONSERVICE_API Connection(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const { return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    template<typename ReplicationInstanceArnT = Aws::String>
    void SetReplicationInstanceArn(ReplicationInstanceArnT&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::forward<ReplicationInstanceArnT>(value); }
    template<typename ReplicationInstanceArnT = Aws::String>
    Connection& WithReplicationInstanceArn(ReplicationInstanceArnT&& value) { SetReplicationInstanceArn(std::forward<ReplicationInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN string that uniquely identifies the endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    Connection& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection status. This parameter can return one of the following
     * values:</p> <ul> <li> <p> <code>"successful"</code> </p> </li> <li> <p>
     * <code>"testing"</code> </p> </li> <li> <p> <code>"failed"</code> </p> </li> <li>
     * <p> <code>"deleting"</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    Connection& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const { return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    template<typename LastFailureMessageT = Aws::String>
    void SetLastFailureMessage(LastFailureMessageT&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::forward<LastFailureMessageT>(value); }
    template<typename LastFailureMessageT = Aws::String>
    Connection& WithLastFailureMessage(LastFailureMessageT&& value) { SetLastFailureMessage(std::forward<LastFailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter and must
     * contain only ASCII letters, digits, and hyphens. They can't end with a hyphen or
     * contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetEndpointIdentifier() const { return m_endpointIdentifier; }
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }
    template<typename EndpointIdentifierT = Aws::String>
    void SetEndpointIdentifier(EndpointIdentifierT&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::forward<EndpointIdentifierT>(value); }
    template<typename EndpointIdentifierT = Aws::String>
    Connection& WithEndpointIdentifier(EndpointIdentifierT&& value) { SetEndpointIdentifier(std::forward<EndpointIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const { return m_replicationInstanceIdentifier; }
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }
    template<typename ReplicationInstanceIdentifierT = Aws::String>
    void SetReplicationInstanceIdentifier(ReplicationInstanceIdentifierT&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::forward<ReplicationInstanceIdentifierT>(value); }
    template<typename ReplicationInstanceIdentifierT = Aws::String>
    Connection& WithReplicationInstanceIdentifier(ReplicationInstanceIdentifierT&& value) { SetReplicationInstanceIdentifier(std::forward<ReplicationInstanceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet = false;

    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
