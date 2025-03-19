/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>Attributes of an accelerator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/AcceleratorAttributes">AWS
   * API Reference</a></p>
   */
  class AcceleratorAttributes
  {
  public:
    AWS_GLOBALACCELERATOR_API AcceleratorAttributes() = default;
    AWS_GLOBALACCELERATOR_API AcceleratorAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API AcceleratorAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether flow logs are enabled. The default value is false. If the
     * value is true, <code>FlowLogsS3Bucket</code> and <code>FlowLogsS3Prefix</code>
     * must be specified.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/monitoring-global-accelerator.flow-logs.html">Flow
     * logs</a> in the <i>Global Accelerator Developer Guide</i>.</p>
     */
    inline bool GetFlowLogsEnabled() const { return m_flowLogsEnabled; }
    inline bool FlowLogsEnabledHasBeenSet() const { return m_flowLogsEnabledHasBeenSet; }
    inline void SetFlowLogsEnabled(bool value) { m_flowLogsEnabledHasBeenSet = true; m_flowLogsEnabled = value; }
    inline AcceleratorAttributes& WithFlowLogsEnabled(bool value) { SetFlowLogsEnabled(value); return *this;}
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
    AcceleratorAttributes& WithFlowLogsS3Bucket(FlowLogsS3BucketT&& value) { SetFlowLogsS3Bucket(std::forward<FlowLogsS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>.</p>
     * <p>If you specify slash (/) for the S3 bucket prefix, the log file bucket folder
     * structure will include a double slash (//), like the following:</p>
     * <p>s3-bucket_name//AWSLogs/aws_account_id</p>
     */
    inline const Aws::String& GetFlowLogsS3Prefix() const { return m_flowLogsS3Prefix; }
    inline bool FlowLogsS3PrefixHasBeenSet() const { return m_flowLogsS3PrefixHasBeenSet; }
    template<typename FlowLogsS3PrefixT = Aws::String>
    void SetFlowLogsS3Prefix(FlowLogsS3PrefixT&& value) { m_flowLogsS3PrefixHasBeenSet = true; m_flowLogsS3Prefix = std::forward<FlowLogsS3PrefixT>(value); }
    template<typename FlowLogsS3PrefixT = Aws::String>
    AcceleratorAttributes& WithFlowLogsS3Prefix(FlowLogsS3PrefixT&& value) { SetFlowLogsS3Prefix(std::forward<FlowLogsS3PrefixT>(value)); return *this;}
    ///@}
  private:

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
