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
   */
  class DeleteFleetAdvisorCollectorRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DeleteFleetAdvisorCollectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFleetAdvisorCollector"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The reference ID of the Fleet Advisor collector to delete.</p>
     */
    inline const Aws::String& GetCollectorReferencedId() const{ return m_collectorReferencedId; }

    /**
     * <p>The reference ID of the Fleet Advisor collector to delete.</p>
     */
    inline bool CollectorReferencedIdHasBeenSet() const { return m_collectorReferencedIdHasBeenSet; }

    /**
     * <p>The reference ID of the Fleet Advisor collector to delete.</p>
     */
    inline void SetCollectorReferencedId(const Aws::String& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = value; }

    /**
     * <p>The reference ID of the Fleet Advisor collector to delete.</p>
     */
    inline void SetCollectorReferencedId(Aws::String&& value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId = std::move(value); }

    /**
     * <p>The reference ID of the Fleet Advisor collector to delete.</p>
     */
    inline void SetCollectorReferencedId(const char* value) { m_collectorReferencedIdHasBeenSet = true; m_collectorReferencedId.assign(value); }

    /**
     * <p>The reference ID of the Fleet Advisor collector to delete.</p>
     */
    inline DeleteFleetAdvisorCollectorRequest& WithCollectorReferencedId(const Aws::String& value) { SetCollectorReferencedId(value); return *this;}

    /**
     * <p>The reference ID of the Fleet Advisor collector to delete.</p>
     */
    inline DeleteFleetAdvisorCollectorRequest& WithCollectorReferencedId(Aws::String&& value) { SetCollectorReferencedId(std::move(value)); return *this;}

    /**
     * <p>The reference ID of the Fleet Advisor collector to delete.</p>
     */
    inline DeleteFleetAdvisorCollectorRequest& WithCollectorReferencedId(const char* value) { SetCollectorReferencedId(value); return *this;}

  private:

    Aws::String m_collectorReferencedId;
    bool m_collectorReferencedIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
