/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/CancelReplicationTaskAssessmentRunMessage">AWS
   * API Reference</a></p>
   */
  class CancelReplicationTaskAssessmentRunRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API CancelReplicationTaskAssessmentRunRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelReplicationTaskAssessmentRun"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Amazon Resource Name (ARN) of the premigration assessment run to be
     * canceled.</p>
     */
    inline const Aws::String& GetReplicationTaskAssessmentRunArn() const{ return m_replicationTaskAssessmentRunArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the premigration assessment run to be
     * canceled.</p>
     */
    inline bool ReplicationTaskAssessmentRunArnHasBeenSet() const { return m_replicationTaskAssessmentRunArnHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the premigration assessment run to be
     * canceled.</p>
     */
    inline void SetReplicationTaskAssessmentRunArn(const Aws::String& value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the premigration assessment run to be
     * canceled.</p>
     */
    inline void SetReplicationTaskAssessmentRunArn(Aws::String&& value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the premigration assessment run to be
     * canceled.</p>
     */
    inline void SetReplicationTaskAssessmentRunArn(const char* value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the premigration assessment run to be
     * canceled.</p>
     */
    inline CancelReplicationTaskAssessmentRunRequest& WithReplicationTaskAssessmentRunArn(const Aws::String& value) { SetReplicationTaskAssessmentRunArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the premigration assessment run to be
     * canceled.</p>
     */
    inline CancelReplicationTaskAssessmentRunRequest& WithReplicationTaskAssessmentRunArn(Aws::String&& value) { SetReplicationTaskAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the premigration assessment run to be
     * canceled.</p>
     */
    inline CancelReplicationTaskAssessmentRunRequest& WithReplicationTaskAssessmentRunArn(const char* value) { SetReplicationTaskAssessmentRunArn(value); return *this;}

  private:

    Aws::String m_replicationTaskAssessmentRunArn;
    bool m_replicationTaskAssessmentRunArnHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
