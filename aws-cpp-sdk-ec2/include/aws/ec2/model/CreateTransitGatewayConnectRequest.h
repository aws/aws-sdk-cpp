/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/CreateTransitGatewayConnectRequestOptions.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateTransitGatewayConnectRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateTransitGatewayConnectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTransitGatewayConnect"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the transit gateway attachment. You can specify a VPC attachment or
     * Amazon Web Services Direct Connect attachment.</p>
     */
    inline const Aws::String& GetTransportTransitGatewayAttachmentId() const{ return m_transportTransitGatewayAttachmentId; }

    /**
     * <p>The ID of the transit gateway attachment. You can specify a VPC attachment or
     * Amazon Web Services Direct Connect attachment.</p>
     */
    inline bool TransportTransitGatewayAttachmentIdHasBeenSet() const { return m_transportTransitGatewayAttachmentIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway attachment. You can specify a VPC attachment or
     * Amazon Web Services Direct Connect attachment.</p>
     */
    inline void SetTransportTransitGatewayAttachmentId(const Aws::String& value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId = value; }

    /**
     * <p>The ID of the transit gateway attachment. You can specify a VPC attachment or
     * Amazon Web Services Direct Connect attachment.</p>
     */
    inline void SetTransportTransitGatewayAttachmentId(Aws::String&& value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId = std::move(value); }

    /**
     * <p>The ID of the transit gateway attachment. You can specify a VPC attachment or
     * Amazon Web Services Direct Connect attachment.</p>
     */
    inline void SetTransportTransitGatewayAttachmentId(const char* value) { m_transportTransitGatewayAttachmentIdHasBeenSet = true; m_transportTransitGatewayAttachmentId.assign(value); }

    /**
     * <p>The ID of the transit gateway attachment. You can specify a VPC attachment or
     * Amazon Web Services Direct Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectRequest& WithTransportTransitGatewayAttachmentId(const Aws::String& value) { SetTransportTransitGatewayAttachmentId(value); return *this;}

    /**
     * <p>The ID of the transit gateway attachment. You can specify a VPC attachment or
     * Amazon Web Services Direct Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectRequest& WithTransportTransitGatewayAttachmentId(Aws::String&& value) { SetTransportTransitGatewayAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway attachment. You can specify a VPC attachment or
     * Amazon Web Services Direct Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectRequest& WithTransportTransitGatewayAttachmentId(const char* value) { SetTransportTransitGatewayAttachmentId(value); return *this;}


    /**
     * <p>The Connect attachment options.</p>
     */
    inline const CreateTransitGatewayConnectRequestOptions& GetOptions() const{ return m_options; }

    /**
     * <p>The Connect attachment options.</p>
     */
    inline bool OptionsHasBeenSet() const { return m_optionsHasBeenSet; }

    /**
     * <p>The Connect attachment options.</p>
     */
    inline void SetOptions(const CreateTransitGatewayConnectRequestOptions& value) { m_optionsHasBeenSet = true; m_options = value; }

    /**
     * <p>The Connect attachment options.</p>
     */
    inline void SetOptions(CreateTransitGatewayConnectRequestOptions&& value) { m_optionsHasBeenSet = true; m_options = std::move(value); }

    /**
     * <p>The Connect attachment options.</p>
     */
    inline CreateTransitGatewayConnectRequest& WithOptions(const CreateTransitGatewayConnectRequestOptions& value) { SetOptions(value); return *this;}

    /**
     * <p>The Connect attachment options.</p>
     */
    inline CreateTransitGatewayConnectRequest& WithOptions(CreateTransitGatewayConnectRequestOptions&& value) { SetOptions(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the Connect attachment.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to apply to the Connect attachment.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to apply to the Connect attachment.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to apply to the Connect attachment.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to apply to the Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to apply to the Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the Connect attachment.</p>
     */
    inline CreateTransitGatewayConnectRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateTransitGatewayConnectRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_transportTransitGatewayAttachmentId;
    bool m_transportTransitGatewayAttachmentIdHasBeenSet = false;

    CreateTransitGatewayConnectRequestOptions m_options;
    bool m_optionsHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
