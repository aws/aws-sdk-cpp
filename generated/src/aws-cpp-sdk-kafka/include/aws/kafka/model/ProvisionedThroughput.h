/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>

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
            <p>Contains information about provisioned throughput for EBS
   * storage volumes attached to kafka broker nodes.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ProvisionedThroughput">AWS
   * API Reference</a></p>
   */
  class ProvisionedThroughput
  {
  public:
    AWS_KAFKA_API ProvisionedThroughput() = default;
    AWS_KAFKA_API ProvisionedThroughput(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ProvisionedThroughput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Provisioned throughput is enabled or not.</p>
         
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ProvisionedThroughput& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Throughput value of the EBS volumes for the data drive on each
     * kafka broker node in MiB per second.</p>
         
     */
    inline int GetVolumeThroughput() const { return m_volumeThroughput; }
    inline bool VolumeThroughputHasBeenSet() const { return m_volumeThroughputHasBeenSet; }
    inline void SetVolumeThroughput(int value) { m_volumeThroughputHasBeenSet = true; m_volumeThroughput = value; }
    inline ProvisionedThroughput& WithVolumeThroughput(int value) { SetVolumeThroughput(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    int m_volumeThroughput{0};
    bool m_volumeThroughputHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
