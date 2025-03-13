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
    AWS_EC2_API GetFlowLogsIntegrationTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFlowLogsIntegrationTemplate"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline GetFlowLogsIntegrationTemplateRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the flow log.</p>
     */
    inline const Aws::String& GetFlowLogId() const { return m_flowLogId; }
    inline bool FlowLogIdHasBeenSet() const { return m_flowLogIdHasBeenSet; }
    template<typename FlowLogIdT = Aws::String>
    void SetFlowLogId(FlowLogIdT&& value) { m_flowLogIdHasBeenSet = true; m_flowLogId = std::forward<FlowLogIdT>(value); }
    template<typename FlowLogIdT = Aws::String>
    GetFlowLogsIntegrationTemplateRequest& WithFlowLogId(FlowLogIdT&& value) { SetFlowLogId(std::forward<FlowLogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To store the CloudFormation template in Amazon S3, specify the location in
     * Amazon S3.</p>
     */
    inline const Aws::String& GetConfigDeliveryS3DestinationArn() const { return m_configDeliveryS3DestinationArn; }
    inline bool ConfigDeliveryS3DestinationArnHasBeenSet() const { return m_configDeliveryS3DestinationArnHasBeenSet; }
    template<typename ConfigDeliveryS3DestinationArnT = Aws::String>
    void SetConfigDeliveryS3DestinationArn(ConfigDeliveryS3DestinationArnT&& value) { m_configDeliveryS3DestinationArnHasBeenSet = true; m_configDeliveryS3DestinationArn = std::forward<ConfigDeliveryS3DestinationArnT>(value); }
    template<typename ConfigDeliveryS3DestinationArnT = Aws::String>
    GetFlowLogsIntegrationTemplateRequest& WithConfigDeliveryS3DestinationArn(ConfigDeliveryS3DestinationArnT&& value) { SetConfigDeliveryS3DestinationArn(std::forward<ConfigDeliveryS3DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the service integration.</p>
     */
    inline const IntegrateServices& GetIntegrateServices() const { return m_integrateServices; }
    inline bool IntegrateServicesHasBeenSet() const { return m_integrateServicesHasBeenSet; }
    template<typename IntegrateServicesT = IntegrateServices>
    void SetIntegrateServices(IntegrateServicesT&& value) { m_integrateServicesHasBeenSet = true; m_integrateServices = std::forward<IntegrateServicesT>(value); }
    template<typename IntegrateServicesT = IntegrateServices>
    GetFlowLogsIntegrationTemplateRequest& WithIntegrateServices(IntegrateServicesT&& value) { SetIntegrateServices(std::forward<IntegrateServicesT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
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
