/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>Details about a Kinesis data stream used as the source for a Firehose
   * stream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/KinesisStreamSourceDescription">AWS
   * API Reference</a></p>
   */
  class KinesisStreamSourceDescription
  {
  public:
    AWS_FIREHOSE_API KinesisStreamSourceDescription() = default;
    AWS_FIREHOSE_API KinesisStreamSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API KinesisStreamSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source Kinesis data stream. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kinesis-streams">Amazon
     * Kinesis Data Streams ARN Format</a>.</p>
     */
    inline const Aws::String& GetKinesisStreamARN() const { return m_kinesisStreamARN; }
    inline bool KinesisStreamARNHasBeenSet() const { return m_kinesisStreamARNHasBeenSet; }
    template<typename KinesisStreamARNT = Aws::String>
    void SetKinesisStreamARN(KinesisStreamARNT&& value) { m_kinesisStreamARNHasBeenSet = true; m_kinesisStreamARN = std::forward<KinesisStreamARNT>(value); }
    template<typename KinesisStreamARNT = Aws::String>
    KinesisStreamSourceDescription& WithKinesisStreamARN(KinesisStreamARNT&& value) { SetKinesisStreamARN(std::forward<KinesisStreamARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role used by the source Kinesis data stream. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-iam">Amazon
     * Web Services Identity and Access Management (IAM) ARN Format</a>.</p>
     */
    inline const Aws::String& GetRoleARN() const { return m_roleARN; }
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }
    template<typename RoleARNT = Aws::String>
    void SetRoleARN(RoleARNT&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::forward<RoleARNT>(value); }
    template<typename RoleARNT = Aws::String>
    KinesisStreamSourceDescription& WithRoleARN(RoleARNT&& value) { SetRoleARN(std::forward<RoleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Firehose starts retrieving records from the Kinesis data stream starting with
     * this timestamp.</p>
     */
    inline const Aws::Utils::DateTime& GetDeliveryStartTimestamp() const { return m_deliveryStartTimestamp; }
    inline bool DeliveryStartTimestampHasBeenSet() const { return m_deliveryStartTimestampHasBeenSet; }
    template<typename DeliveryStartTimestampT = Aws::Utils::DateTime>
    void SetDeliveryStartTimestamp(DeliveryStartTimestampT&& value) { m_deliveryStartTimestampHasBeenSet = true; m_deliveryStartTimestamp = std::forward<DeliveryStartTimestampT>(value); }
    template<typename DeliveryStartTimestampT = Aws::Utils::DateTime>
    KinesisStreamSourceDescription& WithDeliveryStartTimestamp(DeliveryStartTimestampT&& value) { SetDeliveryStartTimestamp(std::forward<DeliveryStartTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kinesisStreamARN;
    bool m_kinesisStreamARNHasBeenSet = false;

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet = false;

    Aws::Utils::DateTime m_deliveryStartTimestamp{};
    bool m_deliveryStartTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
