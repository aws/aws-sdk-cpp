/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ProvisionedThroughput.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Contains information about the EBS storage volumes attached to
   * Apache Kafka broker nodes.</p>
         <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/EBSStorageInfo">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKA_API EBSStorageInfo
  {
  public:
    EBSStorageInfo();
    EBSStorageInfo(Aws::Utils::Json::JsonView jsonValue);
    EBSStorageInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * EBS volume provisioned throughput information.
     */
    inline const ProvisionedThroughput& GetProvisionedThroughput() const{ return m_provisionedThroughput; }

    /**
     * EBS volume provisioned throughput information.
     */
    inline bool ProvisionedThroughputHasBeenSet() const { return m_provisionedThroughputHasBeenSet; }

    /**
     * EBS volume provisioned throughput information.
     */
    inline void SetProvisionedThroughput(const ProvisionedThroughput& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = value; }

    /**
     * EBS volume provisioned throughput information.
     */
    inline void SetProvisionedThroughput(ProvisionedThroughput&& value) { m_provisionedThroughputHasBeenSet = true; m_provisionedThroughput = std::move(value); }

    /**
     * EBS volume provisioned throughput information.
     */
    inline EBSStorageInfo& WithProvisionedThroughput(const ProvisionedThroughput& value) { SetProvisionedThroughput(value); return *this;}

    /**
     * EBS volume provisioned throughput information.
     */
    inline EBSStorageInfo& WithProvisionedThroughput(ProvisionedThroughput&& value) { SetProvisionedThroughput(std::move(value)); return *this;}


    /**
     * 
            <p>The size in GiB of the EBS volume for the data drive on each
     * broker node.</p>
         
     */
    inline int GetVolumeSize() const{ return m_volumeSize; }

    /**
     * 
            <p>The size in GiB of the EBS volume for the data drive on each
     * broker node.</p>
         
     */
    inline bool VolumeSizeHasBeenSet() const { return m_volumeSizeHasBeenSet; }

    /**
     * 
            <p>The size in GiB of the EBS volume for the data drive on each
     * broker node.</p>
         
     */
    inline void SetVolumeSize(int value) { m_volumeSizeHasBeenSet = true; m_volumeSize = value; }

    /**
     * 
            <p>The size in GiB of the EBS volume for the data drive on each
     * broker node.</p>
         
     */
    inline EBSStorageInfo& WithVolumeSize(int value) { SetVolumeSize(value); return *this;}

  private:

    ProvisionedThroughput m_provisionedThroughput;
    bool m_provisionedThroughputHasBeenSet = false;

    int m_volumeSize;
    bool m_volumeSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
