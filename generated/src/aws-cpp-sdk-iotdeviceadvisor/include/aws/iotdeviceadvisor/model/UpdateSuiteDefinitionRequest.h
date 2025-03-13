/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotdeviceadvisor/IoTDeviceAdvisor_EXPORTS.h>
#include <aws/iotdeviceadvisor/IoTDeviceAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotdeviceadvisor/model/SuiteDefinitionConfiguration.h>
#include <utility>

namespace Aws
{
namespace IoTDeviceAdvisor
{
namespace Model
{

  /**
   */
  class UpdateSuiteDefinitionRequest : public IoTDeviceAdvisorRequest
  {
  public:
    AWS_IOTDEVICEADVISOR_API UpdateSuiteDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSuiteDefinition"; }

    AWS_IOTDEVICEADVISOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Suite definition ID of the test suite to be updated.</p>
     */
    inline const Aws::String& GetSuiteDefinitionId() const { return m_suiteDefinitionId; }
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }
    template<typename SuiteDefinitionIdT = Aws::String>
    void SetSuiteDefinitionId(SuiteDefinitionIdT&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::forward<SuiteDefinitionIdT>(value); }
    template<typename SuiteDefinitionIdT = Aws::String>
    UpdateSuiteDefinitionRequest& WithSuiteDefinitionId(SuiteDefinitionIdT&& value) { SetSuiteDefinitionId(std::forward<SuiteDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates a Device Advisor test suite with suite definition configuration.</p>
     */
    inline const SuiteDefinitionConfiguration& GetSuiteDefinitionConfiguration() const { return m_suiteDefinitionConfiguration; }
    inline bool SuiteDefinitionConfigurationHasBeenSet() const { return m_suiteDefinitionConfigurationHasBeenSet; }
    template<typename SuiteDefinitionConfigurationT = SuiteDefinitionConfiguration>
    void SetSuiteDefinitionConfiguration(SuiteDefinitionConfigurationT&& value) { m_suiteDefinitionConfigurationHasBeenSet = true; m_suiteDefinitionConfiguration = std::forward<SuiteDefinitionConfigurationT>(value); }
    template<typename SuiteDefinitionConfigurationT = SuiteDefinitionConfiguration>
    UpdateSuiteDefinitionRequest& WithSuiteDefinitionConfiguration(SuiteDefinitionConfigurationT&& value) { SetSuiteDefinitionConfiguration(std::forward<SuiteDefinitionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_suiteDefinitionId;
    bool m_suiteDefinitionIdHasBeenSet = false;

    SuiteDefinitionConfiguration m_suiteDefinitionConfiguration;
    bool m_suiteDefinitionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDeviceAdvisor
} // namespace Aws
