/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>

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
   * <p>Details about a borrow configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/BorrowConfiguration">AWS
   * API Reference</a></p>
   */
  class BorrowConfiguration
  {
  public:
    AWS_LICENSEMANAGER_API BorrowConfiguration() = default;
    AWS_LICENSEMANAGER_API BorrowConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API BorrowConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether early check-ins are allowed.</p>
     */
    inline bool GetAllowEarlyCheckIn() const { return m_allowEarlyCheckIn; }
    inline bool AllowEarlyCheckInHasBeenSet() const { return m_allowEarlyCheckInHasBeenSet; }
    inline void SetAllowEarlyCheckIn(bool value) { m_allowEarlyCheckInHasBeenSet = true; m_allowEarlyCheckIn = value; }
    inline BorrowConfiguration& WithAllowEarlyCheckIn(bool value) { SetAllowEarlyCheckIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum time for the borrow configuration, in minutes.</p>
     */
    inline int GetMaxTimeToLiveInMinutes() const { return m_maxTimeToLiveInMinutes; }
    inline bool MaxTimeToLiveInMinutesHasBeenSet() const { return m_maxTimeToLiveInMinutesHasBeenSet; }
    inline void SetMaxTimeToLiveInMinutes(int value) { m_maxTimeToLiveInMinutesHasBeenSet = true; m_maxTimeToLiveInMinutes = value; }
    inline BorrowConfiguration& WithMaxTimeToLiveInMinutes(int value) { SetMaxTimeToLiveInMinutes(value); return *this;}
    ///@}
  private:

    bool m_allowEarlyCheckIn{false};
    bool m_allowEarlyCheckInHasBeenSet = false;

    int m_maxTimeToLiveInMinutes{0};
    bool m_maxTimeToLiveInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
