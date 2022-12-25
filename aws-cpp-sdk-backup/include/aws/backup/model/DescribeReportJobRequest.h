/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class DescribeReportJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DescribeReportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReportJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline const Aws::String& GetReportJobId() const{ return m_reportJobId; }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline bool ReportJobIdHasBeenSet() const { return m_reportJobIdHasBeenSet; }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline void SetReportJobId(const Aws::String& value) { m_reportJobIdHasBeenSet = true; m_reportJobId = value; }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline void SetReportJobId(Aws::String&& value) { m_reportJobIdHasBeenSet = true; m_reportJobId = std::move(value); }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline void SetReportJobId(const char* value) { m_reportJobIdHasBeenSet = true; m_reportJobId.assign(value); }

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline DescribeReportJobRequest& WithReportJobId(const Aws::String& value) { SetReportJobId(value); return *this;}

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline DescribeReportJobRequest& WithReportJobId(Aws::String&& value) { SetReportJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the report job. A unique, randomly generated, Unicode,
     * UTF-8 encoded string that is at most 1,024 bytes long. The report job ID cannot
     * be edited.</p>
     */
    inline DescribeReportJobRequest& WithReportJobId(const char* value) { SetReportJobId(value); return *this;}

  private:

    Aws::String m_reportJobId;
    bool m_reportJobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
