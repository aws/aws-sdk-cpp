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
    AWS_IOTDEVICEADVISOR_API UpdateSuiteDefinitionRequest();

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
    inline const Aws::String& GetSuiteDefinitionId() const{ return m_suiteDefinitionId; }
    inline bool SuiteDefinitionIdHasBeenSet() const { return m_suiteDefinitionIdHasBeenSet; }
    inline void SetSuiteDefinitionId(const Aws::String& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = value; }
    inline void SetSuiteDefinitionId(Aws::String&& value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId = std::move(value); }
    inline void SetSuiteDefinitionId(const char* value) { m_suiteDefinitionIdHasBeenSet = true; m_suiteDefinitionId.assign(value); }
    inline UpdateSuiteDefinitionRequest& WithSuiteDefinitionId(const Aws::String& value) { SetSuiteDefinitionId(value); return *this;}
    inline UpdateSuiteDefinitionRequest& WithSuiteDefinitionId(Aws::String&& value) { SetSuiteDefinitionId(std::move(value)); return *this;}
    inline UpdateSuiteDefinitionRequest& WithSuiteDefinitionId(const char* value) { SetSuiteDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Updates a Device Advisor test suite with suite definition configuration.</p>
     */
    inline const SuiteDefinitionConfiguration& GetSuiteDefinitionConfiguration() const{ return m_suiteDefinitionConfiguration; }
    inline bool SuiteDefinitionConfigurationHasBeenSet() const { return m_suiteDefinitionConfigurationHasBeenSet; }
    inline void SetSuiteDefinitionConfiguration(const SuiteDefinitionConfiguration& value) { m_suiteDefinitionConfigurationHasBeenSet = true; m_suiteDefinitionConfiguration = value; }
    inline void SetSuiteDefinitionConfiguration(SuiteDefinitionConfiguration&& value) { m_suiteDefinitionConfigurationHasBeenSet = true; m_suiteDefinitionConfiguration = std::move(value); }
    inline UpdateSuiteDefinitionRequest& WithSuiteDefinitionConfiguration(const SuiteDefinitionConfiguration& value) { SetSuiteDefinitionConfiguration(value); return *this;}
    inline UpdateSuiteDefinitionRequest& WithSuiteDefinitionConfiguration(SuiteDefinitionConfiguration&& value) { SetSuiteDefinitionConfiguration(std::move(value)); return *this;}
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
