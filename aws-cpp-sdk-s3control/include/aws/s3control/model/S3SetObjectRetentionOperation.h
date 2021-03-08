/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/S3Retention.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration parameters for the Object Lock retention action
   * for an S3 Batch Operations job. Batch Operations passes every object to the
   * underlying <code>PutObjectRetention</code> API. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
   * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon Simple
   * Storage Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/S3SetObjectRetentionOperation">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API S3SetObjectRetentionOperation
  {
  public:
    S3SetObjectRetentionOperation();
    S3SetObjectRetentionOperation(const Aws::Utils::Xml::XmlNode& xmlNode);
    S3SetObjectRetentionOperation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Indicates if the action should be applied to objects in the Batch Operations
     * job even if they have Object Lock <code> GOVERNANCE</code> type in place.</p>
     */
    inline bool GetBypassGovernanceRetention() const{ return m_bypassGovernanceRetention; }

    /**
     * <p>Indicates if the action should be applied to objects in the Batch Operations
     * job even if they have Object Lock <code> GOVERNANCE</code> type in place.</p>
     */
    inline bool BypassGovernanceRetentionHasBeenSet() const { return m_bypassGovernanceRetentionHasBeenSet; }

    /**
     * <p>Indicates if the action should be applied to objects in the Batch Operations
     * job even if they have Object Lock <code> GOVERNANCE</code> type in place.</p>
     */
    inline void SetBypassGovernanceRetention(bool value) { m_bypassGovernanceRetentionHasBeenSet = true; m_bypassGovernanceRetention = value; }

    /**
     * <p>Indicates if the action should be applied to objects in the Batch Operations
     * job even if they have Object Lock <code> GOVERNANCE</code> type in place.</p>
     */
    inline S3SetObjectRetentionOperation& WithBypassGovernanceRetention(bool value) { SetBypassGovernanceRetention(value); return *this;}


    /**
     * <p>Contains the Object Lock retention mode to be applied to all objects in the
     * Batch Operations job. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
     * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline const S3Retention& GetRetention() const{ return m_retention; }

    /**
     * <p>Contains the Object Lock retention mode to be applied to all objects in the
     * Batch Operations job. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
     * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline bool RetentionHasBeenSet() const { return m_retentionHasBeenSet; }

    /**
     * <p>Contains the Object Lock retention mode to be applied to all objects in the
     * Batch Operations job. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
     * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetRetention(const S3Retention& value) { m_retentionHasBeenSet = true; m_retention = value; }

    /**
     * <p>Contains the Object Lock retention mode to be applied to all objects in the
     * Batch Operations job. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
     * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline void SetRetention(S3Retention&& value) { m_retentionHasBeenSet = true; m_retention = std::move(value); }

    /**
     * <p>Contains the Object Lock retention mode to be applied to all objects in the
     * Batch Operations job. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
     * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3SetObjectRetentionOperation& WithRetention(const S3Retention& value) { SetRetention(value); return *this;}

    /**
     * <p>Contains the Object Lock retention mode to be applied to all objects in the
     * Batch Operations job. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/batch-ops-retention-date.html">Using
     * S3 Object Lock retention with S3 Batch Operations</a> in the <i>Amazon Simple
     * Storage Service User Guide</i>.</p>
     */
    inline S3SetObjectRetentionOperation& WithRetention(S3Retention&& value) { SetRetention(std::move(value)); return *this;}

  private:

    bool m_bypassGovernanceRetention;
    bool m_bypassGovernanceRetentionHasBeenSet;

    S3Retention m_retention;
    bool m_retentionHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
