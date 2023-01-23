/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class AssociateServiceRoleToAccountRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API AssociateServiceRoleToAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateServiceRoleToAccount"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the service role to associate with IoT
     * Greengrass for your Amazon Web Services account in this Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role to associate with IoT
     * Greengrass for your Amazon Web Services account in this Amazon Web Services
     * Region.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role to associate with IoT
     * Greengrass for your Amazon Web Services account in this Amazon Web Services
     * Region.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role to associate with IoT
     * Greengrass for your Amazon Web Services account in this Amazon Web Services
     * Region.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role to associate with IoT
     * Greengrass for your Amazon Web Services account in this Amazon Web Services
     * Region.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role to associate with IoT
     * Greengrass for your Amazon Web Services account in this Amazon Web Services
     * Region.</p>
     */
    inline AssociateServiceRoleToAccountRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role to associate with IoT
     * Greengrass for your Amazon Web Services account in this Amazon Web Services
     * Region.</p>
     */
    inline AssociateServiceRoleToAccountRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role to associate with IoT
     * Greengrass for your Amazon Web Services account in this Amazon Web Services
     * Region.</p>
     */
    inline AssociateServiceRoleToAccountRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
