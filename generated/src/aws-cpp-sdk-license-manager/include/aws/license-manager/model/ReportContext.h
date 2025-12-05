/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager/LicenseManager_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace LicenseManager {
namespace Model {

/**
 * <p>Details of the license configuration that this generator reports
 * on.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ReportContext">AWS
 * API Reference</a></p>
 */
class ReportContext {
 public:
  AWS_LICENSEMANAGER_API ReportContext() = default;
  AWS_LICENSEMANAGER_API ReportContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API ReportContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Amazon Resource Name (ARN) of the license configuration that this generator
   * reports on.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLicenseConfigurationArns() const { return m_licenseConfigurationArns; }
  inline bool LicenseConfigurationArnsHasBeenSet() const { return m_licenseConfigurationArnsHasBeenSet; }
  template <typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
  void SetLicenseConfigurationArns(LicenseConfigurationArnsT&& value) {
    m_licenseConfigurationArnsHasBeenSet = true;
    m_licenseConfigurationArns = std::forward<LicenseConfigurationArnsT>(value);
  }
  template <typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
  ReportContext& WithLicenseConfigurationArns(LicenseConfigurationArnsT&& value) {
    SetLicenseConfigurationArns(std::forward<LicenseConfigurationArnsT>(value));
    return *this;
  }
  template <typename LicenseConfigurationArnsT = Aws::String>
  ReportContext& AddLicenseConfigurationArns(LicenseConfigurationArnsT&& value) {
    m_licenseConfigurationArnsHasBeenSet = true;
    m_licenseConfigurationArns.emplace_back(std::forward<LicenseConfigurationArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Resource Names (ARNs) of the license asset groups to include in the
   * report.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLicenseAssetGroupArns() const { return m_licenseAssetGroupArns; }
  inline bool LicenseAssetGroupArnsHasBeenSet() const { return m_licenseAssetGroupArnsHasBeenSet; }
  template <typename LicenseAssetGroupArnsT = Aws::Vector<Aws::String>>
  void SetLicenseAssetGroupArns(LicenseAssetGroupArnsT&& value) {
    m_licenseAssetGroupArnsHasBeenSet = true;
    m_licenseAssetGroupArns = std::forward<LicenseAssetGroupArnsT>(value);
  }
  template <typename LicenseAssetGroupArnsT = Aws::Vector<Aws::String>>
  ReportContext& WithLicenseAssetGroupArns(LicenseAssetGroupArnsT&& value) {
    SetLicenseAssetGroupArns(std::forward<LicenseAssetGroupArnsT>(value));
    return *this;
  }
  template <typename LicenseAssetGroupArnsT = Aws::String>
  ReportContext& AddLicenseAssetGroupArns(LicenseAssetGroupArnsT&& value) {
    m_licenseAssetGroupArnsHasBeenSet = true;
    m_licenseAssetGroupArns.emplace_back(std::forward<LicenseAssetGroupArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Start date for the report data collection period.</p>
   */
  inline const Aws::Utils::DateTime& GetReportStartDate() const { return m_reportStartDate; }
  inline bool ReportStartDateHasBeenSet() const { return m_reportStartDateHasBeenSet; }
  template <typename ReportStartDateT = Aws::Utils::DateTime>
  void SetReportStartDate(ReportStartDateT&& value) {
    m_reportStartDateHasBeenSet = true;
    m_reportStartDate = std::forward<ReportStartDateT>(value);
  }
  template <typename ReportStartDateT = Aws::Utils::DateTime>
  ReportContext& WithReportStartDate(ReportStartDateT&& value) {
    SetReportStartDate(std::forward<ReportStartDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>End date for the report data collection period.</p>
   */
  inline const Aws::Utils::DateTime& GetReportEndDate() const { return m_reportEndDate; }
  inline bool ReportEndDateHasBeenSet() const { return m_reportEndDateHasBeenSet; }
  template <typename ReportEndDateT = Aws::Utils::DateTime>
  void SetReportEndDate(ReportEndDateT&& value) {
    m_reportEndDateHasBeenSet = true;
    m_reportEndDate = std::forward<ReportEndDateT>(value);
  }
  template <typename ReportEndDateT = Aws::Utils::DateTime>
  ReportContext& WithReportEndDate(ReportEndDateT&& value) {
    SetReportEndDate(std::forward<ReportEndDateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_licenseConfigurationArns;

  Aws::Vector<Aws::String> m_licenseAssetGroupArns;

  Aws::Utils::DateTime m_reportStartDate{};

  Aws::Utils::DateTime m_reportEndDate{};
  bool m_licenseConfigurationArnsHasBeenSet = false;
  bool m_licenseAssetGroupArnsHasBeenSet = false;
  bool m_reportStartDateHasBeenSet = false;
  bool m_reportEndDateHasBeenSet = false;
};

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
