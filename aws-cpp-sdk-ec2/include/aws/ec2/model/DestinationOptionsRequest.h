/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DestinationFileFormat.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the destination options for a flow log.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DestinationOptionsRequest">AWS
   * API Reference</a></p>
   */
  class DestinationOptionsRequest
  {
  public:
    AWS_EC2_API DestinationOptionsRequest();
    AWS_EC2_API DestinationOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DestinationOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The format for the flow log. The default is <code>plain-text</code>.</p>
     */
    inline const DestinationFileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The format for the flow log. The default is <code>plain-text</code>.</p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>The format for the flow log. The default is <code>plain-text</code>.</p>
     */
    inline void SetFileFormat(const DestinationFileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>The format for the flow log. The default is <code>plain-text</code>.</p>
     */
    inline void SetFileFormat(DestinationFileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>The format for the flow log. The default is <code>plain-text</code>.</p>
     */
    inline DestinationOptionsRequest& WithFileFormat(const DestinationFileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The format for the flow log. The default is <code>plain-text</code>.</p>
     */
    inline DestinationOptionsRequest& WithFileFormat(DestinationFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to use Hive-compatible prefixes for flow logs stored in
     * Amazon S3. The default is <code>false</code>.</p>
     */
    inline bool GetHiveCompatiblePartitions() const{ return m_hiveCompatiblePartitions; }

    /**
     * <p>Indicates whether to use Hive-compatible prefixes for flow logs stored in
     * Amazon S3. The default is <code>false</code>.</p>
     */
    inline bool HiveCompatiblePartitionsHasBeenSet() const { return m_hiveCompatiblePartitionsHasBeenSet; }

    /**
     * <p>Indicates whether to use Hive-compatible prefixes for flow logs stored in
     * Amazon S3. The default is <code>false</code>.</p>
     */
    inline void SetHiveCompatiblePartitions(bool value) { m_hiveCompatiblePartitionsHasBeenSet = true; m_hiveCompatiblePartitions = value; }

    /**
     * <p>Indicates whether to use Hive-compatible prefixes for flow logs stored in
     * Amazon S3. The default is <code>false</code>.</p>
     */
    inline DestinationOptionsRequest& WithHiveCompatiblePartitions(bool value) { SetHiveCompatiblePartitions(value); return *this;}


    /**
     * <p>Indicates whether to partition the flow log per hour. This reduces the cost
     * and response time for queries. The default is <code>false</code>.</p>
     */
    inline bool GetPerHourPartition() const{ return m_perHourPartition; }

    /**
     * <p>Indicates whether to partition the flow log per hour. This reduces the cost
     * and response time for queries. The default is <code>false</code>.</p>
     */
    inline bool PerHourPartitionHasBeenSet() const { return m_perHourPartitionHasBeenSet; }

    /**
     * <p>Indicates whether to partition the flow log per hour. This reduces the cost
     * and response time for queries. The default is <code>false</code>.</p>
     */
    inline void SetPerHourPartition(bool value) { m_perHourPartitionHasBeenSet = true; m_perHourPartition = value; }

    /**
     * <p>Indicates whether to partition the flow log per hour. This reduces the cost
     * and response time for queries. The default is <code>false</code>.</p>
     */
    inline DestinationOptionsRequest& WithPerHourPartition(bool value) { SetPerHourPartition(value); return *this;}

  private:

    DestinationFileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet = false;

    bool m_hiveCompatiblePartitions;
    bool m_hiveCompatiblePartitionsHasBeenSet = false;

    bool m_perHourPartition;
    bool m_perHourPartitionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
