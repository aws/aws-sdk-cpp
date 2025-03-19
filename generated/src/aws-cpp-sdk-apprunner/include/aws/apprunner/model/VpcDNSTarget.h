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
    AWS_APPRUNNER_API VpcDNSTarget() = default;
    AWS_APPRUNNER_API VpcDNSTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API VpcDNSTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection that is
     * associated with your service.</p>
     */
    inline const Aws::String& GetVpcIngressConnectionArn() const { return m_vpcIngressConnectionArn; }
    inline bool VpcIngressConnectionArnHasBeenSet() const { return m_vpcIngressConnectionArnHasBeenSet; }
    template<typename VpcIngressConnectionArnT = Aws::String>
    void SetVpcIngressConnectionArn(VpcIngressConnectionArnT&& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = std::forward<VpcIngressConnectionArnT>(value); }
    template<typename VpcIngressConnectionArnT = Aws::String>
    VpcDNSTarget& WithVpcIngressConnectionArn(VpcIngressConnectionArnT&& value) { SetVpcIngressConnectionArn(std::forward<VpcIngressConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon VPC that is associated with the custom domain name of
     * the target DNS.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    VpcDNSTarget& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of your target DNS that is associated with the Amazon
     * VPC.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    VpcDNSTarget& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}
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
