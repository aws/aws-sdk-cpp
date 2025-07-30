/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains summary information about a directory assessment, providing a
   * high-level overview without detailed validation results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/AssessmentSummary">AWS
   * API Reference</a></p>
   */
  class AssessmentSummary
  {
  public:
    AWS_DIRECTORYSERVICE_API AssessmentSummary() = default;
    AWS_DIRECTORYSERVICE_API AssessmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API AssessmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the directory assessment.</p>
     */
    inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    template<typename AssessmentIdT = Aws::String>
    void SetAssessmentId(AssessmentIdT&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::forward<AssessmentIdT>(value); }
    template<typename AssessmentIdT = Aws::String>
    AssessmentSummary& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the directory associated with this assessment.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    AssessmentSummary& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified domain name (FQDN) of the Active Directory domain being
     * assessed.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    AssessmentSummary& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the assessment was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    AssessmentSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the assessment status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateDateTime() const { return m_lastUpdateDateTime; }
    inline bool LastUpdateDateTimeHasBeenSet() const { return m_lastUpdateDateTimeHasBeenSet; }
    template<typename LastUpdateDateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateDateTime(LastUpdateDateTimeT&& value) { m_lastUpdateDateTimeHasBeenSet = true; m_lastUpdateDateTime = std::forward<LastUpdateDateTimeT>(value); }
    template<typename LastUpdateDateTimeT = Aws::Utils::DateTime>
    AssessmentSummary& WithLastUpdateDateTime(LastUpdateDateTimeT&& value) { SetLastUpdateDateTime(std::forward<LastUpdateDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the assessment. Valid values include
     * <code>SUCCESS</code>, <code>FAILED</code>, <code>PENDING</code>, and
     * <code>IN_PROGRESS</code>.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AssessmentSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses of the DNS servers or domain controllers in your
     * self-managed AD environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerDnsIps() const { return m_customerDnsIps; }
    inline bool CustomerDnsIpsHasBeenSet() const { return m_customerDnsIpsHasBeenSet; }
    template<typename CustomerDnsIpsT = Aws::Vector<Aws::String>>
    void SetCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps = std::forward<CustomerDnsIpsT>(value); }
    template<typename CustomerDnsIpsT = Aws::Vector<Aws::String>>
    AssessmentSummary& WithCustomerDnsIps(CustomerDnsIpsT&& value) { SetCustomerDnsIps(std::forward<CustomerDnsIpsT>(value)); return *this;}
    template<typename CustomerDnsIpsT = Aws::String>
    AssessmentSummary& AddCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps.emplace_back(std::forward<CustomerDnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of assessment report generated. Valid values include
     * <code>CUSTOMER</code> and <code>SYSTEM</code>.</p>
     */
    inline const Aws::String& GetReportType() const { return m_reportType; }
    inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }
    template<typename ReportTypeT = Aws::String>
    void SetReportType(ReportTypeT&& value) { m_reportTypeHasBeenSet = true; m_reportType = std::forward<ReportTypeT>(value); }
    template<typename ReportTypeT = Aws::String>
    AssessmentSummary& WithReportType(ReportTypeT&& value) { SetReportType(std::forward<ReportTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateDateTime{};
    bool m_lastUpdateDateTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_customerDnsIps;
    bool m_customerDnsIpsHasBeenSet = false;

    Aws::String m_reportType;
    bool m_reportTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
