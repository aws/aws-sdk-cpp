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
    AWS_BACKUP_API ReportSetting();
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
    inline const Aws::String& GetReportTemplate() const{ return m_reportTemplate; }
    inline bool ReportTemplateHasBeenSet() const { return m_reportTemplateHasBeenSet; }
    inline void SetReportTemplate(const Aws::String& value) { m_reportTemplateHasBeenSet = true; m_reportTemplate = value; }
    inline void SetReportTemplate(Aws::String&& value) { m_reportTemplateHasBeenSet = true; m_reportTemplate = std::move(value); }
    inline void SetReportTemplate(const char* value) { m_reportTemplateHasBeenSet = true; m_reportTemplate.assign(value); }
    inline ReportSetting& WithReportTemplate(const Aws::String& value) { SetReportTemplate(value); return *this;}
    inline ReportSetting& WithReportTemplate(Aws::String&& value) { SetReportTemplate(std::move(value)); return *this;}
    inline ReportSetting& WithReportTemplate(const char* value) { SetReportTemplate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Names (ARNs) of the frameworks a report covers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFrameworkArns() const{ return m_frameworkArns; }
    inline bool FrameworkArnsHasBeenSet() const { return m_frameworkArnsHasBeenSet; }
    inline void SetFrameworkArns(const Aws::Vector<Aws::String>& value) { m_frameworkArnsHasBeenSet = true; m_frameworkArns = value; }
    inline void SetFrameworkArns(Aws::Vector<Aws::String>&& value) { m_frameworkArnsHasBeenSet = true; m_frameworkArns = std::move(value); }
    inline ReportSetting& WithFrameworkArns(const Aws::Vector<Aws::String>& value) { SetFrameworkArns(value); return *this;}
    inline ReportSetting& WithFrameworkArns(Aws::Vector<Aws::String>&& value) { SetFrameworkArns(std::move(value)); return *this;}
    inline ReportSetting& AddFrameworkArns(const Aws::String& value) { m_frameworkArnsHasBeenSet = true; m_frameworkArns.push_back(value); return *this; }
    inline ReportSetting& AddFrameworkArns(Aws::String&& value) { m_frameworkArnsHasBeenSet = true; m_frameworkArns.push_back(std::move(value)); return *this; }
    inline ReportSetting& AddFrameworkArns(const char* value) { m_frameworkArnsHasBeenSet = true; m_frameworkArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The number of frameworks a report covers.</p>
     */
    inline int GetNumberOfFrameworks() const{ return m_numberOfFrameworks; }
    inline bool NumberOfFrameworksHasBeenSet() const { return m_numberOfFrameworksHasBeenSet; }
    inline void SetNumberOfFrameworks(int value) { m_numberOfFrameworksHasBeenSet = true; m_numberOfFrameworks = value; }
    inline ReportSetting& WithNumberOfFrameworks(int value) { SetNumberOfFrameworks(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>These are the accounts to be included in the report.</p> <p>Use string value
     * of <code>ROOT</code> to include all organizational units.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccounts() const{ return m_accounts; }
    inline bool AccountsHasBeenSet() const { return m_accountsHasBeenSet; }
    inline void SetAccounts(const Aws::Vector<Aws::String>& value) { m_accountsHasBeenSet = true; m_accounts = value; }
    inline void SetAccounts(Aws::Vector<Aws::String>&& value) { m_accountsHasBeenSet = true; m_accounts = std::move(value); }
    inline ReportSetting& WithAccounts(const Aws::Vector<Aws::String>& value) { SetAccounts(value); return *this;}
    inline ReportSetting& WithAccounts(Aws::Vector<Aws::String>&& value) { SetAccounts(std::move(value)); return *this;}
    inline ReportSetting& AddAccounts(const Aws::String& value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    inline ReportSetting& AddAccounts(Aws::String&& value) { m_accountsHasBeenSet = true; m_accounts.push_back(std::move(value)); return *this; }
    inline ReportSetting& AddAccounts(const char* value) { m_accountsHasBeenSet = true; m_accounts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are the Organizational Units to be included in the report.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationUnits() const{ return m_organizationUnits; }
    inline bool OrganizationUnitsHasBeenSet() const { return m_organizationUnitsHasBeenSet; }
    inline void SetOrganizationUnits(const Aws::Vector<Aws::String>& value) { m_organizationUnitsHasBeenSet = true; m_organizationUnits = value; }
    inline void SetOrganizationUnits(Aws::Vector<Aws::String>&& value) { m_organizationUnitsHasBeenSet = true; m_organizationUnits = std::move(value); }
    inline ReportSetting& WithOrganizationUnits(const Aws::Vector<Aws::String>& value) { SetOrganizationUnits(value); return *this;}
    inline ReportSetting& WithOrganizationUnits(Aws::Vector<Aws::String>&& value) { SetOrganizationUnits(std::move(value)); return *this;}
    inline ReportSetting& AddOrganizationUnits(const Aws::String& value) { m_organizationUnitsHasBeenSet = true; m_organizationUnits.push_back(value); return *this; }
    inline ReportSetting& AddOrganizationUnits(Aws::String&& value) { m_organizationUnitsHasBeenSet = true; m_organizationUnits.push_back(std::move(value)); return *this; }
    inline ReportSetting& AddOrganizationUnits(const char* value) { m_organizationUnitsHasBeenSet = true; m_organizationUnits.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>These are the Regions to be included in the report.</p> <p>Use the wildcard
     * as the string value to include all Regions.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegions() const{ return m_regions; }
    inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
    inline void SetRegions(const Aws::Vector<Aws::String>& value) { m_regionsHasBeenSet = true; m_regions = value; }
    inline void SetRegions(Aws::Vector<Aws::String>&& value) { m_regionsHasBeenSet = true; m_regions = std::move(value); }
    inline ReportSetting& WithRegions(const Aws::Vector<Aws::String>& value) { SetRegions(value); return *this;}
    inline ReportSetting& WithRegions(Aws::Vector<Aws::String>&& value) { SetRegions(std::move(value)); return *this;}
    inline ReportSetting& AddRegions(const Aws::String& value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    inline ReportSetting& AddRegions(Aws::String&& value) { m_regionsHasBeenSet = true; m_regions.push_back(std::move(value)); return *this; }
    inline ReportSetting& AddRegions(const char* value) { m_regionsHasBeenSet = true; m_regions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_reportTemplate;
    bool m_reportTemplateHasBeenSet = false;

    Aws::Vector<Aws::String> m_frameworkArns;
    bool m_frameworkArnsHasBeenSet = false;

    int m_numberOfFrameworks;
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
