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
    inline RefreshSchemasStatus& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline RefreshSchemasStatus& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline RefreshSchemasStatus& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}


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
    inline RefreshSchemasStatus& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline RefreshSchemasStatus& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline RefreshSchemasStatus& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}


    /**
     * <p>The status of the schema.</p>
     */
    inline const RefreshSchemasStatusTypeValue& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the schema.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetStatus(const RefreshSchemasStatusTypeValue& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the schema.</p>
     */
    inline void SetStatus(RefreshSchemasStatusTypeValue&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the schema.</p>
     */
    inline RefreshSchemasStatus& WithStatus(const RefreshSchemasStatusTypeValue& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the schema.</p>
     */
    inline RefreshSchemasStatus& WithStatus(RefreshSchemasStatusTypeValue&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date the schema was last refreshed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshDate() const{ return m_lastRefreshDate; }

    /**
     * <p>The date the schema was last refreshed.</p>
     */
    inline bool LastRefreshDateHasBeenSet() const { return m_lastRefreshDateHasBeenSet; }

    /**
     * <p>The date the schema was last refreshed.</p>
     */
    inline void SetLastRefreshDate(const Aws::Utils::DateTime& value) { m_lastRefreshDateHasBeenSet = true; m_lastRefreshDate = value; }

    /**
     * <p>The date the schema was last refreshed.</p>
     */
    inline void SetLastRefreshDate(Aws::Utils::DateTime&& value) { m_lastRefreshDateHasBeenSet = true; m_lastRefreshDate = std::move(value); }

    /**
     * <p>The date the schema was last refreshed.</p>
     */
    inline RefreshSchemasStatus& WithLastRefreshDate(const Aws::Utils::DateTime& value) { SetLastRefreshDate(value); return *this;}

    /**
     * <p>The date the schema was last refreshed.</p>
     */
    inline RefreshSchemasStatus& WithLastRefreshDate(Aws::Utils::DateTime&& value) { SetLastRefreshDate(std::move(value)); return *this;}


    /**
     * <p>The last failure message for the schema.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const{ return m_lastFailureMessage; }

    /**
     * <p>The last failure message for the schema.</p>
     */
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }

    /**
     * <p>The last failure message for the schema.</p>
     */
    inline void SetLastFailureMessage(const Aws::String& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = value; }

    /**
     * <p>The last failure message for the schema.</p>
     */
    inline void SetLastFailureMessage(Aws::String&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::move(value); }

    /**
     * <p>The last failure message for the schema.</p>
     */
    inline void SetLastFailureMessage(const char* value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage.assign(value); }

    /**
     * <p>The last failure message for the schema.</p>
     */
    inline RefreshSchemasStatus& WithLastFailureMessage(const Aws::String& value) { SetLastFailureMessage(value); return *this;}

    /**
     * <p>The last failure message for the schema.</p>
     */
    inline RefreshSchemasStatus& WithLastFailureMessage(Aws::String&& value) { SetLastFailureMessage(std::move(value)); return *this;}

    /**
     * <p>The last failure message for the schema.</p>
     */
    inline RefreshSchemasStatus& WithLastFailureMessage(const char* value) { SetLastFailureMessage(value); return *this;}

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
