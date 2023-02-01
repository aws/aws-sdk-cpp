/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/UpdateSubscriptionsToEventBridgeMessage">AWS
   * API Reference</a></p>
   */
  class UpdateSubscriptionsToEventBridgeRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API UpdateSubscriptionsToEventBridgeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriptionsToEventBridge"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>When set to true, this operation migrates DMS subscriptions for Amazon SNS
     * notifications no matter what your replication instance version is. If not set or
     * set to false, this operation runs only when all your replication instances are
     * from DMS version 3.4.6 or higher. </p>
     */
    inline bool GetForceMove() const{ return m_forceMove; }

    /**
     * <p>When set to true, this operation migrates DMS subscriptions for Amazon SNS
     * notifications no matter what your replication instance version is. If not set or
     * set to false, this operation runs only when all your replication instances are
     * from DMS version 3.4.6 or higher. </p>
     */
    inline bool ForceMoveHasBeenSet() const { return m_forceMoveHasBeenSet; }

    /**
     * <p>When set to true, this operation migrates DMS subscriptions for Amazon SNS
     * notifications no matter what your replication instance version is. If not set or
     * set to false, this operation runs only when all your replication instances are
     * from DMS version 3.4.6 or higher. </p>
     */
    inline void SetForceMove(bool value) { m_forceMoveHasBeenSet = true; m_forceMove = value; }

    /**
     * <p>When set to true, this operation migrates DMS subscriptions for Amazon SNS
     * notifications no matter what your replication instance version is. If not set or
     * set to false, this operation runs only when all your replication instances are
     * from DMS version 3.4.6 or higher. </p>
     */
    inline UpdateSubscriptionsToEventBridgeRequest& WithForceMove(bool value) { SetForceMove(value); return *this;}

  private:

    bool m_forceMove;
    bool m_forceMoveHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
