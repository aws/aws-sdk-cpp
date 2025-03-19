/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/GlobalAcceleratorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GlobalAccelerator
{
namespace Model
{

  /**
   */
  class UpdateAcceleratorAttributesRequest : public GlobalAcceleratorRequest
  {
  public:
    AWS_GLOBALACCELERATOR_API UpdateAcceleratorAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAcceleratorAttributes"; }

    AWS_GLOBALACCELERATOR_API Aws::String SerializePayload() const override;

    AWS_GLOBALACCELERATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator that you want to
     * update.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const { return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    template<typename AcceleratorArnT = Aws::String>
    void SetAcceleratorArn(AcceleratorArnT&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::forward<AcceleratorArnT>(value); }
    template<typename AcceleratorArnT = Aws::String>
    UpdateAcceleratorAttributesRequest& WithAcceleratorArn(AcceleratorArnT&& value) { SetAcceleratorArn(std::forward<AcceleratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update whether flow logs are enabled. The default value is false. If the
     * value is true, <code>FlowLogsS3Bucket</code> and <code>FlowLogsS3Prefix</code>
     * must be specified.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/monitoring-global-accelerator.flow-logs.html">Flow
     * Logs</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline bool GetFlowLogsEnabled() const { return m_flowLogsEnabled; }
    inline bool FlowLogsEnabledHasBeenSet() const { return m_flowLogsEnabledHasBeenSet; }
    inline void SetFlowLogsEnabled(bool value) { m_flowLogsEnabledHasBeenSet = true; m_flowLogsEnabled = value; }
    inline UpdateAcceleratorAttributesRequest& WithFlowLogsEnabled(bool value) { SetFlowLogsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants Global Accelerator permission to write to the
     * bucket.</p>
     */
    inline const Aws::String& GetFlowLogsS3Bucket() const { return m_flowLogsS3Bucket; }
    inline bool FlowLogsS3BucketHasBeenSet() const { return m_flowLogsS3BucketHasBeenSet; }
    template<typename FlowLogsS3BucketT = Aws::String>
    void SetFlowLogsS3Bucket(FlowLogsS3BucketT&& value) { m_flowLogsS3BucketHasBeenSet = true; m_flowLogsS3Bucket = std::forward<FlowLogsS3BucketT>(value); }
    template<typename FlowLogsS3BucketT = Aws::String>
    UpdateAcceleratorAttributesRequest& WithFlowLogsS3Bucket(FlowLogsS3BucketT&& value) { SetFlowLogsS3Bucket(std::forward<FlowLogsS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. </p>
     * <p>If you specify slash (/) for the S3 bucket prefix, the log file bucket folder
     * structure will include a double slash (//), like the following:</p>
     * <p>s3-bucket_name//AWSLogs/aws_account_id</p>
     */
    inline const Aws::String& GetFlowLogsS3Prefix() const { return m_flowLogsS3Prefix; }
    inline bool FlowLogsS3PrefixHasBeenSet() const { return m_flowLogsS3PrefixHasBeenSet; }
    template<typename FlowLogsS3PrefixT = Aws::String>
    void SetFlowLogsS3Prefix(FlowLogsS3PrefixT&& value) { m_flowLogsS3PrefixHasBeenSet = true; m_flowLogsS3Prefix = std::forward<FlowLogsS3PrefixT>(value); }
    template<typename FlowLogsS3PrefixT = Aws::String>
    UpdateAcceleratorAttributesRequest& WithFlowLogsS3Prefix(FlowLogsS3PrefixT&& value) { SetFlowLogsS3Prefix(std::forward<FlowLogsS3PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    bool m_flowLogsEnabled{false};
    bool m_flowLogsEnabledHasBeenSet = false;

    Aws::String m_flowLogsS3Bucket;
    bool m_flowLogsS3BucketHasBeenSet = false;

    Aws::String m_flowLogsS3Prefix;
    bool m_flowLogsS3PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
