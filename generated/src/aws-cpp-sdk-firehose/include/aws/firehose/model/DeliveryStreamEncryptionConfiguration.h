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
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfiguration();
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DeliveryStreamEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline const Aws::String& GetKeyARN() const{ return m_keyARN; }

    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline bool KeyARNHasBeenSet() const { return m_keyARNHasBeenSet; }

    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline void SetKeyARN(const Aws::String& value) { m_keyARNHasBeenSet = true; m_keyARN = value; }

    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline void SetKeyARN(Aws::String&& value) { m_keyARNHasBeenSet = true; m_keyARN = std::move(value); }

    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline void SetKeyARN(const char* value) { m_keyARNHasBeenSet = true; m_keyARN.assign(value); }

    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithKeyARN(const Aws::String& value) { SetKeyARN(value); return *this;}

    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithKeyARN(Aws::String&& value) { SetKeyARN(std::move(value)); return *this;}

    /**
     * <p>If <code>KeyType</code> is <code>CUSTOMER_MANAGED_CMK</code>, this field
     * contains the ARN of the customer managed CMK. If <code>KeyType</code> is
     * <code>Amazon Web Services_OWNED_CMK</code>,
     * <code>DeliveryStreamEncryptionConfiguration</code> doesn't contain a value for
     * <code>KeyARN</code>.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithKeyARN(const char* value) { SetKeyARN(value); return *this;}


    /**
     * <p>Indicates the type of customer master key (CMK) that is used for encryption.
     * The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>.</p>
     */
    inline const KeyType& GetKeyType() const{ return m_keyType; }

    /**
     * <p>Indicates the type of customer master key (CMK) that is used for encryption.
     * The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>.</p>
     */
    inline bool KeyTypeHasBeenSet() const { return m_keyTypeHasBeenSet; }

    /**
     * <p>Indicates the type of customer master key (CMK) that is used for encryption.
     * The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>.</p>
     */
    inline void SetKeyType(const KeyType& value) { m_keyTypeHasBeenSet = true; m_keyType = value; }

    /**
     * <p>Indicates the type of customer master key (CMK) that is used for encryption.
     * The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>.</p>
     */
    inline void SetKeyType(KeyType&& value) { m_keyTypeHasBeenSet = true; m_keyType = std::move(value); }

    /**
     * <p>Indicates the type of customer master key (CMK) that is used for encryption.
     * The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithKeyType(const KeyType& value) { SetKeyType(value); return *this;}

    /**
     * <p>Indicates the type of customer master key (CMK) that is used for encryption.
     * The default setting is <code>Amazon Web Services_OWNED_CMK</code>. For more
     * information about CMKs, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#master_keys">Customer
     * Master Keys (CMKs)</a>.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithKeyType(KeyType&& value) { SetKeyType(std::move(value)); return *this;}


    /**
     * <p>This is the server-side encryption (SSE) status for the delivery stream. For
     * a full description of the different values of this status, see
     * <a>StartDeliveryStreamEncryption</a> and <a>StopDeliveryStreamEncryption</a>. If
     * this status is <code>ENABLING_FAILED</code> or <code>DISABLING_FAILED</code>, it
     * is the status of the most recent attempt to enable or disable SSE,
     * respectively.</p>
     */
    inline const DeliveryStreamEncryptionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>This is the server-side encryption (SSE) status for the delivery stream. For
     * a full description of the different values of this status, see
     * <a>StartDeliveryStreamEncryption</a> and <a>StopDeliveryStreamEncryption</a>. If
     * this status is <code>ENABLING_FAILED</code> or <code>DISABLING_FAILED</code>, it
     * is the status of the most recent attempt to enable or disable SSE,
     * respectively.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>This is the server-side encryption (SSE) status for the delivery stream. For
     * a full description of the different values of this status, see
     * <a>StartDeliveryStreamEncryption</a> and <a>StopDeliveryStreamEncryption</a>. If
     * this status is <code>ENABLING_FAILED</code> or <code>DISABLING_FAILED</code>, it
     * is the status of the most recent attempt to enable or disable SSE,
     * respectively.</p>
     */
    inline void SetStatus(const DeliveryStreamEncryptionStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>This is the server-side encryption (SSE) status for the delivery stream. For
     * a full description of the different values of this status, see
     * <a>StartDeliveryStreamEncryption</a> and <a>StopDeliveryStreamEncryption</a>. If
     * this status is <code>ENABLING_FAILED</code> or <code>DISABLING_FAILED</code>, it
     * is the status of the most recent attempt to enable or disable SSE,
     * respectively.</p>
     */
    inline void SetStatus(DeliveryStreamEncryptionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>This is the server-side encryption (SSE) status for the delivery stream. For
     * a full description of the different values of this status, see
     * <a>StartDeliveryStreamEncryption</a> and <a>StopDeliveryStreamEncryption</a>. If
     * this status is <code>ENABLING_FAILED</code> or <code>DISABLING_FAILED</code>, it
     * is the status of the most recent attempt to enable or disable SSE,
     * respectively.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithStatus(const DeliveryStreamEncryptionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>This is the server-side encryption (SSE) status for the delivery stream. For
     * a full description of the different values of this status, see
     * <a>StartDeliveryStreamEncryption</a> and <a>StopDeliveryStreamEncryption</a>. If
     * this status is <code>ENABLING_FAILED</code> or <code>DISABLING_FAILED</code>, it
     * is the status of the most recent attempt to enable or disable SSE,
     * respectively.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithStatus(DeliveryStreamEncryptionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline const FailureDescription& GetFailureDescription() const{ return m_failureDescription; }

    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline bool FailureDescriptionHasBeenSet() const { return m_failureDescriptionHasBeenSet; }

    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline void SetFailureDescription(const FailureDescription& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = value; }

    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline void SetFailureDescription(FailureDescription&& value) { m_failureDescriptionHasBeenSet = true; m_failureDescription = std::move(value); }

    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithFailureDescription(const FailureDescription& value) { SetFailureDescription(value); return *this;}

    /**
     * <p>Provides details in case one of the following operations fails due to an
     * error related to KMS: <a>CreateDeliveryStream</a>, <a>DeleteDeliveryStream</a>,
     * <a>StartDeliveryStreamEncryption</a>, <a>StopDeliveryStreamEncryption</a>.</p>
     */
    inline DeliveryStreamEncryptionConfiguration& WithFailureDescription(FailureDescription&& value) { SetFailureDescription(std::move(value)); return *this;}

  private:

    Aws::String m_keyARN;
    bool m_keyARNHasBeenSet = false;

    KeyType m_keyType;
    bool m_keyTypeHasBeenSet = false;

    DeliveryStreamEncryptionStatus m_status;
    bool m_statusHasBeenSet = false;

    FailureDescription m_failureDescription;
    bool m_failureDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
