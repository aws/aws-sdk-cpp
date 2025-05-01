/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>

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
namespace AppConfig
{
namespace Model
{

  /**
   * <p>A parameter to configure deletion protection. Deletion protection prevents a
   * user from deleting a configuration profile or an environment if AppConfig has
   * called either <a
   * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
   * or for the configuration profile or from the environment during the specified
   * interval.</p> <p>The default interval specified by
   * <code>ProtectionPeriodInMinutes</code> is 60.
   * <code>DeletionProtectionCheck</code> skips configuration profiles and
   * environments that were created in the past hour.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/DeletionProtectionSettings">AWS
   * API Reference</a></p>
   */
  class DeletionProtectionSettings
  {
  public:
    AWS_APPCONFIG_API DeletionProtectionSettings() = default;
    AWS_APPCONFIG_API DeletionProtectionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API DeletionProtectionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A parameter that indicates if deletion protection is enabled or not.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DeletionProtectionSettings& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time interval during which AppConfig monitors for calls to <a
     * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
     * or for a configuration profile or from an environment. AppConfig returns an
     * error if a user calls or for the designated configuration profile or
     * environment. To bypass the error and delete a configuration profile or an
     * environment, specify <code>BYPASS</code> for the
     * <code>DeletionProtectionCheck</code> parameter for either or .</p>
     */
    inline int GetProtectionPeriodInMinutes() const { return m_protectionPeriodInMinutes; }
    inline bool ProtectionPeriodInMinutesHasBeenSet() const { return m_protectionPeriodInMinutesHasBeenSet; }
    inline void SetProtectionPeriodInMinutes(int value) { m_protectionPeriodInMinutesHasBeenSet = true; m_protectionPeriodInMinutes = value; }
    inline DeletionProtectionSettings& WithProtectionPeriodInMinutes(int value) { SetProtectionPeriodInMinutes(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    int m_protectionPeriodInMinutes{0};
    bool m_protectionPeriodInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
