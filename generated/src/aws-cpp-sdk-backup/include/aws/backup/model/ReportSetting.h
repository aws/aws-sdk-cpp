/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains detailed information about a report setting.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ReportSetting">AWS
   * API Reference</a></p>
   */
  class ReportSetting
  {
  public:
    AWS_BACKUP_API ReportSetting() = default;
    AWS_BACKUP_API ReportSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ReportSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline const Aws::String& GetReportTemplate() const { return m_reportTemplate; }
    inline bool ReportTemplateHasBeenSet() const { return m_reportTemplateHasBeenSet; }
    template<typename ReportTemplateT = Aws::String>
    void SetReportTemplate(ReportTemplateT&& value) { m_reportTemplateHasBeenSet = true; m_reportTemplate = std::forward<ReportTemplateT>(value); }
    template<typename ReportTemplateT = Aws::String>
    ReportSetting& WithReportTemplate(ReportTemplateT&& value) { SetReportTemplate(std::forward<ReportTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the frameworks a report covers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFrameworkArns() const { return m_frameworkArns; }
    inline bool FrameworkArnsHasBeenSet() const { return m_frameworkArnsHasBeenSet; }
    template<typename FrameworkArnsT = Aws::Vector<Aws::String>>
    void SetFrameworkArns(FrameworkArnsT&& value) { m_frameworkArnsHasBeenSet = true; m_frameworkArns = std::forward<FrameworkArnsT>(value); }
    template<typename FrameworkArnsT = Aws::Vector<Aws::String>>
    ReportSetting& WithFrameworkArns(FrameworkArnsT&& value) { SetFrameworkArns(std::forward<FrameworkArnsT>(value)); return *this;}
    template<typename FrameworkArnsT = Aws::String>
    ReportSetting& AddFrameworkArns(FrameworkArnsT&& value) { m_frameworkArnsHasBeenSet = true; m_frameworkArns.emplace_back(std::forward<FrameworkArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of frameworks a report covers.</p>
     */
    inline int GetNumberOfFrameworks() const { return m_numberOfFrameworks; }
    inline bool NumberOfFrameworksHasBeenSet() const { return m_numberOfFrameworksHasBeenSet; }
    inline void SetNumberOfFrameworks(int value) { m_numberOfFrameworksHasBeenSet = true; m_numberOfFrameworks = value; }
    inline ReportSetting& WithNumberOfFrameworks(int value) { SetNumberOfFrameworks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are the accounts to be included in the report.</p> <p>Use string value
     * of <code>ROOT</code> to include all organizational units.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const { return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    void SetAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts = std::forward<AccountsT>(value); }
    template<typename AccountsT = Aws::Vector<Aws::String>>
    ReportSetting& WithAccounts(AccountsT&& value) { SetAccounts(std::forward<AccountsT>(value)); return *this;}
    template<typename AccountsT = Aws::String>
    ReportSetting& AddAccounts(AccountsT&& value) { m_accountsHasBeenSet = true; m_accounts.emplace_back(std::forward<AccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are the Organizational Units to be included in the report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationUnits() const { return m_organizationUnits; }
    inline bool OrganizationUnitsHasBeenSet() const { return m_organizationUnitsHasBeenSet; }
    template<typename OrganizationUnitsT = Aws::Vector<Aws::String>>
    void SetOrganizationUnits(OrganizationUnitsT&& value) { m_organizationUnitsHasBeenSet = true; m_organizationUnits = std::forward<OrganizationUnitsT>(value); }
    template<typename OrganizationUnitsT = Aws::Vector<Aws::String>>
    ReportSetting& WithOrganizationUnits(OrganizationUnitsT&& value) { SetOrganizationUnits(std::forward<OrganizationUnitsT>(value)); return *this;}
    template<typename OrganizationUnitsT = Aws::String>
    ReportSetting& AddOrganizationUnits(OrganizationUnitsT&& value) { m_organizationUnitsHasBeenSet = true; m_organizationUnits.emplace_back(std::forward<OrganizationUnitsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are the Regions to be included in the report.</p> <p>Use the wildcard
     * as the string value to include all Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    void SetRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions = std::forward<RegionsT>(value); }
    template<typename RegionsT = Aws::Vector<Aws::String>>
    ReportSetting& WithRegions(RegionsT&& value) { SetRegions(std::forward<RegionsT>(value)); return *this;}
    template<typename RegionsT = Aws::String>
    ReportSetting& AddRegions(RegionsT&& value) { m_regionsHasBeenSet = true; m_regions.emplace_back(std::forward<RegionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reportTemplate;
    bool m_reportTemplateHasBeenSet = false;

    Aws::Vector<Aws::String> m_frameworkArns;
    bool m_frameworkArnsHasBeenSet = false;

    int m_numberOfFrameworks{0};
    bool m_numberOfFrameworksHasBeenSet = false;

    Aws::Vector<Aws::String> m_accounts;
    bool m_accountsHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationUnits;
    bool m_organizationUnitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_regions;
    bool m_regionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
