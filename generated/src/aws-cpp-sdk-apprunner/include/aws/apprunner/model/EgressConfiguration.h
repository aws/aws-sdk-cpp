/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/EgressType.h>
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
   * <p>Describes configuration settings related to outbound network traffic of an
   * App Runner service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/EgressConfiguration">AWS
   * API Reference</a></p>
   */
  class EgressConfiguration
  {
  public:
    AWS_APPRUNNER_API EgressConfiguration();
    AWS_APPRUNNER_API EgressConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API EgressConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of egress configuration.</p> <p>Set to <code>DEFAULT</code> for
     * access to resources hosted on public networks.</p> <p>Set to <code>VPC</code> to
     * associate your service to a custom VPC specified by
     * <code>VpcConnectorArn</code>.</p>
     */
    inline const EgressType& GetEgressType() const{ return m_egressType; }

    /**
     * <p>The type of egress configuration.</p> <p>Set to <code>DEFAULT</code> for
     * access to resources hosted on public networks.</p> <p>Set to <code>VPC</code> to
     * associate your service to a custom VPC specified by
     * <code>VpcConnectorArn</code>.</p>
     */
    inline bool EgressTypeHasBeenSet() const { return m_egressTypeHasBeenSet; }

    /**
     * <p>The type of egress configuration.</p> <p>Set to <code>DEFAULT</code> for
     * access to resources hosted on public networks.</p> <p>Set to <code>VPC</code> to
     * associate your service to a custom VPC specified by
     * <code>VpcConnectorArn</code>.</p>
     */
    inline void SetEgressType(const EgressType& value) { m_egressTypeHasBeenSet = true; m_egressType = value; }

    /**
     * <p>The type of egress configuration.</p> <p>Set to <code>DEFAULT</code> for
     * access to resources hosted on public networks.</p> <p>Set to <code>VPC</code> to
     * associate your service to a custom VPC specified by
     * <code>VpcConnectorArn</code>.</p>
     */
    inline void SetEgressType(EgressType&& value) { m_egressTypeHasBeenSet = true; m_egressType = std::move(value); }

    /**
     * <p>The type of egress configuration.</p> <p>Set to <code>DEFAULT</code> for
     * access to resources hosted on public networks.</p> <p>Set to <code>VPC</code> to
     * associate your service to a custom VPC specified by
     * <code>VpcConnectorArn</code>.</p>
     */
    inline EgressConfiguration& WithEgressType(const EgressType& value) { SetEgressType(value); return *this;}

    /**
     * <p>The type of egress configuration.</p> <p>Set to <code>DEFAULT</code> for
     * access to resources hosted on public networks.</p> <p>Set to <code>VPC</code> to
     * associate your service to a custom VPC specified by
     * <code>VpcConnectorArn</code>.</p>
     */
    inline EgressConfiguration& WithEgressType(EgressType&& value) { SetEgressType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to associate with your App Runner service. Only valid when <code>EgressType =
     * VPC</code>.</p>
     */
    inline const Aws::String& GetVpcConnectorArn() const{ return m_vpcConnectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to associate with your App Runner service. Only valid when <code>EgressType =
     * VPC</code>.</p>
     */
    inline bool VpcConnectorArnHasBeenSet() const { return m_vpcConnectorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to associate with your App Runner service. Only valid when <code>EgressType =
     * VPC</code>.</p>
     */
    inline void SetVpcConnectorArn(const Aws::String& value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to associate with your App Runner service. Only valid when <code>EgressType =
     * VPC</code>.</p>
     */
    inline void SetVpcConnectorArn(Aws::String&& value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to associate with your App Runner service. Only valid when <code>EgressType =
     * VPC</code>.</p>
     */
    inline void SetVpcConnectorArn(const char* value) { m_vpcConnectorArnHasBeenSet = true; m_vpcConnectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to associate with your App Runner service. Only valid when <code>EgressType =
     * VPC</code>.</p>
     */
    inline EgressConfiguration& WithVpcConnectorArn(const Aws::String& value) { SetVpcConnectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to associate with your App Runner service. Only valid when <code>EgressType =
     * VPC</code>.</p>
     */
    inline EgressConfiguration& WithVpcConnectorArn(Aws::String&& value) { SetVpcConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC connector that you want
     * to associate with your App Runner service. Only valid when <code>EgressType =
     * VPC</code>.</p>
     */
    inline EgressConfiguration& WithVpcConnectorArn(const char* value) { SetVpcConnectorArn(value); return *this;}

  private:

    EgressType m_egressType;
    bool m_egressTypeHasBeenSet = false;

    Aws::String m_vpcConnectorArn;
    bool m_vpcConnectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
