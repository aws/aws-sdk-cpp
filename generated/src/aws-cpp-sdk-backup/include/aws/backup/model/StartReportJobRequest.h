/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class StartReportJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API StartReportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartReportJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique name of a report plan.</p>
     */
    inline const Aws::String& GetReportPlanName() const{ return m_reportPlanName; }
    inline bool ReportPlanNameHasBeenSet() const { return m_reportPlanNameHasBeenSet; }
    inline void SetReportPlanName(const Aws::String& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = value; }
    inline void SetReportPlanName(Aws::String&& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = std::move(value); }
    inline void SetReportPlanName(const char* value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName.assign(value); }
    inline StartReportJobRequest& WithReportPlanName(const Aws::String& value) { SetReportPlanName(value); return *this;}
    inline StartReportJobRequest& WithReportPlanName(Aws::String&& value) { SetReportPlanName(std::move(value)); return *this;}
    inline StartReportJobRequest& WithReportPlanName(const char* value) { SetReportPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartReportJobInput</code>. Retrying a successful
     * request with the same idempotency token results in a success message with no
     * action taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }
    inline StartReportJobRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}
    inline StartReportJobRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}
    inline StartReportJobRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}
    ///@}
  private:

    Aws::String m_reportPlanName;
    bool m_reportPlanNameHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
