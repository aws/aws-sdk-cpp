/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class CreateReportPlanResult
  {
  public:
    AWS_BACKUP_API CreateReportPlanResult() = default;
    AWS_BACKUP_API CreateReportPlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API CreateReportPlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique name of the report plan.</p>
     */
    inline const Aws::String& GetReportPlanName() const { return m_reportPlanName; }
    template<typename ReportPlanNameT = Aws::String>
    void SetReportPlanName(ReportPlanNameT&& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = std::forward<ReportPlanNameT>(value); }
    template<typename ReportPlanNameT = Aws::String>
    CreateReportPlanResult& WithReportPlanName(ReportPlanNameT&& value) { SetReportPlanName(std::forward<ReportPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetReportPlanArn() const { return m_reportPlanArn; }
    template<typename ReportPlanArnT = Aws::String>
    void SetReportPlanArn(ReportPlanArnT&& value) { m_reportPlanArnHasBeenSet = true; m_reportPlanArn = std::forward<ReportPlanArnT>(value); }
    template<typename ReportPlanArnT = Aws::String>
    CreateReportPlanResult& WithReportPlanArn(ReportPlanArnT&& value) { SetReportPlanArn(std::forward<ReportPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time a backup vault is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationTime</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateReportPlanResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateReportPlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportPlanName;
    bool m_reportPlanNameHasBeenSet = false;

    Aws::String m_reportPlanArn;
    bool m_reportPlanArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
