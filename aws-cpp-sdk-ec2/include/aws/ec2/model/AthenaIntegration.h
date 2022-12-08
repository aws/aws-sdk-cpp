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
    AWS_EC2_API AthenaIntegration();
    AWS_EC2_API AthenaIntegration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API AthenaIntegration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline const Aws::String& GetIntegrationResultS3DestinationArn() const{ return m_integrationResultS3DestinationArn; }

    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline bool IntegrationResultS3DestinationArnHasBeenSet() const { return m_integrationResultS3DestinationArnHasBeenSet; }

    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline void SetIntegrationResultS3DestinationArn(const Aws::String& value) { m_integrationResultS3DestinationArnHasBeenSet = true; m_integrationResultS3DestinationArn = value; }

    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline void SetIntegrationResultS3DestinationArn(Aws::String&& value) { m_integrationResultS3DestinationArnHasBeenSet = true; m_integrationResultS3DestinationArn = std::move(value); }

    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline void SetIntegrationResultS3DestinationArn(const char* value) { m_integrationResultS3DestinationArnHasBeenSet = true; m_integrationResultS3DestinationArn.assign(value); }

    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline AthenaIntegration& WithIntegrationResultS3DestinationArn(const Aws::String& value) { SetIntegrationResultS3DestinationArn(value); return *this;}

    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline AthenaIntegration& WithIntegrationResultS3DestinationArn(Aws::String&& value) { SetIntegrationResultS3DestinationArn(std::move(value)); return *this;}

    /**
     * <p>The location in Amazon S3 to store the generated CloudFormation template.</p>
     */
    inline AthenaIntegration& WithIntegrationResultS3DestinationArn(const char* value) { SetIntegrationResultS3DestinationArn(value); return *this;}


    /**
     * <p>The schedule for adding new partitions to the table.</p>
     */
    inline const PartitionLoadFrequency& GetPartitionLoadFrequency() const{ return m_partitionLoadFrequency; }

    /**
     * <p>The schedule for adding new partitions to the table.</p>
     */
    inline bool PartitionLoadFrequencyHasBeenSet() const { return m_partitionLoadFrequencyHasBeenSet; }

    /**
     * <p>The schedule for adding new partitions to the table.</p>
     */
    inline void SetPartitionLoadFrequency(const PartitionLoadFrequency& value) { m_partitionLoadFrequencyHasBeenSet = true; m_partitionLoadFrequency = value; }

    /**
     * <p>The schedule for adding new partitions to the table.</p>
     */
    inline void SetPartitionLoadFrequency(PartitionLoadFrequency&& value) { m_partitionLoadFrequencyHasBeenSet = true; m_partitionLoadFrequency = std::move(value); }

    /**
     * <p>The schedule for adding new partitions to the table.</p>
     */
    inline AthenaIntegration& WithPartitionLoadFrequency(const PartitionLoadFrequency& value) { SetPartitionLoadFrequency(value); return *this;}

    /**
     * <p>The schedule for adding new partitions to the table.</p>
     */
    inline AthenaIntegration& WithPartitionLoadFrequency(PartitionLoadFrequency&& value) { SetPartitionLoadFrequency(std::move(value)); return *this;}


    /**
     * <p>The start date for the partition.</p>
     */
    inline const Aws::Utils::DateTime& GetPartitionStartDate() const{ return m_partitionStartDate; }

    /**
     * <p>The start date for the partition.</p>
     */
    inline bool PartitionStartDateHasBeenSet() const { return m_partitionStartDateHasBeenSet; }

    /**
     * <p>The start date for the partition.</p>
     */
    inline void SetPartitionStartDate(const Aws::Utils::DateTime& value) { m_partitionStartDateHasBeenSet = true; m_partitionStartDate = value; }

    /**
     * <p>The start date for the partition.</p>
     */
    inline void SetPartitionStartDate(Aws::Utils::DateTime&& value) { m_partitionStartDateHasBeenSet = true; m_partitionStartDate = std::move(value); }

    /**
     * <p>The start date for the partition.</p>
     */
    inline AthenaIntegration& WithPartitionStartDate(const Aws::Utils::DateTime& value) { SetPartitionStartDate(value); return *this;}

    /**
     * <p>The start date for the partition.</p>
     */
    inline AthenaIntegration& WithPartitionStartDate(Aws::Utils::DateTime&& value) { SetPartitionStartDate(std::move(value)); return *this;}


    /**
     * <p>The end date for the partition.</p>
     */
    inline const Aws::Utils::DateTime& GetPartitionEndDate() const{ return m_partitionEndDate; }

    /**
     * <p>The end date for the partition.</p>
     */
    inline bool PartitionEndDateHasBeenSet() const { return m_partitionEndDateHasBeenSet; }

    /**
     * <p>The end date for the partition.</p>
     */
    inline void SetPartitionEndDate(const Aws::Utils::DateTime& value) { m_partitionEndDateHasBeenSet = true; m_partitionEndDate = value; }

    /**
     * <p>The end date for the partition.</p>
     */
    inline void SetPartitionEndDate(Aws::Utils::DateTime&& value) { m_partitionEndDateHasBeenSet = true; m_partitionEndDate = std::move(value); }

    /**
     * <p>The end date for the partition.</p>
     */
    inline AthenaIntegration& WithPartitionEndDate(const Aws::Utils::DateTime& value) { SetPartitionEndDate(value); return *this;}

    /**
     * <p>The end date for the partition.</p>
     */
    inline AthenaIntegration& WithPartitionEndDate(Aws::Utils::DateTime&& value) { SetPartitionEndDate(std::move(value)); return *this;}

  private:

    Aws::String m_integrationResultS3DestinationArn;
    bool m_integrationResultS3DestinationArnHasBeenSet = false;

    PartitionLoadFrequency m_partitionLoadFrequency;
    bool m_partitionLoadFrequencyHasBeenSet = false;

    Aws::Utils::DateTime m_partitionStartDate;
    bool m_partitionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_partitionEndDate;
    bool m_partitionEndDateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
