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
   * <p>Details about a provisional configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-2018-08-01/ProvisionalConfiguration">AWS
   * API Reference</a></p>
   */
  class ProvisionalConfiguration
  {
  public:
    AWS_LICENSEMANAGER_API ProvisionalConfiguration() = default;
    AWS_LICENSEMANAGER_API ProvisionalConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API ProvisionalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Maximum time for the provisional configuration, in minutes.</p>
     */
    inline int GetMaxTimeToLiveInMinutes() const { return m_maxTimeToLiveInMinutes; }
    inline bool MaxTimeToLiveInMinutesHasBeenSet() const { return m_maxTimeToLiveInMinutesHasBeenSet; }
    inline void SetMaxTimeToLiveInMinutes(int value) { m_maxTimeToLiveInMinutesHasBeenSet = true; m_maxTimeToLiveInMinutes = value; }
    inline ProvisionalConfiguration& WithMaxTimeToLiveInMinutes(int value) { SetMaxTimeToLiveInMinutes(value); return *this;}
    ///@}
  private:

    int m_maxTimeToLiveInMinutes{0};
    bool m_maxTimeToLiveInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
