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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/Connection">AWS API
   * Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API Connection
  {
  public:
    Connection();
    Connection(Aws::Utils::Json::JsonView jsonValue);
    Connection& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline Connection& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline Connection& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline Connection& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline Connection& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline Connection& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline Connection& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


    /**
     * <p>The connection status.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The connection status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The connection status.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The connection status.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The connection status.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The connection status.</p>
     */
    inline Connection& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The connection status.</p>
     */
    inline Connection& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The connection status.</p>
     */
    inline Connection& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }

    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }

    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }

    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::move(value); }

    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }

    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline Connection& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline Connection& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The error message when the connection last failed.</p>
     */
    inline Connection& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}


    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline const Aws::String& GetEndpointIdentifier() const{ return m_endpointIdentifier; }

    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline bool EndpointIdentifierHasBeenSet() const { return m_endpointIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(const Aws::String& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = value; }

    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(Aws::String&& value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier = std::move(value); }

    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline void SetEndpointIdentifier(const char* value) { m_endpointIdentifierHasBeenSet = true; m_endpointIdentifier.assign(value); }

    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline Connection& WithEndpointIdentifier(const Aws::String& value) { SetEndpointIdentifier(value); return *this;}

    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline Connection& WithEndpointIdentifier(Aws::String&& value) { SetEndpointIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the endpoint. Identifiers must begin with a letter; must
     * contain only ASCII letters, digits, and hyphens; and must not end with a hyphen
     * or contain two consecutive hyphens.</p>
     */
    inline Connection& WithEndpointIdentifier(const char* value) { SetEndpointIdentifier(value); return *this;}


    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline const Aws::String& GetReplicationInstanceIdentifier() const{ return m_replicationInstanceIdentifier; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline bool ReplicationInstanceIdentifierHasBeenSet() const { return m_replicationInstanceIdentifierHasBeenSet; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetReplicationInstanceIdentifier(const Aws::String& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = value; }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetReplicationInstanceIdentifier(Aws::String&& value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier = std::move(value); }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline void SetReplicationInstanceIdentifier(const char* value) { m_replicationInstanceIdentifierHasBeenSet = true; m_replicationInstanceIdentifier.assign(value); }

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline Connection& WithReplicationInstanceIdentifier(const Aws::String& value) { SetReplicationInstanceIdentifier(value); return *this;}

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline Connection& WithReplicationInstanceIdentifier(Aws::String&& value) { SetReplicationInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The replication instance identifier. This parameter is stored as a lowercase
     * string.</p>
     */
    inline Connection& WithReplicationInstanceIdentifier(const char* value) { SetReplicationInstanceIdentifier(value); return *this;}

  private:

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet;

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet;

    Aws::String m_endpointIdentifier;
    bool m_endpointIdentifierHasBeenSet;

    Aws::String m_replicationInstanceIdentifier;
    bool m_replicationInstanceIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
