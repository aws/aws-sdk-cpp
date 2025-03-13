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
   * <p>Provides summary information about an VPC Ingress Connection, which includes
   * its VPC Ingress Connection ARN and its associated Service ARN.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/VpcIngressConnectionSummary">AWS
   * API Reference</a></p>
   */
  class VpcIngressConnectionSummary
  {
  public:
    AWS_APPRUNNER_API VpcIngressConnectionSummary() = default;
    AWS_APPRUNNER_API VpcIngressConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API VpcIngressConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline const Aws::String& GetVpcIngressConnectionArn() const { return m_vpcIngressConnectionArn; }
    inline bool VpcIngressConnectionArnHasBeenSet() const { return m_vpcIngressConnectionArnHasBeenSet; }
    template<typename VpcIngressConnectionArnT = Aws::String>
    void SetVpcIngressConnectionArn(VpcIngressConnectionArnT&& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = std::forward<VpcIngressConnectionArnT>(value); }
    template<typename VpcIngressConnectionArnT = Aws::String>
    VpcIngressConnectionSummary& WithVpcIngressConnectionArn(VpcIngressConnectionArnT&& value) { SetVpcIngressConnectionArn(std::forward<VpcIngressConnectionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    VpcIngressConnectionSummary& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpcIngressConnectionArn;
    bool m_vpcIngressConnectionArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
