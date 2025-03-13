/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/M2ManagedActionType.h>
#include <aws/apptest/model/M2ManagedActionProperties.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the AWS Mainframe Modernization managed application step
   * input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/M2ManagedApplicationStepInput">AWS
   * API Reference</a></p>
   */
  class M2ManagedApplicationStepInput
  {
  public:
    AWS_APPTEST_API M2ManagedApplicationStepInput() = default;
    AWS_APPTEST_API M2ManagedApplicationStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2ManagedApplicationStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID of the AWS Mainframe Modernization managed application
     * step input.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    M2ManagedApplicationStepInput& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime of the AWS Mainframe Modernization managed application step
     * input.</p>
     */
    inline const Aws::String& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = Aws::String>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = Aws::String>
    M2ManagedApplicationStepInput& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint service name of the AWS Mainframe Modernization managed
     * application step input.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const { return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    template<typename VpcEndpointServiceNameT = Aws::String>
    void SetVpcEndpointServiceName(VpcEndpointServiceNameT&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::forward<VpcEndpointServiceNameT>(value); }
    template<typename VpcEndpointServiceNameT = Aws::String>
    M2ManagedApplicationStepInput& WithVpcEndpointServiceName(VpcEndpointServiceNameT&& value) { SetVpcEndpointServiceName(std::forward<VpcEndpointServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port of the AWS Mainframe Modernization managed application step
     * input.</p>
     */
    inline int GetListenerPort() const { return m_listenerPort; }
    inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }
    inline void SetListenerPort(int value) { m_listenerPortHasBeenSet = true; m_listenerPort = value; }
    inline M2ManagedApplicationStepInput& WithListenerPort(int value) { SetListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the AWS Mainframe Modernization managed application step
     * input.</p>
     */
    inline M2ManagedActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(M2ManagedActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline M2ManagedApplicationStepInput& WithActionType(M2ManagedActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the AWS Mainframe Modernization managed application step
     * input.</p>
     */
    inline const M2ManagedActionProperties& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = M2ManagedActionProperties>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = M2ManagedActionProperties>
    M2ManagedApplicationStepInput& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;

    int m_listenerPort{0};
    bool m_listenerPortHasBeenSet = false;

    M2ManagedActionType m_actionType{M2ManagedActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;

    M2ManagedActionProperties m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
