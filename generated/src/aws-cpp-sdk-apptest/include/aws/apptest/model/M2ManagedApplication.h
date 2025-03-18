/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/M2ManagedRuntime.h>
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
   * <p>Specifies the AWS Mainframe Modernization managed application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/M2ManagedApplication">AWS
   * API Reference</a></p>
   */
  class M2ManagedApplication
  {
  public:
    AWS_APPTEST_API M2ManagedApplication() = default;
    AWS_APPTEST_API M2ManagedApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2ManagedApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID of the AWS Mainframe Modernization managed
     * application.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    M2ManagedApplication& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime of the AWS Mainframe Modernization managed application.</p>
     */
    inline M2ManagedRuntime GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(M2ManagedRuntime value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline M2ManagedApplication& WithRuntime(M2ManagedRuntime value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint service name of the AWS Mainframe Modernization managed
     * application.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const { return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    template<typename VpcEndpointServiceNameT = Aws::String>
    void SetVpcEndpointServiceName(VpcEndpointServiceNameT&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::forward<VpcEndpointServiceNameT>(value); }
    template<typename VpcEndpointServiceNameT = Aws::String>
    M2ManagedApplication& WithVpcEndpointServiceName(VpcEndpointServiceNameT&& value) { SetVpcEndpointServiceName(std::forward<VpcEndpointServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port of the AWS Mainframe Modernization managed application.</p>
     */
    inline const Aws::String& GetListenerPort() const { return m_listenerPort; }
    inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }
    template<typename ListenerPortT = Aws::String>
    void SetListenerPort(ListenerPortT&& value) { m_listenerPortHasBeenSet = true; m_listenerPort = std::forward<ListenerPortT>(value); }
    template<typename ListenerPortT = Aws::String>
    M2ManagedApplication& WithListenerPort(ListenerPortT&& value) { SetListenerPort(std::forward<ListenerPortT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    M2ManagedRuntime m_runtime{M2ManagedRuntime::NOT_SET};
    bool m_runtimeHasBeenSet = false;

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;

    Aws::String m_listenerPort;
    bool m_listenerPortHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
