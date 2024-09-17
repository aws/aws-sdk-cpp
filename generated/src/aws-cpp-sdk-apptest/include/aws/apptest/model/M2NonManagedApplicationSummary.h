/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/M2NonManagedRuntime.h>
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
   * <p>Specifies the AWS Mainframe Modernization non-managed application
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/M2NonManagedApplicationSummary">AWS
   * API Reference</a></p>
   */
  class M2NonManagedApplicationSummary
  {
  public:
    AWS_APPTEST_API M2NonManagedApplicationSummary();
    AWS_APPTEST_API M2NonManagedApplicationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API M2NonManagedApplicationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VPC endpoint service name of the AWS Mainframe Modernization non-managed
     * application summary.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const{ return m_vpcEndpointServiceName; }
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }
    inline void SetVpcEndpointServiceName(const Aws::String& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = value; }
    inline void SetVpcEndpointServiceName(Aws::String&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::move(value); }
    inline void SetVpcEndpointServiceName(const char* value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName.assign(value); }
    inline M2NonManagedApplicationSummary& WithVpcEndpointServiceName(const Aws::String& value) { SetVpcEndpointServiceName(value); return *this;}
    inline M2NonManagedApplicationSummary& WithVpcEndpointServiceName(Aws::String&& value) { SetVpcEndpointServiceName(std::move(value)); return *this;}
    inline M2NonManagedApplicationSummary& WithVpcEndpointServiceName(const char* value) { SetVpcEndpointServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listener port of the AWS Mainframe Modernization non-managed application
     * summary.</p>
     */
    inline int GetListenerPort() const{ return m_listenerPort; }
    inline bool ListenerPortHasBeenSet() const { return m_listenerPortHasBeenSet; }
    inline void SetListenerPort(int value) { m_listenerPortHasBeenSet = true; m_listenerPort = value; }
    inline M2NonManagedApplicationSummary& WithListenerPort(int value) { SetListenerPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime of the AWS Mainframe Modernization non-managed application
     * summary.</p>
     */
    inline const M2NonManagedRuntime& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const M2NonManagedRuntime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(M2NonManagedRuntime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline M2NonManagedApplicationSummary& WithRuntime(const M2NonManagedRuntime& value) { SetRuntime(value); return *this;}
    inline M2NonManagedApplicationSummary& WithRuntime(M2NonManagedRuntime&& value) { SetRuntime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The web application name of the AWS Mainframe Modernization non-managed
     * application summary.</p>
     */
    inline const Aws::String& GetWebAppName() const{ return m_webAppName; }
    inline bool WebAppNameHasBeenSet() const { return m_webAppNameHasBeenSet; }
    inline void SetWebAppName(const Aws::String& value) { m_webAppNameHasBeenSet = true; m_webAppName = value; }
    inline void SetWebAppName(Aws::String&& value) { m_webAppNameHasBeenSet = true; m_webAppName = std::move(value); }
    inline void SetWebAppName(const char* value) { m_webAppNameHasBeenSet = true; m_webAppName.assign(value); }
    inline M2NonManagedApplicationSummary& WithWebAppName(const Aws::String& value) { SetWebAppName(value); return *this;}
    inline M2NonManagedApplicationSummary& WithWebAppName(Aws::String&& value) { SetWebAppName(std::move(value)); return *this;}
    inline M2NonManagedApplicationSummary& WithWebAppName(const char* value) { SetWebAppName(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet = false;

    int m_listenerPort;
    bool m_listenerPortHasBeenSet = false;

    M2NonManagedRuntime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_webAppName;
    bool m_webAppNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
