/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/DeleteMarkerReplicationStatus.h>
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
namespace S3
{
namespace Model
{

  /**
   * <p>Specifies whether Amazon S3 replicates the delete markers. If you specify a
   * <code>Filter</code>, you must specify this element. However, in the latest
   * version of replication configuration (when <code>Filter</code> is specified),
   * Amazon S3 doesn't replicate delete markers. Therefore, the
   * <code>DeleteMarkerReplication</code> element can contain only
   * &lt;Status&gt;Disabled&lt;/Status&gt;. For an example configuration, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-add-config.html#replication-config-min-rule-config">Basic
   * Rule Configuration</a>. </p>  <p> If you don't specify the
   * <code>Filter</code> element, Amazon S3 assumes that the replication
   * configuration is the earlier version, V1. In the earlier version, Amazon S3
   * handled replication of delete markers differently. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/dev/replication-add-config.html#replication-backward-compat-considerations">Backward
   * Compatibility</a>.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/DeleteMarkerReplication">AWS
   * API Reference</a></p>
   */
  class AWS_S3_API DeleteMarkerReplication
  {
  public:
    DeleteMarkerReplication();
    DeleteMarkerReplication(const Aws::Utils::Xml::XmlNode& xmlNode);
    DeleteMarkerReplication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>Indicates whether to replicate delete markers.</p>  <p> In the current
     * implementation, Amazon S3 doesn't replicate the delete markers. The status must
     * be <code>Disabled</code>. </p> 
     */
    inline const DeleteMarkerReplicationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates whether to replicate delete markers.</p>  <p> In the current
     * implementation, Amazon S3 doesn't replicate the delete markers. The status must
     * be <code>Disabled</code>. </p> 
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates whether to replicate delete markers.</p>  <p> In the current
     * implementation, Amazon S3 doesn't replicate the delete markers. The status must
     * be <code>Disabled</code>. </p> 
     */
    inline void SetStatus(const DeleteMarkerReplicationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates whether to replicate delete markers.</p>  <p> In the current
     * implementation, Amazon S3 doesn't replicate the delete markers. The status must
     * be <code>Disabled</code>. </p> 
     */
    inline void SetStatus(DeleteMarkerReplicationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates whether to replicate delete markers.</p>  <p> In the current
     * implementation, Amazon S3 doesn't replicate the delete markers. The status must
     * be <code>Disabled</code>. </p> 
     */
    inline DeleteMarkerReplication& WithStatus(const DeleteMarkerReplicationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates whether to replicate delete markers.</p>  <p> In the current
     * implementation, Amazon S3 doesn't replicate the delete markers. The status must
     * be <code>Disabled</code>. </p> 
     */
    inline DeleteMarkerReplication& WithStatus(DeleteMarkerReplicationStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    DeleteMarkerReplicationStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
