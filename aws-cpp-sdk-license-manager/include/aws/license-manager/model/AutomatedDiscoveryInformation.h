/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes automated discovery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/AutomatedDiscoveryInformation">AWS
   * API Reference</a></p>
   */
  class AutomatedDiscoveryInformation
  {
  public:
    AWS_LICENSEMANAGER_API AutomatedDiscoveryInformation();
    AWS_LICENSEMANAGER_API AutomatedDiscoveryInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API AutomatedDiscoveryInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time that automated discovery last ran.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunTime() const{ return m_lastRunTime; }

    /**
     * <p>Time that automated discovery last ran.</p>
     */
    inline bool LastRunTimeHasBeenSet() const { return m_lastRunTimeHasBeenSet; }

    /**
     * <p>Time that automated discovery last ran.</p>
     */
    inline void SetLastRunTime(const Aws::Utils::DateTime& value) { m_lastRunTimeHasBeenSet = true; m_lastRunTime = value; }

    /**
     * <p>Time that automated discovery last ran.</p>
     */
    inline void SetLastRunTime(Aws::Utils::DateTime&& value) { m_lastRunTimeHasBeenSet = true; m_lastRunTime = std::move(value); }

    /**
     * <p>Time that automated discovery last ran.</p>
     */
    inline AutomatedDiscoveryInformation& WithLastRunTime(const Aws::Utils::DateTime& value) { SetLastRunTime(value); return *this;}

    /**
     * <p>Time that automated discovery last ran.</p>
     */
    inline AutomatedDiscoveryInformation& WithLastRunTime(Aws::Utils::DateTime&& value) { SetLastRunTime(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_lastRunTime;
    bool m_lastRunTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
