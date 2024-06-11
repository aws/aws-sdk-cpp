/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/RefreshSchemasStatusTypeValue.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides information that describes status of a schema at an endpoint
   * specified by the <code>DescribeRefreshSchemaStatus</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/RefreshSchemasStatus">AWS
   * API Reference</a></p>
   */
  class RefreshSchemasStatus
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasStatus();
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }
    inline RefreshSchemasStatus& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}
    inline RefreshSchemasStatus& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}
    inline RefreshSchemasStatus& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }
    inline RefreshSchemasStatus& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}
    inline RefreshSchemasStatus& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}
    inline RefreshSchemasStatus& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the schema.</p>
     */
    inline const RefreshSchemasStatusTypeValue& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RefreshSchemasStatusTypeValue& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RefreshSchemasStatusTypeValue&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline RefreshSchemasStatus& WithStatus(const RefreshSchemasStatusTypeValue& value) { SetStatus(value); return *this;}
    inline RefreshSchemasStatus& WithStatus(RefreshSchemasStatusTypeValue&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the schema was last refreshed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshDate() const{ return m_lastRefreshDate; }
    inline bool LastRefreshDateHasBeenSet() const { return m_lastRefreshDateHasBeenSet; }
    inline void SetLastRefreshDate(const Aws::Utils::DateTime& value) { m_lastRefreshDateHasBeenSet = true; m_lastRefreshDate = value; }
    inline void SetLastRefreshDate(Aws::Utils::DateTime&& value) { m_lastRefreshDateHasBeenSet = true; m_lastRefreshDate = std::move(value); }
    inline RefreshSchemasStatus& WithLastRefreshDate(const Aws::Utils::DateTime& value) { SetLastRefreshDate(value); return *this;}
    inline RefreshSchemasStatus& WithLastRefreshDate(Aws::Utils::DateTime&& value) { SetLastRefreshDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last failure message for the schema.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::move(value); }
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }
    inline RefreshSchemasStatus& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}
    inline RefreshSchemasStatus& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}
    inline RefreshSchemasStatus& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    RefreshSchemasStatusTypeValue m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshDate;
    bool m_lastRefreshDateHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
