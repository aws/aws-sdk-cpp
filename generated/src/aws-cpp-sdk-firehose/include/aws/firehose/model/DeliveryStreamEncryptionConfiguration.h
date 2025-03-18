/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/firehose/model/KeyType.h>
#include <aws/firehose/model/DeliveryStreamEncryptionStatus.h>
#include <aws/firehose/model/FailureDescription.h>
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
   * <p>Contains information about the server-side encryption (SSE) status for the
   * delivery stream, the type customer master key (CMK) in use, if any, and the ARN
   * of the CMK. You can get <code>DeliveryStreamEncryptionConfiguration</code> by
   * invoking the <a>DescribeDeliveryStream</a> operation. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DeliveryStreamEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class DeliveryStreamEncryptionConfiguration
  {
  public:
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfiguration() = default;
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline const Aws::String& GetKeyARN() const { return m_keyARN; }
    inline bool KeyARNHasBeenSet() const { return m_keyARNHasBeenSet; }
    template<typename KeyARNT = Aws::String>
    void SetKeyARN(KeyARNT&& value) { m_keyARNHasBeenSet = true; m_keyARN = std::forward<KeyARNT>(value); }
    template<typename KeyARNT = Aws::String>
    DeliveryStreamEncryptionConfiguration& WithKeyARN(KeyARNT&& value) { SetKeyARN(std::forward<KeyARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of customer master key (CMK) that is used for encryption.
     * The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>.</p>
     */
    inline KeyType GetKeyType() const { return m_keyType; }
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }
    inline void SetKeyType(KeyType value) { m_keyTypeHasBeenSet = true; m_keyType = value; }
    inline DeliveryStreamEncryptionConfiguration& WithKeyType(KeyType value) { SetKeyType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the server-side encryption (SSE) status for the Firehose stream. For
     * a full description of the different values of this status, see
     * <a>StartDeliveryStreamEncryption</a> and <a>StopDeliveryStreamEncryption</a>. If
     * this status is <code>ENABLING_FAILED</code> or <code>DISABLING_FAILED</code>, it
     * is the status of the most recent attempt to enable or disable SSE,
     * respectively.</p>
     */
    inline DeliveryStreamEncryptionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DeliveryStreamEncryptionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeliveryStreamEncryptionConfiguration& WithStatus(DeliveryStreamEncryptionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline const FailureDescription& GetFailureDescription() const { return m_failureDescription; }
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }
    template<typename FailureDescriptionT = FailureDescription>
    void SetFailureDescription(FailureDescriptionT&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::forward<FailureDescriptionT>(value); }
    template<typename FailureDescriptionT = FailureDescription>
    DeliveryStreamEncryptionConfiguration& WithFailureDescription(FailureDescriptionT&& value) { SetFailureDescription(std::forward<FailureDescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyARN;
    bool m_keyARNHasBeenSet = false;

    KeyType m_keyType{KeyType::NOT_SET};
    bool m_keyTypeHasBeenSet = false;

    DeliveryStreamEncryptionStatus m_status{DeliveryStreamEncryptionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    FailureDescription m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
