/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/BillingMethod.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Configuration settings for a remote access session, including billing
   * method.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/CreateRemoteAccessSessionConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateRemoteAccessSessionConfiguration
  {
  public:
    AWS_DEVICEFARM_API CreateRemoteAccessSessionConfiguration();
    AWS_DEVICEFARM_API CreateRemoteAccessSessionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API CreateRemoteAccessSessionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The billing method for the remote access session.</p>
     */
    inline const BillingMethod& GetBillingMethod() const{ return m_billingMethod; }

    /**
     * <p>The billing method for the remote access session.</p>
     */
    inline bool BillingMethodHasBeenSet() const { return m_billingMethodHasBeenSet; }

    /**
     * <p>The billing method for the remote access session.</p>
     */
    inline void SetBillingMethod(const BillingMethod& value) { m_billingMethodHasBeenSet = true; m_billingMethod = value; }

    /**
     * <p>The billing method for the remote access session.</p>
     */
    inline void SetBillingMethod(BillingMethod&& value) { m_billingMethodHasBeenSet = true; m_billingMethod = std::move(value); }

    /**
     * <p>The billing method for the remote access session.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& WithBillingMethod(const BillingMethod& value) { SetBillingMethod(value); return *this;}

    /**
     * <p>The billing method for the remote access session.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& WithBillingMethod(BillingMethod&& value) { SetBillingMethod(std::move(value)); return *this;}


    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpceConfigurationArns() const{ return m_vpceConfigurationArns; }

    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline bool VpceConfigurationArnsHasBeenSet() const { return m_vpceConfigurationArnsHasBeenSet; }

    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline void SetVpceConfigurationArns(const Aws::Vector<Aws::String>& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns = value; }

    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline void SetVpceConfigurationArns(Aws::Vector<Aws::String>&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns = std::move(value); }

    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& WithVpceConfigurationArns(const Aws::Vector<Aws::String>& value) { SetVpceConfigurationArns(value); return *this;}

    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& WithVpceConfigurationArns(Aws::Vector<Aws::String>&& value) { SetVpceConfigurationArns(std::move(value)); return *this;}

    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& AddVpceConfigurationArns(const Aws::String& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(value); return *this; }

    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& AddVpceConfigurationArns(Aws::String&& value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of ARNs included in the VPC endpoint configuration.</p>
     */
    inline CreateRemoteAccessSessionConfiguration& AddVpceConfigurationArns(const char* value) { m_vpceConfigurationArnsHasBeenSet = true; m_vpceConfigurationArns.push_back(value); return *this; }

  private:

    BillingMethod m_billingMethod;
    bool m_billingMethodHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpceConfigurationArns;
    bool m_vpceConfigurationArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
