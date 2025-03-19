/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p> A configuration ID paired with a warning message. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/DeletionWarning">AWS
   * API Reference</a></p>
   */
  class DeletionWarning
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DeletionWarning() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API DeletionWarning(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API DeletionWarning& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifier of the configuration that produced a warning. </p>
     */
    inline const Aws::String& GetConfigurationId() const { return m_configurationId; }
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }
    template<typename ConfigurationIdT = Aws::String>
    void SetConfigurationId(ConfigurationIdT&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::forward<ConfigurationIdT>(value); }
    template<typename ConfigurationIdT = Aws::String>
    DeletionWarning& WithConfigurationId(ConfigurationIdT&& value) { SetConfigurationId(std::forward<ConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The integer warning code associated with the warning message. </p>
     */
    inline int GetWarningCode() const { return m_warningCode; }
    inline bool WarningCodeHasBeenSet() const { return m_warningCodeHasBeenSet; }
    inline void SetWarningCode(int value) { m_warningCodeHasBeenSet = true; m_warningCode = value; }
    inline DeletionWarning& WithWarningCode(int value) { SetWarningCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A descriptive message of the warning the associated configuration ID
     * produced. </p>
     */
    inline const Aws::String& GetWarningText() const { return m_warningText; }
    inline bool WarningTextHasBeenSet() const { return m_warningTextHasBeenSet; }
    template<typename WarningTextT = Aws::String>
    void SetWarningText(WarningTextT&& value) { m_warningTextHasBeenSet = true; m_warningText = std::forward<WarningTextT>(value); }
    template<typename WarningTextT = Aws::String>
    DeletionWarning& WithWarningText(WarningTextT&& value) { SetWarningText(std::forward<WarningTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    int m_warningCode{0};
    bool m_warningCodeHasBeenSet = false;

    Aws::String m_warningText;
    bool m_warningTextHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
