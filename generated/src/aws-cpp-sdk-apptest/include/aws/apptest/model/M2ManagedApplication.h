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
    AWS_APPTEST_API M2ManagedApplication();
    AWS_APPTEST_API M2ManagedApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2ManagedApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application ID of the AWS Mainframe Modernization managed
     * application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline M2ManagedApplication& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline M2ManagedApplication& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline M2ManagedApplication& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime of the AWS Mainframe Modernization managed application.</p>
     */
    inline const M2ManagedRuntime& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const M2ManagedRuntime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(M2ManagedRuntime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline M2ManagedApplication& WithRuntime(const M2ManagedRuntime& value) { SetRuntime(value); return *this;}
    inline M2ManagedApplication& WithRuntime(M2ManagedRuntime&& value) { SetRuntime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint service name of the AWS Mainframe Modernization managed
     * application.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const{ return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    inline void SetVpcEndpointServiceName(const Aws::String& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = value; }
    inline void SetVpcEndpointServiceName(Aws::String&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::move(value); }
    inline void SetVpcEndpointServiceName(const char* value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName.assign(value); }
    inline M2ManagedApplication& WithVpcEndpointServiceName(const Aws::String& value) { SetVpcEndpointServiceName(value); return *this;}
    inline M2ManagedApplication& WithVpcEndpointServiceName(Aws::String&& value) { SetVpcEndpointServiceName(std::move(value)); return *this;}
    inline M2ManagedApplication& WithVpcEndpointServiceName(const char* value) { SetVpcEndpointServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port of the AWS Mainframe Modernization managed application.</p>
     */
    inline const Aws::String& GetListenerPort() const{ return m_listenerPort; }
    inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }
    inline void SetListenerPort(const Aws::String& value) { m_listenerPortHasBeenSet = true; m_listenerPort = value; }
    inline void SetListenerPort(Aws::String&& value) { m_listenerPortHasBeenSet = true; m_listenerPort = std::move(value); }
    inline void SetListenerPort(const char* value) { m_listenerPortHasBeenSet = true; m_listenerPort.assign(value); }
    inline M2ManagedApplication& WithListenerPort(const Aws::String& value) { SetListenerPort(value); return *this;}
    inline M2ManagedApplication& WithListenerPort(Aws::String&& value) { SetListenerPort(std::move(value)); return *this;}
    inline M2ManagedApplication& WithListenerPort(const char* value) { SetListenerPort(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    M2ManagedRuntime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;

    Aws::String m_listenerPort;
    bool m_listenerPortHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
