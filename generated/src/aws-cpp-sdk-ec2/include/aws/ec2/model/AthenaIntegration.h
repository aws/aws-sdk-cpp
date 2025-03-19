/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/PartitionLoadFrequency.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Describes integration options for Amazon Athena.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AthenaIntegration">AWS
   * API Reference</a></p>
   */
  class AthenaIntegration
  {
  public:
    AWS_EC2_API AthenaIntegration() = default;
    AWS_EC2_API AthenaIntegration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AthenaIntegration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline const Aws::String& GetIntegrationResultS3DestinationArn() const { return m_integrationResultS3DestinationArn; }
    inline bool IntegrationResultS3DestinationArnHasBeenSet() const { return m_integrationResultS3DestinationArnHasBeenSet; }
    template<typename IntegrationResultS3DestinationArnT = Aws::String>
    void SetIntegrationResultS3DestinationArn(IntegrationResultS3DestinationArnT&& value) { m_integrationResultS3DestinationArnHasBeenSet = true; m_integrationResultS3DestinationArn = std::forward<IntegrationResultS3DestinationArnT>(value); }
    template<typename IntegrationResultS3DestinationArnT = Aws::String>
    AthenaIntegration& WithIntegrationResultS3DestinationArn(IntegrationResultS3DestinationArnT&& value) { SetIntegrationResultS3DestinationArn(std::forward<IntegrationResultS3DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for adding new partitions to the table.</p>
     */
    inline PartitionLoadFrequency GetPartitionLoadFrequency() const { return m_partitionLoadFrequency; }
    inline bool PartitionLoadFrequencyHasBeenSet() const { return m_partitionLoadFrequencyHasBeenSet; }
    inline void SetPartitionLoadFrequency(PartitionLoadFrequency value) { m_partitionLoadFrequencyHasBeenSet = true; m_partitionLoadFrequency = value; }
    inline AthenaIntegration& WithPartitionLoadFrequency(PartitionLoadFrequency value) { SetPartitionLoadFrequency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start date for the partition.</p>
     */
    inline const Aws::Utils::DateTime& GetPartitionStartDate() const { return m_partitionStartDate; }
    inline bool PartitionStartDateHasBeenSet() const { return m_partitionStartDateHasBeenSet; }
    template<typename PartitionStartDateT = Aws::Utils::DateTime>
    void SetPartitionStartDate(PartitionStartDateT&& value) { m_partitionStartDateHasBeenSet = true; m_partitionStartDate = std::forward<PartitionStartDateT>(value); }
    template<typename PartitionStartDateT = Aws::Utils::DateTime>
    AthenaIntegration& WithPartitionStartDate(PartitionStartDateT&& value) { SetPartitionStartDate(std::forward<PartitionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end date for the partition.</p>
     */
    inline const Aws::Utils::DateTime& GetPartitionEndDate() const { return m_partitionEndDate; }
    inline bool PartitionEndDateHasBeenSet() const { return m_partitionEndDateHasBeenSet; }
    template<typename PartitionEndDateT = Aws::Utils::DateTime>
    void SetPartitionEndDate(PartitionEndDateT&& value) { m_partitionEndDateHasBeenSet = true; m_partitionEndDate = std::forward<PartitionEndDateT>(value); }
    template<typename PartitionEndDateT = Aws::Utils::DateTime>
    AthenaIntegration& WithPartitionEndDate(PartitionEndDateT&& value) { SetPartitionEndDate(std::forward<PartitionEndDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_integrationResultS3DestinationArn;
    bool m_integrationResultS3DestinationArnHasBeenSet = false;

    PartitionLoadFrequency m_partitionLoadFrequency{PartitionLoadFrequency::NOT_SET};
    bool m_partitionLoadFrequencyHasBeenSet = false;

    Aws::Utils::DateTime m_partitionStartDate{};
    bool m_partitionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_partitionEndDate{};
    bool m_partitionEndDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
