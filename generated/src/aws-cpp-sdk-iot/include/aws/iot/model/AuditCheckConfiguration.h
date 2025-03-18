/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iot/model/ConfigName.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>Which audit checks are enabled and disabled for this account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AuditCheckConfiguration">AWS
   * API Reference</a></p>
   */
  class AuditCheckConfiguration
  {
  public:
    AWS_IOT_API AuditCheckConfiguration() = default;
    AWS_IOT_API AuditCheckConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AuditCheckConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>True if this audit check is enabled for this account.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline AuditCheckConfiguration& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing the configName and corresponding configValue for
     * configuring audit checks.</p>
     */
    inline const Aws::Map<ConfigName, Aws::String>& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = Aws::Map<ConfigName, Aws::String>>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = Aws::Map<ConfigName, Aws::String>>
    AuditCheckConfiguration& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    inline AuditCheckConfiguration& AddConfiguration(ConfigName key, Aws::String value) {
      m_configurationHasBeenSet = true; m_configuration.emplace(key, value); return *this;
    }
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Map<ConfigName, Aws::String> m_configuration;
    bool m_configurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
