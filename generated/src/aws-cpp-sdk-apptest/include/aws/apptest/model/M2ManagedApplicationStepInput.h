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
    AWS_APPTEST_API M2ManagedApplicationStepInput();
    AWS_APPTEST_API M2ManagedApplicationStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2ManagedApplicationStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID of the AWS Mainframe Modernization managed application
     * step input.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline M2ManagedApplicationStepInput& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline M2ManagedApplicationStepInput& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline M2ManagedApplicationStepInput& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime of the AWS Mainframe Modernization managed application step
     * input.</p>
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const Aws::String& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(Aws::String&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline void SetRuntime(const char* value) { m_runtimeHasBeenSet = true; m_runtime.assign(value); }
    inline M2ManagedApplicationStepInput& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}
    inline M2ManagedApplicationStepInput& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}
    inline M2ManagedApplicationStepInput& WithRuntime(const char* value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint service name of the AWS Mainframe Modernization managed
     * application step input.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const{ return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    inline void SetVpcEndpointServiceName(const Aws::String& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = value; }
    inline void SetVpcEndpointServiceName(Aws::String&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::move(value); }
    inline void SetVpcEndpointServiceName(const char* value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName.assign(value); }
    inline M2ManagedApplicationStepInput& WithVpcEndpointServiceName(const Aws::String& value) { SetVpcEndpointServiceName(value); return *this;}
    inline M2ManagedApplicationStepInput& WithVpcEndpointServiceName(Aws::String&& value) { SetVpcEndpointServiceName(std::move(value)); return *this;}
    inline M2ManagedApplicationStepInput& WithVpcEndpointServiceName(const char* value) { SetVpcEndpointServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port of the AWS Mainframe Modernization managed application step
     * input.</p>
     */
    inline int GetListenerPort() const{ return m_listenerPort; }
    inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }
    inline void SetListenerPort(int value) { m_listenerPortHasBeenSet = true; m_listenerPort = value; }
    inline M2ManagedApplicationStepInput& WithListenerPort(int value) { SetListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the AWS Mainframe Modernization managed application step
     * input.</p>
     */
    inline const M2ManagedActionType& GetActionType() const{ return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(const M2ManagedActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline void SetActionType(M2ManagedActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }
    inline M2ManagedApplicationStepInput& WithActionType(const M2ManagedActionType& value) { SetActionType(value); return *this;}
    inline M2ManagedApplicationStepInput& WithActionType(M2ManagedActionType&& value) { SetActionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties of the AWS Mainframe Modernization managed application step
     * input.</p>
     */
    inline const M2ManagedActionProperties& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const M2ManagedActionProperties& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(M2ManagedActionProperties&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline M2ManagedApplicationStepInput& WithProperties(const M2ManagedActionProperties& value) { SetProperties(value); return *this;}
    inline M2ManagedApplicationStepInput& WithProperties(M2ManagedActionProperties&& value) { SetProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;

    int m_listenerPort;
    bool m_listenerPortHasBeenSet = false;

    M2ManagedActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    M2ManagedActionProperties m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
