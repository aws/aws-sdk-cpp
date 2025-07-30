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
   * <p>Contains detailed information about a directory assessment, including
   * configuration parameters, status, and validation results.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/Assessment">AWS API
   * Reference</a></p>
   */
  class Assessment
  {
  public:
    AWS_DIRECTORYSERVICE_API Assessment() = default;
    AWS_DIRECTORYSERVICE_API Assessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Assessment& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    Assessment& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
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
    Assessment& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
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
    Assessment& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
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
    Assessment& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    Assessment& WithLastUpdateDateTime(LastUpdateDateTimeT&& value) { SetLastUpdateDateTime(std::forward<LastUpdateDateTimeT>(value)); return *this;}
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
    Assessment& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed status code providing additional information about the assessment
     * state.</p>
     */
    inline const Aws::String& GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    template<typename StatusCodeT = Aws::String>
    void SetStatusCode(StatusCodeT&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::forward<StatusCodeT>(value); }
    template<typename StatusCodeT = Aws::String>
    Assessment& WithStatusCode(StatusCodeT&& value) { SetStatusCode(std::forward<StatusCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable description of the current assessment status, including any
     * error details or progress information.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    Assessment& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
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
    Assessment& WithCustomerDnsIps(CustomerDnsIpsT&& value) { SetCustomerDnsIps(std::forward<CustomerDnsIpsT>(value)); return *this;}
    template<typename CustomerDnsIpsT = Aws::String>
    Assessment& AddCustomerDnsIps(CustomerDnsIpsT&& value) { m_customerDnsIpsHasBeenSet = true; m_customerDnsIps.emplace_back(std::forward<CustomerDnsIpsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains Amazon VPC information for the <code>StartADAssessment</code>
     * operation. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    Assessment& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of subnet identifiers in the Amazon VPC in which the hybrid directory
     * is created.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    Assessment& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    Assessment& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security groups identifiers attached to the network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    Assessment& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    Assessment& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifiers of the self-managed AD instances used to perform the
     * assessment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelfManagedInstanceIds() const { return m_selfManagedInstanceIds; }
    inline bool SelfManagedInstanceIdsHasBeenSet() const { return m_selfManagedInstanceIdsHasBeenSet; }
    template<typename SelfManagedInstanceIdsT = Aws::Vector<Aws::String>>
    void SetSelfManagedInstanceIds(SelfManagedInstanceIdsT&& value) { m_selfManagedInstanceIdsHasBeenSet = true; m_selfManagedInstanceIds = std::forward<SelfManagedInstanceIdsT>(value); }
    template<typename SelfManagedInstanceIdsT = Aws::Vector<Aws::String>>
    Assessment& WithSelfManagedInstanceIds(SelfManagedInstanceIdsT&& value) { SetSelfManagedInstanceIds(std::forward<SelfManagedInstanceIdsT>(value)); return *this;}
    template<typename SelfManagedInstanceIdsT = Aws::String>
    Assessment& AddSelfManagedInstanceIds(SelfManagedInstanceIdsT&& value) { m_selfManagedInstanceIdsHasBeenSet = true; m_selfManagedInstanceIds.emplace_back(std::forward<SelfManagedInstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of assessment report generated. Valid values are
     * <code>CUSTOMER</code> and <code>SYSTEM</code>.</p>
     */
    inline const Aws::String& GetReportType() const { return m_reportType; }
    inline bool ReportTypeHasBeenSet() const { return m_reportTypeHasBeenSet; }
    template<typename ReportTypeT = Aws::String>
    void SetReportType(ReportTypeT&& value) { m_reportTypeHasBeenSet = true; m_reportType = std::forward<ReportTypeT>(value); }
    template<typename ReportTypeT = Aws::String>
    Assessment& WithReportType(ReportTypeT&& value) { SetReportType(std::forward<ReportTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the assessment framework used to evaluate your self-managed AD
     * environment.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    Assessment& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
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

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<Aws::String> m_customerDnsIps;
    bool m_customerDnsIpsHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_selfManagedInstanceIds;
    bool m_selfManagedInstanceIdsHasBeenSet = false;

    Aws::String m_reportType;
    bool m_reportTypeHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
