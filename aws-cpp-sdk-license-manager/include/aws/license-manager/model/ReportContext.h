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
    AWS_LICENSEMANAGER_API ReportContext();
    AWS_LICENSEMANAGER_API ReportContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ReportContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLicenseConfigurationArns() const{ return m_licenseConfigurationArns; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline bool LicenseConfigurationArnsHasBeenSet() const { return m_licenseConfigurationArnsHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline void SetLicenseConfigurationArns(const Aws::Vector<Aws::String>& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline void SetLicenseConfigurationArns(Aws::Vector<Aws::String>&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline ReportContext& WithLicenseConfigurationArns(const Aws::Vector<Aws::String>& value) { SetLicenseConfigurationArns(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline ReportContext& WithLicenseConfigurationArns(Aws::Vector<Aws::String>&& value) { SetLicenseConfigurationArns(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline ReportContext& AddLicenseConfigurationArns(const Aws::String& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(value); return *this; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline ReportContext& AddLicenseConfigurationArns(Aws::String&& value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Amazon Resource Name (ARN) of the license configuration that this generator
     * reports on.</p>
     */
    inline ReportContext& AddLicenseConfigurationArns(const char* value) { m_licenseConfigurationArnsHasBeenSet = true; m_licenseConfigurationArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_licenseConfigurationArns;
    bool m_licenseConfigurationArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
