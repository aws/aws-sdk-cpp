/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/M2NonManagedRuntime.h>
#include <aws/apptest/model/M2NonManagedActionType.h>
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
   * <p>Specifies the AWS Mainframe Modernization non-managed application step
   * input.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/M2NonManagedApplicationStepInput">AWS
   * API Reference</a></p>
   */
  class M2NonManagedApplicationStepInput
  {
  public:
    AWS_APPTEST_API M2NonManagedApplicationStepInput() = default;
    AWS_APPTEST_API M2NonManagedApplicationStepInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2NonManagedApplicationStepInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VPC endpoint service name of the AWS Mainframe Modernization non-managed
     * application step input.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const { return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    template<typename VpcEndpointServiceNameT = Aws::String>
    void SetVpcEndpointServiceName(VpcEndpointServiceNameT&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::forward<VpcEndpointServiceNameT>(value); }
    template<typename VpcEndpointServiceNameT = Aws::String>
    M2NonManagedApplicationStepInput& WithVpcEndpointServiceName(VpcEndpointServiceNameT&& value) { SetVpcEndpointServiceName(std::forward<VpcEndpointServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port of the AWS Mainframe Modernization non-managed application
     * step input.</p>
     */
    inline int GetListenerPort() const { return m_listenerPort; }
    inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }
    inline void SetListenerPort(int value) { m_listenerPortHasBeenSet = true; m_listenerPort = value; }
    inline M2NonManagedApplicationStepInput& WithListenerPort(int value) { SetListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime of the AWS Mainframe Modernization non-managed application step
     * input.</p>
     */
    inline M2NonManagedRuntime GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(M2NonManagedRuntime value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline M2NonManagedApplicationStepInput& WithRuntime(M2NonManagedRuntime value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web app name of the AWS Mainframe Modernization non-managed application
     * step input.</p>
     */
    inline const Aws::String& GetWebAppName() const { return m_webAppName; }
    inline bool WebAppNameHasBeenSet() const { return m_webAppNameHasBeenSet; }
    template<typename WebAppNameT = Aws::String>
    void SetWebAppName(WebAppNameT&& value) { m_webAppNameHasBeenSet = true; m_webAppName = std::forward<WebAppNameT>(value); }
    template<typename WebAppNameT = Aws::String>
    M2NonManagedApplicationStepInput& WithWebAppName(WebAppNameT&& value) { SetWebAppName(std::forward<WebAppNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action type of the AWS Mainframe Modernization non-managed application
     * step input.</p>
     */
    inline M2NonManagedActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(M2NonManagedActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline M2NonManagedApplicationStepInput& WithActionType(M2NonManagedActionType value) { SetActionType(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;

    int m_listenerPort{0};
    bool m_listenerPortHasBeenSet = false;

    M2NonManagedRuntime m_runtime{M2NonManagedRuntime::NOT_SET};
    bool m_runtimeHasBeenSet = false;

    Aws::String m_webAppName;
    bool m_webAppNameHasBeenSet = false;

    M2NonManagedActionType m_actionType{M2NonManagedActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
