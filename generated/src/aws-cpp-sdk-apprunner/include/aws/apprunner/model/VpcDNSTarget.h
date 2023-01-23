/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>DNS Target record for a custom domain of this Amazon VPC.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/VpcDNSTarget">AWS
   * API Reference</a></p>
   */
  class VpcDNSTarget
  {
  public:
    AWS_APPRUNNER_API VpcDNSTarget();
    AWS_APPRUNNER_API VpcDNSTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API VpcDNSTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline const Aws::String& GetVpcIngressConnectionArn() const{ return m_vpcIngressConnectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline bool VpcIngressConnectionArnHasBeenSet() const { return m_vpcIngressConnectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline void SetVpcIngressConnectionArn(const Aws::String& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline void SetVpcIngressConnectionArn(Aws::String&& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline void SetVpcIngressConnectionArn(const char* value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline VpcDNSTarget& WithVpcIngressConnectionArn(const Aws::String& value) { SetVpcIngressConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline VpcDNSTarget& WithVpcIngressConnectionArn(Aws::String&& value) { SetVpcIngressConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline VpcDNSTarget& WithVpcIngressConnectionArn(const char* value) { SetVpcIngressConnectionArn(value); return *this;}


    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline VpcDNSTarget& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline VpcDNSTarget& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline VpcDNSTarget& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline VpcDNSTarget& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline VpcDNSTarget& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline VpcDNSTarget& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_vpcIngressConnectionArn;
    bool m_vpcIngressConnectionArnHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
