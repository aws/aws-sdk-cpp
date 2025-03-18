/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace LicenseManager
{
namespace Model
{

  /**
   * <p>Details of the license configuration that this generator reports
   * on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ReportContext">AWS
   * API Reference</a></p>
   */
  class ReportContext
  {
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
    template<typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
    void SetLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = std::forward<LicenseConfigurationArnsT>(value); }
    template<typename LicenseConfigurationArnsT = Aws::Vector<Aws::String>>
    ReportContext& WithLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { SetLicenseConfigurationArns(std::forward<LicenseConfigurationArnsT>(value)); return *this;}
    template<typename LicenseConfigurationArnsT = Aws::String>
    ReportContext& AddLicenseConfigurationArns(LicenseConfigurationArnsT&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.emplace_back(std::forward<LicenseConfigurationArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_licenseConfigurationArns;
    bool m_licenseConfigurationArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
