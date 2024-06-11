﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class DeleteVpcIngressConnectionRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API DeleteVpcIngressConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcIngressConnection"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the App Runner VPC Ingress Connection that
     * you want to delete.</p>
     */
    inline const Aws::String& GetVpcIngressConnectionArn() const{ return m_vpcIngressConnectionArn; }
    inline bool VpcIngressConnectionArnHasBeenSet() const { return m_vpcIngressConnectionArnHasBeenSet; }
    inline void SetVpcIngressConnectionArn(const Aws::String& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = value; }
    inline void SetVpcIngressConnectionArn(Aws::String&& value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn = std::move(value); }
    inline void SetVpcIngressConnectionArn(const char* value) { m_vpcIngressConnectionArnHasBeenSet = true; m_vpcIngressConnectionArn.assign(value); }
    inline DeleteVpcIngressConnectionRequest& WithVpcIngressConnectionArn(const Aws::String& value) { SetVpcIngressConnectionArn(value); return *this;}
    inline DeleteVpcIngressConnectionRequest& WithVpcIngressConnectionArn(Aws::String&& value) { SetVpcIngressConnectionArn(std::move(value)); return *this;}
    inline DeleteVpcIngressConnectionRequest& WithVpcIngressConnectionArn(const char* value) { SetVpcIngressConnectionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_vpcIngressConnectionArn;
    bool m_vpcIngressConnectionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
