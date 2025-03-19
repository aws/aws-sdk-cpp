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
    AWS_EC2_API DestinationOptionsRequest() = default;
    AWS_EC2_API DestinationOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DestinationOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The format for the flow log. The default is <code>plain-text</code>.</p>
     */
    inline DestinationFileFormat GetFileFormat() const { return m_fileFormat; }
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }
    inline void SetFileFormat(DestinationFileFormat value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }
    inline DestinationOptionsRequest& WithFileFormat(DestinationFileFormat value) { SetFileFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to use Hive-compatible prefixes for flow logs stored in
     * Amazon S3. The default is <code>false</code>.</p>
     */
    inline bool GetHiveCompatiblePartitions() const { return m_hiveCompatiblePartitions; }
    inline bool HiveCompatiblePartitionsHasBeenSet() const { return m_hiveCompatiblePartitionsHasBeenSet; }
    inline void SetHiveCompatiblePartitions(bool value) { m_hiveCompatiblePartitionsHasBeenSet = true; m_hiveCompatiblePartitions = value; }
    inline DestinationOptionsRequest& WithHiveCompatiblePartitions(bool value) { SetHiveCompatiblePartitions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to partition the flow log per hour. This reduces the cost
     * and response time for queries. The default is <code>false</code>.</p>
     */
    inline bool GetPerHourPartition() const { return m_perHourPartition; }
    inline bool PerHourPartitionHasBeenSet() const { return m_perHourPartitionHasBeenSet; }
    inline void SetPerHourPartition(bool value) { m_perHourPartitionHasBeenSet = true; m_perHourPartition = value; }
    inline DestinationOptionsRequest& WithPerHourPartition(bool value) { SetPerHourPartition(value); return *this;}
    ///@}
  private:

    DestinationFileFormat m_fileFormat{DestinationFileFormat::NOT_SET};
    bool m_fileFormatHasBeenSet = false;

    bool m_hiveCompatiblePartitions{false};
    bool m_hiveCompatiblePartitionsHasBeenSet = false;

    bool m_perHourPartition{false};
    bool m_perHourPartitionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
