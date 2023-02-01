/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IntegrateServices.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class GetFlowLogsIntegrationTemplateRequest : public EC2Request
  {
  public:
    AWS_EC2_API GetFlowLogsIntegrationTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFlowLogsIntegrationTemplate"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline GetFlowLogsIntegrationTemplateRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the flow log.</p>
     */
    inline const Aws::String& GetFlowLogId() const{ return m_flowLogId; }

    /**
     * <p>The ID of the flow log.</p>
     */
    inline bool FlowLogIdHasBeenSet() const { return m_flowLogIdHasBeenSet; }

    /**
     * <p>The ID of the flow log.</p>
     */
    inline void SetFlowLogId(const Aws::String& value) { m_flowLogIdHasBeenSet = true; m_flowLogId = value; }

    /**
     * <p>The ID of the flow log.</p>
     */
    inline void SetFlowLogId(Aws::String&& value) { m_flowLogIdHasBeenSet = true; m_flowLogId = std::move(value); }

    /**
     * <p>The ID of the flow log.</p>
     */
    inline void SetFlowLogId(const char* value) { m_flowLogIdHasBeenSet = true; m_flowLogId.assign(value); }

    /**
     * <p>The ID of the flow log.</p>
     */
    inline GetFlowLogsIntegrationTemplateRequest& WithFlowLogId(const Aws::String& value) { SetFlowLogId(value); return *this;}

    /**
     * <p>The ID of the flow log.</p>
     */
    inline GetFlowLogsIntegrationTemplateRequest& WithFlowLogId(Aws::String&& value) { SetFlowLogId(std::move(value)); return *this;}

    /**
     * <p>The ID of the flow log.</p>
     */
    inline GetFlowLogsIntegrationTemplateRequest& WithFlowLogId(const char* value) { SetFlowLogId(value); return *this;}


    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline const Aws::String& GetConfigDeliveryS3DestinationArn() const{ return m_configDeliveryS3DestinationArn; }

    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline bool ConfigDeliveryS3DestinationArnHasBeenSet() const { return m_configDeliveryS3DestinationArnHasBeenSet; }

    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline void SetConfigDeliveryS3DestinationArn(const Aws::String& value) { m_configDeliveryS3DestinationArnHasBeenSet = true; m_configDeliveryS3DestinationArn = value; }

    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline void SetConfigDeliveryS3DestinationArn(Aws::String&& value) { m_configDeliveryS3DestinationArnHasBeenSet = true; m_configDeliveryS3DestinationArn = std::move(value); }

    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline void SetConfigDeliveryS3DestinationArn(const char* value) { m_configDeliveryS3DestinationArnHasBeenSet = true; m_configDeliveryS3DestinationArn.assign(value); }

    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline GetFlowLogsIntegrationTemplateRequest& WithConfigDeliveryS3DestinationArn(const Aws::String& value) { SetConfigDeliveryS3DestinationArn(value); return *this;}

    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline GetFlowLogsIntegrationTemplateRequest& WithConfigDeliveryS3DestinationArn(Aws::String&& value) { SetConfigDeliveryS3DestinationArn(std::move(value)); return *this;}

    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline GetFlowLogsIntegrationTemplateRequest& WithConfigDeliveryS3DestinationArn(const char* value) { SetConfigDeliveryS3DestinationArn(value); return *this;}


    /**
     * <p>Information about the service integration.</p>
     */
    inline const IntegrateServices& GetIntegrateServices() const{ return m_integrateServices; }

    /**
     * <p>Information about the service integration.</p>
     */
    inline bool IntegrateServicesHasBeenSet() const { return m_integrateServicesHasBeenSet; }

    /**
     * <p>Information about the service integration.</p>
     */
    inline void SetIntegrateServices(const IntegrateServices& value) { m_integrateServicesHasBeenSet = true; m_integrateServices = value; }

    /**
     * <p>Information about the service integration.</p>
     */
    inline void SetIntegrateServices(IntegrateServices&& value) { m_integrateServicesHasBeenSet = true; m_integrateServices = std::move(value); }

    /**
     * <p>Information about the service integration.</p>
     */
    inline GetFlowLogsIntegrationTemplateRequest& WithIntegrateServices(const IntegrateServices& value) { SetIntegrateServices(value); return *this;}

    /**
     * <p>Information about the service integration.</p>
     */
    inline GetFlowLogsIntegrationTemplateRequest& WithIntegrateServices(IntegrateServices&& value) { SetIntegrateServices(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_flowLogId;
    bool m_flowLogIdHasBeenSet = false;

    Aws::String m_configDeliveryS3DestinationArn;
    bool m_configDeliveryS3DestinationArnHasBeenSet = false;

    IntegrateServices m_integrateServices;
    bool m_integrateServicesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
