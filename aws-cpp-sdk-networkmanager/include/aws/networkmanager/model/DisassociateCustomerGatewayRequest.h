/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class AWS_NETWORKMANAGER_API DisassociateCustomerGatewayRequest : public NetworkManagerRequest
  {
  public:
    DisassociateCustomerGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateCustomerGateway"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline DisassociateCustomerGatewayRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline DisassociateCustomerGatewayRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline DisassociateCustomerGatewayRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazonec2.html#amazonec2-resources-for-iam-policies">Resources
     * Defined by Amazon EC2</a>.</p>
     */
    inline const Aws::String& GetCustomerGatewayArn() const{ return m_customerGatewayArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazonec2.html#amazonec2-resources-for-iam-policies">Resources
     * Defined by Amazon EC2</a>.</p>
     */
    inline bool CustomerGatewayArnHasBeenSet() const { return m_customerGatewayArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazonec2.html#amazonec2-resources-for-iam-policies">Resources
     * Defined by Amazon EC2</a>.</p>
     */
    inline void SetCustomerGatewayArn(const Aws::String& value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazonec2.html#amazonec2-resources-for-iam-policies">Resources
     * Defined by Amazon EC2</a>.</p>
     */
    inline void SetCustomerGatewayArn(Aws::String&& value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazonec2.html#amazonec2-resources-for-iam-policies">Resources
     * Defined by Amazon EC2</a>.</p>
     */
    inline void SetCustomerGatewayArn(const char* value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazonec2.html#amazonec2-resources-for-iam-policies">Resources
     * Defined by Amazon EC2</a>.</p>
     */
    inline DisassociateCustomerGatewayRequest& WithCustomerGatewayArn(const Aws::String& value) { SetCustomerGatewayArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazonec2.html#amazonec2-resources-for-iam-policies">Resources
     * Defined by Amazon EC2</a>.</p>
     */
    inline DisassociateCustomerGatewayRequest& WithCustomerGatewayArn(Aws::String&& value) { SetCustomerGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/list_amazonec2.html#amazonec2-resources-for-iam-policies">Resources
     * Defined by Amazon EC2</a>.</p>
     */
    inline DisassociateCustomerGatewayRequest& WithCustomerGatewayArn(const char* value) { SetCustomerGatewayArn(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet;

    Aws::String m_customerGatewayArn;
    bool m_customerGatewayArnHasBeenSet;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
