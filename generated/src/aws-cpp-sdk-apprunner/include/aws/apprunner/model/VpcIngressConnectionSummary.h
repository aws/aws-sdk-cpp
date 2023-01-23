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
    AWS_APPRUNNER_API VpcIngressConnectionSummary();
    AWS_APPRUNNER_API VpcIngressConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API VpcIngressConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline const Aws::String& GetVpcIngressConnectionArn() const{ return m_vpcIngressConnectionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline bool VpcIngressConnectionArnHasBeenSet() const { return m_vpcIngressConnectionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline void SetVpcIngressConnectionArn(const Aws::String& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline void SetVpcIngressConnectionArn(Aws::String&& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline void SetVpcIngressConnectionArn(const char* value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline VpcIngressConnectionSummary& WithVpcIngressConnectionArn(const Aws::String& value) { SetVpcIngressConnectionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline VpcIngressConnectionSummary& WithVpcIngressConnectionArn(Aws::String&& value) { SetVpcIngressConnectionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the VPC Ingress Connection. </p>
     */
    inline VpcIngressConnectionSummary& WithVpcIngressConnectionArn(const char* value) { SetVpcIngressConnectionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline VpcIngressConnectionSummary& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline VpcIngressConnectionSummary& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service associated with the VPC Ingress
     * Connection. </p>
     */
    inline VpcIngressConnectionSummary& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}

  private:

    Aws::String m_vpcIngressConnectionArn;
    bool m_vpcIngressConnectionArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
