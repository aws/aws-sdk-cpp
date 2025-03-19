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
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasStatus() = default;
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API RefreshSchemasStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) string that uniquely identifies the
     * endpoint.</p>
     */
    inline const Aws::String& GetEndpointArn() const { return m_endpointArn; }
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }
    template<typename EndpointArnT = Aws::String>
    void SetEndpointArn(EndpointArnT&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::forward<EndpointArnT>(value); }
    template<typename EndpointArnT = Aws::String>
    RefreshSchemasStatus& WithEndpointArn(EndpointArnT&& value) { SetEndpointArn(std::forward<EndpointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication instance.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const { return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    template<typename ReplicationInstanceArnT = Aws::String>
    void SetReplicationInstanceArn(ReplicationInstanceArnT&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::forward<ReplicationInstanceArnT>(value); }
    template<typename ReplicationInstanceArnT = Aws::String>
    RefreshSchemasStatus& WithReplicationInstanceArn(ReplicationInstanceArnT&& value) { SetReplicationInstanceArn(std::forward<ReplicationInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the schema.</p>
     */
    inline RefreshSchemasStatusTypeValue GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RefreshSchemasStatusTypeValue value) { m_statusHasBeenSet = true; m_status = value; }
    inline RefreshSchemasStatus& WithStatus(RefreshSchemasStatusTypeValue value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the schema was last refreshed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRefreshDate() const { return m_lastRefreshDate; }
    inline bool LastRefreshDateHasBeenSet() const { return m_lastRefreshDateHasBeenSet; }
    template<typename LastRefreshDateT = Aws::Utils::DateTime>
    void SetLastRefreshDate(LastRefreshDateT&& value) { m_lastRefreshDateHasBeenSet = true; m_lastRefreshDate = std::forward<LastRefreshDateT>(value); }
    template<typename LastRefreshDateT = Aws::Utils::DateTime>
    RefreshSchemasStatus& WithLastRefreshDate(LastRefreshDateT&& value) { SetLastRefreshDate(std::forward<LastRefreshDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last failure message for the schema.</p>
     */
    inline const Aws::String& GetLastFailureMessage() const { return m_lastFailureMessage; }
    inline bool LastFailureMessageHasBeenSet() const { return m_lastFailureMessageHasBeenSet; }
    template<typename LastFailureMessageT = Aws::String>
    void SetLastFailureMessage(LastFailureMessageT&& value) { m_lastFailureMessageHasBeenSet = true; m_lastFailureMessage = std::forward<LastFailureMessageT>(value); }
    template<typename LastFailureMessageT = Aws::String>
    RefreshSchemasStatus& WithLastFailureMessage(LastFailureMessageT&& value) { SetLastFailureMessage(std::forward<LastFailureMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    RefreshSchemasStatusTypeValue m_status{RefreshSchemasStatusTypeValue::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastRefreshDate{};
    bool m_lastRefreshDateHasBeenSet = false;

    Aws::String m_lastFailureMessage;
    bool m_lastFailureMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
