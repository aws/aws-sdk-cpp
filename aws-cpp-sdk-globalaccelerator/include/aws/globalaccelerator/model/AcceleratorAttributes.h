/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLOBALACCELERATOR_API AcceleratorAttributes
  {
  public:
    AcceleratorAttributes();
    AcceleratorAttributes(Aws::Utils::Json::JsonView jsonValue);
    AcceleratorAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether flow logs are enabled. The default value is false. If the
     * value is true, <code>FlowLogsS3Bucket</code> and <code>FlowLogsS3Prefix</code>
     * must be specified.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/monitoring-global-accelerator.flow-logs.html">Flow
     * Logs</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
     */
    inline bool GetFlowLogsEnabled() const{ return m_flowLogsEnabled; }

    /**
     * <p>Indicates whether flow logs are enabled. The default value is false. If the
     * value is true, <code>FlowLogsS3Bucket</code> and <code>FlowLogsS3Prefix</code>
     * must be specified.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/monitoring-global-accelerator.flow-logs.html">Flow
     * Logs</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
     */
    inline bool FlowLogsEnabledHasBeenSet() const { return m_flowLogsEnabledHasBeenSet; }

    /**
     * <p>Indicates whether flow logs are enabled. The default value is false. If the
     * value is true, <code>FlowLogsS3Bucket</code> and <code>FlowLogsS3Prefix</code>
     * must be specified.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/monitoring-global-accelerator.flow-logs.html">Flow
     * Logs</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
     */
    inline void SetFlowLogsEnabled(bool value) { m_flowLogsEnabledHasBeenSet = true; m_flowLogsEnabled = value; }

    /**
     * <p>Indicates whether flow logs are enabled. The default value is false. If the
     * value is true, <code>FlowLogsS3Bucket</code> and <code>FlowLogsS3Prefix</code>
     * must be specified.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/monitoring-global-accelerator.flow-logs.html">Flow
     * Logs</a> in the <i>AWS Global Accelerator Developer Guide</i>.</p>
     */
    inline AcceleratorAttributes& WithFlowLogsEnabled(bool value) { SetFlowLogsEnabled(value); return *this;}


    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants AWS Global Accelerator permission to write to
     * the bucket.</p>
     */
    inline const Aws::String& GetFlowLogsS3Bucket() const{ return m_flowLogsS3Bucket; }

    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants AWS Global Accelerator permission to write to
     * the bucket.</p>
     */
    inline bool FlowLogsS3BucketHasBeenSet() const { return m_flowLogsS3BucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants AWS Global Accelerator permission to write to
     * the bucket.</p>
     */
    inline void SetFlowLogsS3Bucket(const Aws::String& value) { m_flowLogsS3BucketHasBeenSet = true; m_flowLogsS3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants AWS Global Accelerator permission to write to
     * the bucket.</p>
     */
    inline void SetFlowLogsS3Bucket(Aws::String&& value) { m_flowLogsS3BucketHasBeenSet = true; m_flowLogsS3Bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants AWS Global Accelerator permission to write to
     * the bucket.</p>
     */
    inline void SetFlowLogsS3Bucket(const char* value) { m_flowLogsS3BucketHasBeenSet = true; m_flowLogsS3Bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants AWS Global Accelerator permission to write to
     * the bucket.</p>
     */
    inline AcceleratorAttributes& WithFlowLogsS3Bucket(const Aws::String& value) { SetFlowLogsS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants AWS Global Accelerator permission to write to
     * the bucket.</p>
     */
    inline AcceleratorAttributes& WithFlowLogsS3Bucket(Aws::String&& value) { SetFlowLogsS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket for the flow logs. Attribute is required if
     * <code>FlowLogsEnabled</code> is <code>true</code>. The bucket must exist and
     * have a bucket policy that grants AWS Global Accelerator permission to write to
     * the bucket.</p>
     */
    inline AcceleratorAttributes& WithFlowLogsS3Bucket(const char* value) { SetFlowLogsS3Bucket(value); return *this;}


    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. If
     * you don’t specify a prefix, the flow logs are stored in the root of the
     * bucket.</p>
     */
    inline const Aws::String& GetFlowLogsS3Prefix() const{ return m_flowLogsS3Prefix; }

    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. If
     * you don’t specify a prefix, the flow logs are stored in the root of the
     * bucket.</p>
     */
    inline bool FlowLogsS3PrefixHasBeenSet() const { return m_flowLogsS3PrefixHasBeenSet; }

    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. If
     * you don’t specify a prefix, the flow logs are stored in the root of the
     * bucket.</p>
     */
    inline void SetFlowLogsS3Prefix(const Aws::String& value) { m_flowLogsS3PrefixHasBeenSet = true; m_flowLogsS3Prefix = value; }

    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. If
     * you don’t specify a prefix, the flow logs are stored in the root of the
     * bucket.</p>
     */
    inline void SetFlowLogsS3Prefix(Aws::String&& value) { m_flowLogsS3PrefixHasBeenSet = true; m_flowLogsS3Prefix = std::move(value); }

    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. If
     * you don’t specify a prefix, the flow logs are stored in the root of the
     * bucket.</p>
     */
    inline void SetFlowLogsS3Prefix(const char* value) { m_flowLogsS3PrefixHasBeenSet = true; m_flowLogsS3Prefix.assign(value); }

    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. If
     * you don’t specify a prefix, the flow logs are stored in the root of the
     * bucket.</p>
     */
    inline AcceleratorAttributes& WithFlowLogsS3Prefix(const Aws::String& value) { SetFlowLogsS3Prefix(value); return *this;}

    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. If
     * you don’t specify a prefix, the flow logs are stored in the root of the
     * bucket.</p>
     */
    inline AcceleratorAttributes& WithFlowLogsS3Prefix(Aws::String&& value) { SetFlowLogsS3Prefix(std::move(value)); return *this;}

    /**
     * <p>The prefix for the location in the Amazon S3 bucket for the flow logs.
     * Attribute is required if <code>FlowLogsEnabled</code> is <code>true</code>. If
     * you don’t specify a prefix, the flow logs are stored in the root of the
     * bucket.</p>
     */
    inline AcceleratorAttributes& WithFlowLogsS3Prefix(const char* value) { SetFlowLogsS3Prefix(value); return *this;}

  private:

    bool m_flowLogsEnabled;
    bool m_flowLogsEnabledHasBeenSet;

    Aws::String m_flowLogsS3Bucket;
    bool m_flowLogsS3BucketHasBeenSet;

    Aws::String m_flowLogsS3Prefix;
    bool m_flowLogsS3PrefixHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
